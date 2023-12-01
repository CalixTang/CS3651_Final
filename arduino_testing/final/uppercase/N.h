#include "../constants.h"
int draw_N() {
	pen_up();
	move_to_relative(142, 0);
	pen_down();
	move_to_relative(142, 862);
	move_to_relative(814, 0);
	move_to_relative(814, 862);
	return 814;
}