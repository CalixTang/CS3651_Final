#include "../constants.h"
int draw_left_parenthesis() {
	pen_up();
	move_to_relative(375, 879);
	pen_down();
	move_to_relative(280, 772);
	move_to_relative(207, 651);
	move_to_relative(158, 518);
	move_to_relative(142, 382);
	move_to_relative(158, 245);
	move_to_relative(207, 112);
	move_to_relative(280, -8);
	move_to_relative(375, -115);
	return 375;
}