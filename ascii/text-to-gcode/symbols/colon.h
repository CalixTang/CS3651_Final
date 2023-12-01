#include "../constants.h"
int draw_colon() {
	pen_up();
	move_to_relative(0, 404);
	pen_down();
	move_to_relative(1, 406);
	move_to_relative(4, 406);
	move_to_relative(5, 404);
	move_to_relative(5, 399);
	move_to_relative(4, 397);
	move_to_relative(1, 397);
	move_to_relative(0, 399);
	move_to_relative(0, 404);
	pen_up();
	move_to_relative(0, 58);
	pen_down();
	move_to_relative(1, 60);
	move_to_relative(4, 60);
	move_to_relative(5, 58);
	move_to_relative(5, 53);
	move_to_relative(4, 51);
	move_to_relative(1, 51);
	move_to_relative(0, 53);
	move_to_relative(0, 57);
	return 5;
}