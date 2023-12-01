#include "../constants.h"
int draw_X() {
	pen_up();
	move_to_relative(142, 862);
	pen_down();
	move_to_relative(848, 0);
	pen_up();
	move_to_relative(142, 0);
	pen_down();
	move_to_relative(848, 862);
	return 848;
}