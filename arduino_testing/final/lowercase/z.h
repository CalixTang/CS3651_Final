#include "../constants.h"
int draw_z() {
	pen_up();
	move_to_relative(22, 597);
	pen_down();
	move_to_relative(490, 597);
	move_to_relative(0, 0);
	move_to_relative(508, 0);
	return 508;
}