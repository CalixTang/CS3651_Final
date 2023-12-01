#include "../constants.h"
int draw_comma() {
	pen_up();
	move_to_relative(257, 114);
	pen_down();
	move_to_relative(257, 0);
	move_to_relative(228, -118);
	move_to_relative(142, -162);
	return 257;
}