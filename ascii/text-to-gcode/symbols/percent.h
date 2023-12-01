#include "../constants.h"
int draw_percent() {
	pen_up();
	move_to_relative(181, 859);
	pen_down();
	move_to_relative(255, 844);
	move_to_relative(312, 800);
	move_to_relative(348, 729);
	move_to_relative(361, 634);
	move_to_relative(312, 469);
	move_to_relative(181, 411);
	move_to_relative(48, 469);
	move_to_relative(0, 634);
	move_to_relative(48, 800);
	move_to_relative(181, 859);
	pen_up();
	move_to_relative(684, 844);
	pen_down();
	move_to_relative(157, 0);
	pen_up();
	move_to_relative(481, 210);
	pen_down();
	move_to_relative(528, 373);
	move_to_relative(661, 432);
	move_to_relative(794, 373);
	move_to_relative(842, 210);
	move_to_relative(794, 43);
	move_to_relative(661, -15);
	move_to_relative(528, 43);
	move_to_relative(481, 210);
	return 842;
}