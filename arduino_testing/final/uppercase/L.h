#include "../constants.h"
int draw_L() {
	pen_up();
	move_to_relative(142, 862);
	pen_down();
	move_to_relative(142, 0);
	move_to_relative(651, 0);
	return 651;
}