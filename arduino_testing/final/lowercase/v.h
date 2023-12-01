#include "../constants.h"
int draw_v() {
	pen_up();
	move_to_relative(142, 609);
	pen_down();
	move_to_relative(402, 0);
	move_to_relative(661, 609);
	return 661;
}