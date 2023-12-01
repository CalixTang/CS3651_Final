#include "../constants.h"
int draw_V() {
	pen_up();
	move_to_relative(142, 862);
	pen_down();
	move_to_relative(520, 0);
	move_to_relative(898, 862);
	return 898;
}