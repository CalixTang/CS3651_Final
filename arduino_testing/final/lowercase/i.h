#include "../constants.h"
int draw_i() {
	pen_up();
	move_to_relative(142, 865);
	pen_down();
	move_to_relative(142, 857);
	move_to_relative(151, 857);
	move_to_relative(151, 865);
	move_to_relative(142, 865);
	pen_up();
	move_to_relative(147, 609);
	pen_down();
	move_to_relative(147, 0);
	return 151;
}