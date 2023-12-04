#include "../constants.h"
int draw_colon() {
	pen_up();
	move_to_relative(14, 413);
	pen_down();
	move_to_relative(24, 408);
	move_to_relative(28, 399);
	move_to_relative(24, 403);
	move_to_relative(14, 399);
	move_to_relative(4, 403);
	move_to_relative(0, 399);
	move_to_relative(4, 403);
	move_to_relative(14, 413);
	pen_up();
	move_to_relative(14, 56);
	pen_down();
	move_to_relative(24, 51);
	move_to_relative(28, 42);
	move_to_relative(24, 32);
	move_to_relative(14, 28);
	move_to_relative(4, 32);
	move_to_relative(0, 42);
	move_to_relative(4, 51);
	move_to_relative(14, 56);
	return 28;
}