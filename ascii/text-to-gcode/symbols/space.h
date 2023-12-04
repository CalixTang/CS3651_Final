#include "../constants.h"
int draw_space() {
	pen_up();
	move_to_relative(571, 0);
	pen_down();
	return 571;
}