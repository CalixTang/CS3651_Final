#include "../constants.h"
int draw_J() {
	pen_up();
	move_to_relative(0, 208);
	pen_down();
	move_to_relative(14, 116);
	move_to_relative(58, 46);
	move_to_relative(127, 0);
	move_to_relative(215, -15);
	move_to_relative(315, 0);
	move_to_relative(385, 47);
	move_to_relative(428, 134);
	move_to_relative(442, 264);
	move_to_relative(442, 845);
	return 442;
}