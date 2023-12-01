#include "../constants.h"
int draw_right_square_bracket() {
	pen_up();
	move_to_relative(142, 861);
	pen_down();
	move_to_relative(382, 861);
	move_to_relative(382, -137);
	move_to_relative(142, -137);
	return 382;
}