#include "../constants.h"
int draw_vertical_bar() {
	pen_up();
	move_to_relative(142, 861);
	pen_down();
	move_to_relative(142, -42);
	return 142;
}