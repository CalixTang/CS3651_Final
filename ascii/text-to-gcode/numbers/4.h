#include "../constants.h"
int draw_4() {
	pen_up();
	move_to_relative(434, 0);
	pen_down();
	move_to_relative(434, 844);
	move_to_relative(0, 289);
	move_to_relative(587, 289);
	return 587;
}