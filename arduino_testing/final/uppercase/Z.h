#include "../constants.h"
int draw_Z() {
	pen_up();
	move_to_relative(192, 862);
	pen_down();
	move_to_relative(788, 862);
	move_to_relative(142, 0);
	move_to_relative(805, 0);
	return 805;
}