#include "../constants.h"
int draw_l() {
	pen_up();
	move_to_relative(142, 861);
	pen_down();
	move_to_relative(142, 0);
	return 142;
}