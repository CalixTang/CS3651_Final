#include "../constants.h"
int draw_asterisk() {
	pen_up();
	move_to_relative(84, 610);
	pen_down();
	move_to_relative(511, 187);
	pen_up();
	move_to_relative(298, 106);
	pen_down();
	move_to_relative(298, 695);
	pen_up();
	move_to_relative(511, 610);
	pen_down();
	move_to_relative(84, 187);
	pen_up();
	move_to_relative(0, 399);
	pen_down();
	move_to_relative(595, 399);
	return 595;
}