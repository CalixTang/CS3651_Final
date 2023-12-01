#include "../constants.h"
int draw_exclamation_mark() {
	pen_up();
	move_to_relative(0, 844);
	pen_down();
	move_to_relative(0, 246);
	pen_up();
	move_to_relative(0, 0);
	pen_down();
	move_to_relative(0, 0);
	return 0;
}