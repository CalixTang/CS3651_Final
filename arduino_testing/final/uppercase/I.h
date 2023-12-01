#include "../constants.h"
int draw_I() {
	pen_up();
	move_to_relative(0, 845);
	pen_down();
	move_to_relative(0, 0);
	return 0;
}