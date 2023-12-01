#include "../constants.h"
int draw_t() {
	pen_up();
	move_to_relative(302, -7);
	pen_down();
	move_to_relative(264, -8);
	move_to_relative(218, 2);
	move_to_relative(178, 35);
	move_to_relative(147, 81);
	move_to_relative(127, 175);
	move_to_relative(127, 754);
	pen_up();
	move_to_relative(0, 567);
	pen_down();
	move_to_relative(274, 567);
	return 302;
}