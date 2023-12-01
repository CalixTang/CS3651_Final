#include "../constants.h"
int draw_W() {
	pen_up();
	move_to_relative(0, 845);
	pen_down();
	move_to_relative(270, 0);
	move_to_relative(550, 845);
	move_to_relative(831, 0);
	move_to_relative(1101, 845);
	return 1101;
}