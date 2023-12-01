#include "../constants.h"
int draw_E() {
	pen_up();
	move_to_relative(744, 862);
	pen_down();
	move_to_relative(142, 862);
	move_to_relative(142, 0);
	move_to_relative(744, 0);
	pen_up();
	move_to_relative(142, 431);
	pen_down();
	move_to_relative(678, 431);
	return 744;
}