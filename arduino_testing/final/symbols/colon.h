#include "../constants.h"
int draw_colon() {
	pen_up();
	move_to_relative(142, 414);
	pen_down();
	move_to_relative(142, 405);
	move_to_relative(151, 405);
	move_to_relative(151, 414);
	move_to_relative(142, 414);
	pen_up();
	move_to_relative(142, 57);
	pen_down();
	move_to_relative(142, 48);
	move_to_relative(151, 48);
	move_to_relative(151, 57);
	move_to_relative(142, 57);
	return 151;
}