#include "../constants.h"
int draw_Y() {
	pen_up();
	move_to_relative(142, 862);
	pen_down();
	move_to_relative(495, 431);
	pen_up();
	move_to_relative(495, 0);
	pen_down();
	move_to_relative(495, 431);
	move_to_relative(848, 862);
	return 848;
}