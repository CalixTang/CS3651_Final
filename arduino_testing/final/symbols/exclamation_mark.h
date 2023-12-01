#include "../constants.h"
int draw_exclamation_mark() {
	pen_up();
	move_to_relative(147, 861);
	pen_down();
	move_to_relative(147, 251);
	pen_up();
	move_to_relative(142, 8);
	pen_down();
	move_to_relative(142, 0);
	move_to_relative(151, 0);
	move_to_relative(151, 8);
	move_to_relative(142, 8);
	return 151;
}