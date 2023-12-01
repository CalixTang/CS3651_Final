#include "../constants.h"
int draw_w() {
	pen_up();
	move_to_relative(142, 609);
	pen_down();
	move_to_relative(360, 0);
	move_to_relative(550, 609);
	move_to_relative(745, 0);
	move_to_relative(957, 609);
	return 957;
}