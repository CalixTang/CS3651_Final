import os

#special chars
special_chars = ['&', "\\'", '*', '@', '\\\\', '`', '^', ':', ',', '$', '=', '!', '.', '>', '#', '{', '(', '[', '<', '-', '%', '+', '?', '\\"', '}', ')', ']', ';', '/', ' ', '~', '_', '|']
special_char_names = ['ampersand', 'apostrophe', 'asterisk', 'at', 'backslash', 'backtick', 'caret', 'colon', 'comma', 'dollar', 'equals', 'exclamation_mark', 'full_point', 'greater_than', 'hash', 'left_curly_bracket', 'left_parenthesis', 'left_square_bracket', 'less_than', 'minus', 'percent', 'plus', 'question_mark', 'quotation_marks', 'right_curly_bracket', 'right_parenthesis', 'right_square_bracket', 'semicolon', 'slash', 'space', 'tilde', 'underscore', 'vertical_bar']
char_to_name = dict(zip(special_chars, special_char_names)) 


if __name__ == '__main__':

    #map X[-1, 6] to [0, 1000]
    #map Y[0, 10] to [0, 1400]
    def translate(x, y):
        minx, maxx, miny, maxy = 0., 7., 0., 10. #might have to try -1. and 6. for x
        xrange, yrange = maxx-minx, maxy-miny

        aminx, amaxx, aminy, amaxy = 0, 1000, 0, 1400

        return (amaxx * (x - minx) / xrange), (amaxy * (y - miny) / yrange) 

    
    def translate_char(c, folder, exp_name = None):
        data = []
        with open(os.path.join(os.getcwd(), 'ascii_gcode', folder, (exp_name if exp_name else c) + '.nc'), 'r') as infile:
            data = infile.readlines()
            data = data[1:] #ignore first line
        
        lines = [
            '#include "../constants.h"',
            'int draw_' + (exp_name if exp_name else c) + '() {',
        ]
        max_x = float('-inf')

        for line in data: 
            if line[0:2] == 'G0':
                lines.append('\tpen_up();')

            #translate line
            x, y = translate(float(line[line.index('X') + 1 : line.index('Y')]), float(line[line.index('Y') + 1 : ]))
            x, y = int(x), int(y)
            max_x = max(max_x, x) 
            lines.append('\tmove_to_relative(' + str(x) + ', ' + str(y) + ');')

                
            if line[0:2] == 'G0':
                lines.append('\tpen_down();') #assume no consecutive G0 commands


        lines.append('\treturn ' + str(max_x) + ';')
        lines.append('}')
        with open(os.path.join(os.getcwd(), folder, (exp_name if exp_name else c) + '.h'), 'w+') as outfile:
            outfile.write('\n'.join(lines))

        print(exp_name if exp_name else c)


    #0-9
    for i in range(48, 58):
        translate_char(chr(i), 'numbers')
        
    #a-z
    for i in range(97, 123):
        translate_char(chr(i), 'lowercase')

    #A-Z
    for i in range(65, 91):
        translate_char(chr(i), 'uppercase')

    for sc in special_chars:
        translate_char(sc, 'symbols', char_to_name[sc],)