#include "../constants.h"
int draw_M() {
	pen_up();
	move_to_relative(142, 0);
	pen_down();
	move_to_relative(142, 862);
	move_to_relative(550, 0);
	move_to_relative(955, 862);
	move_to_relative(955, 0);
	return 955;
}