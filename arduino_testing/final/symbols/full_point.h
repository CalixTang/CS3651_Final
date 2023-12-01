#include "../constants.h"
int draw_full_point() {
	pen_up();
	move_to_relative(142, 57);
	pen_down();
	move_to_relative(151, 57);
	move_to_relative(151, 48);
	move_to_relative(142, 48);
	move_to_relative(142, 57);
	return 151;
}