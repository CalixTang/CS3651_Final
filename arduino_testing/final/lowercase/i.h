#include "../constants.h"
int draw_i() {
	pen_up();
	move_to_relative(14, 854);
	pen_down();
	move_to_relative(24, 849);
	move_to_relative(28, 840);
	move_to_relative(24, 830);
	move_to_relative(14, 826);
	move_to_relative(4, 830);
	move_to_relative(0, 840);
	move_to_relative(4, 849);
	move_to_relative(14, 854);
	pen_up();
	move_to_relative(14, 597);
	pen_down();
	move_to_relative(14, 0);
	return 28;
}