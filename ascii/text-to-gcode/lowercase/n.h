#include "../constants.h"
int draw_n() {
	pen_up();
	move_to_relative(0, 565);
	pen_down();
	move_to_relative(0, 0);
	pen_up();
	move_to_relative(0, 350);
	pen_down();
	move_to_relative(60, 462);
	move_to_relative(110, 543);
	move_to_relative(164, 590);
	move_to_relative(218, 608);
	move_to_relative(272, 613);
	move_to_relative(355, 595);
	move_to_relative(400, 558);
	move_to_relative(427, 476);
	move_to_relative(441, 396);
	move_to_relative(441, 0);
	return 441;
}