import os
from gcode_to_arduino import special_char_names, special_chars, char_to_name



if __name__ == '__main__':


    lines = []


    '''include statements'''
    #0-9
    for i in range(48, 58):
        lines.append('#include "numbers/' + chr(i) + '.h"')
        
    #a-z
    for i in range(97, 123):
        lines.append('#include "lowercase/' + chr(i) + '.h"')

    #A-Z
    for i in range(65, 91):
        lines.append('#include "uppercase/' + chr(i) + '.h"')

    for sc in special_chars:
        lines.append('#include "symbols/' + char_to_name[sc] + '.h"')

    
    '''switch statement'''
    lines.append('int draw_char(char c) {')
    lines.append('\tswitch(c) {')
    #0-9
    for i in range(48, 58):
        lines.append('\t\tcase \'' + chr(i) + '\':')
        lines.append('\t\t\treturn draw_' + chr(i) + '();')
        
    #a-z
    for i in range(97, 123):
        lines.append('\t\tcase \'' + chr(i) + '\':')
        lines.append('\t\t\treturn draw_' + chr(i) + '();')

    #A-Z
    for i in range(65, 91):
        lines.append('\t\tcase \'' + chr(i) + '\':')
        lines.append('\t\t\treturn draw_' + chr(i) + '();')

    for sc in special_chars:
        lines.append('\t\tcase \'' + sc + '\':')
        lines.append('\t\t\treturn draw_' + char_to_name[sc] + '();')

    lines.append("\t\case '\\n':")
    lines.append('\t\t\treturn -2;')
    lines.append('\t\tdefault:')
    lines.append('\t\t\treturn -1;')
    lines.append('\t}')
    lines.append('}')

    with open('draw_char.h', 'w+') as outfile:
        outfile.write('\n'.join(lines))