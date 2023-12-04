#include "../constants.h"
int draw_full_point() {
	pen_up();
	move_to_relative(14, 28);
	pen_down();
	move_to_relative(24, 23);
	move_to_relative(28, 14);
	move_to_relative(24, 4);
	move_to_relative(14, 0);
	move_to_relative(4, 4);
	move_to_relative(0, 14);
	move_to_relative(4, 23);
	move_to_relative(14, 28);
	return 28;
}