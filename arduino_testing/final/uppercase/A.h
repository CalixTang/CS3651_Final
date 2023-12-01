#include "../constants.h"
int draw_A() {
	pen_up();
	move_to_relative(142, 0);
	pen_down();
	move_to_relative(530, 862);
	move_to_relative(917, 0);
	pen_up();
	move_to_relative(781, 302);
	pen_down();
	move_to_relative(278, 302);
	return 917;
}