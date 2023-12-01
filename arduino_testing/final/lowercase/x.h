#include "../constants.h"
int draw_x() {
	pen_up();
	move_to_relative(142, 609);
	pen_down();
	move_to_relative(650, 0);
	pen_up();
	move_to_relative(142, 0);
	pen_down();
	move_to_relative(650, 609);
	return 650;
}