#include "../constants.h"
int draw_u() {
	pen_up();
	move_to_relative(142, 609);
	pen_down();
	move_to_relative(142, 205);
	move_to_relative(157, 124);
	move_to_relative(184, 40);
	move_to_relative(228, 2);
	move_to_relative(311, -15);
	move_to_relative(365, -11);
	move_to_relative(420, 7);
	move_to_relative(474, 55);
	move_to_relative(524, 138);
	move_to_relative(584, 252);
	pen_up();
	move_to_relative(584, 0);
	pen_down();
	move_to_relative(584, 609);
	return 584;
}