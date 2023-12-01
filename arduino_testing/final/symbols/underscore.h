#include "../constants.h"
int draw_underscore() {
	pen_up();
	move_to_relative(142, -155);
	pen_down();
	move_to_relative(771, -155);
	return 771;
}