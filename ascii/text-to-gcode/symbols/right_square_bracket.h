#include "../constants.h"
int draw_right_square_bracket() {
	pen_up();
	move_to_relative(0, 844);
	pen_down();
	move_to_relative(240, 844);
	move_to_relative(240, -134);
	move_to_relative(0, -134);
	return 240;
}