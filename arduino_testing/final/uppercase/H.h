#include "../constants.h"
int draw_H() {
	pen_up();
	move_to_relative(142, 862);
	pen_down();
	move_to_relative(142, 0);
	pen_up();
	move_to_relative(142, 459);
	pen_down();
	move_to_relative(801, 459);
	pen_up();
	move_to_relative(801, 0);
	pen_down();
	move_to_relative(801, 862);
	return 801;
}