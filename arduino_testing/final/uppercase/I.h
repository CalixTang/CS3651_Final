#include "../constants.h"
int draw_I() {
	pen_up();
	move_to_relative(142, 862);
	pen_down();
	move_to_relative(142, 0);
	return 142;
}