#include "../constants.h"
int draw_T() {
	pen_up();
	move_to_relative(142, 862);
	pen_down();
	move_to_relative(805, 862);
	pen_up();
	move_to_relative(474, 862);
	pen_down();
	move_to_relative(474, 0);
	return 805;
}