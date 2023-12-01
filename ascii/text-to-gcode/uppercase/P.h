#include "../constants.h"
int draw_P() {
	pen_up();
	move_to_relative(0, 845);
	pen_down();
	move_to_relative(0, 0);
	pen_up();
	move_to_relative(0, 422);
	pen_down();
	move_to_relative(257, 422);
	move_to_relative(451, 466);
	move_to_relative(508, 516);
	move_to_relative(535, 576);
	move_to_relative(548, 637);
	move_to_relative(515, 739);
	move_to_relative(490, 771);
	move_to_relative(411, 820);
	move_to_relative(312, 845);
	move_to_relative(0, 845);
	return 548;
}