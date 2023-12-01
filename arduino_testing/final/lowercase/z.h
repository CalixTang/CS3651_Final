#include "../constants.h"
int draw_z() {
	pen_up();
	move_to_relative(165, 609);
	pen_down();
	move_to_relative(632, 609);
	move_to_relative(142, 0);
	move_to_relative(651, 0);
	return 651;
}