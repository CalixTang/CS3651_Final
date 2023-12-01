#include "../constants.h"
int draw_minus() {
	pen_up();
	move_to_relative(0, 351);
	pen_down();
	move_to_relative(474, 351);
	return 474;
}