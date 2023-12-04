#include "../constants.h"
int draw_exclamation_mark() {
	pen_up();
	move_to_relative(28, 844);
	pen_down();
	move_to_relative(28, 246);
	pen_up();
	move_to_relative(28, 56);
	pen_down();
	move_to_relative(48, 47);
	move_to_relative(57, 28);
	move_to_relative(48, 8);
	move_to_relative(28, 0);
	move_to_relative(8, 8);
	move_to_relative(0, 28);
	move_to_relative(8, 47);
	move_to_relative(28, 56);
	return 57;
}