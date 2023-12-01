#include "../constants.h"
int draw_full_point() {
	pen_up();
	move_to_relative(0, 58);
	pen_down();
	move_to_relative(1, 60);
	move_to_relative(4, 60);
	move_to_relative(5, 58);
	move_to_relative(5, 53);
	move_to_relative(4, 51);
	move_to_relative(1, 51);
	move_to_relative(0, 53);
	move_to_relative(0, 58);
	return 5;
}