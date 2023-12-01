#include "../constants.h"
int draw_backtick() {
	pen_up();
	move_to_relative(142, 815);
	pen_down();
	move_to_relative(234, 668);
	return 234;
}