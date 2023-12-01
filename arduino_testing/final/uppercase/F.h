#include "../constants.h"
int draw_F() {
	pen_up();
	move_to_relative(601, 845);
	pen_down();
	move_to_relative(0, 845);
	move_to_relative(0, 0);
	pen_up();
	move_to_relative(0, 422);
	pen_down();
	move_to_relative(535, 422);
	return 601;
}