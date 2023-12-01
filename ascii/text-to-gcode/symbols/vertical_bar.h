#include "../constants.h"
int draw_vertical_bar() {
	pen_up();
	move_to_relative(0, 844);
	pen_down();
	move_to_relative(0, -42);
	return 0;
}