#include "../constants.h"
int draw_u() {
	pen_up();
	move_to_relative(0, 597);
	pen_down();
	move_to_relative(0, 201);
	move_to_relative(14, 121);
	move_to_relative(41, 39);
	move_to_relative(85, 2);
	move_to_relative(168, -15);
	move_to_relative(222, -11);
	move_to_relative(277, 7);
	move_to_relative(331, 54);
	move_to_relative(381, 135);
	move_to_relative(441, 247);
	pen_up();
	move_to_relative(441, 0);
	pen_down();
	move_to_relative(441, 597);
	return 441;
}