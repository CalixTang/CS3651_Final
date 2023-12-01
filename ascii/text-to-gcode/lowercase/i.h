#include "../constants.h"
int draw_i() {
	pen_up();
	move_to_relative(0, 847);
	pen_down();
	move_to_relative(1, 848);
	move_to_relative(4, 848);
	move_to_relative(5, 847);
	move_to_relative(5, 841);
	move_to_relative(4, 840);
	move_to_relative(1, 840);
	move_to_relative(0, 841);
	move_to_relative(0, 847);
	pen_up();
	move_to_relative(2, 597);
	pen_down();
	move_to_relative(2, 0);
	return 5;
}