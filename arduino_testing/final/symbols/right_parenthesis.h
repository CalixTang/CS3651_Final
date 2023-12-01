#include "../constants.h"
int draw_right_parenthesis() {
	pen_up();
	move_to_relative(142, 879);
	pen_down();
	move_to_relative(238, 772);
	move_to_relative(311, 651);
	move_to_relative(360, 518);
	move_to_relative(375, 382);
	move_to_relative(360, 245);
	move_to_relative(311, 112);
	move_to_relative(238, -8);
	move_to_relative(142, -115);
	return 375;
}