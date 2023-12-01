#include "../constants.h"
int draw_apostrophe() {
	pen_up();
	move_to_relative(142, 861);
	pen_down();
	move_to_relative(142, 621);
	return 142;
}