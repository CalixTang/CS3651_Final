#include "../constants.h"
int draw_4() {
	pen_up();
	move_to_relative(577, 0);
	pen_down();
	move_to_relative(577, 861);
	move_to_relative(142, 295);
	move_to_relative(730, 295);
	return 730;
}