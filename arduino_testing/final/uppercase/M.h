#include "../constants.h"
int draw_M() {
	pen_up();
	move_to_relative(0, 0);
	pen_down();
	move_to_relative(0, 845);
	move_to_relative(407, 0);
	move_to_relative(812, 845);
	move_to_relative(812, 0);
	return 812;
}