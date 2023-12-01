#include "../constants.h"
int draw_semicolon() {
	pen_up();
	move_to_relative(111, 404);
	pen_down();
	move_to_relative(112, 406);
	move_to_relative(115, 406);
	move_to_relative(117, 404);
	move_to_relative(117, 399);
	move_to_relative(115, 397);
	move_to_relative(112, 397);
	move_to_relative(111, 399);
	move_to_relative(111, 404);
	pen_up();
	move_to_relative(114, 112);
	pen_down();
	move_to_relative(114, 0);
	move_to_relative(85, -116);
	move_to_relative(0, -159);
	return 117;
}