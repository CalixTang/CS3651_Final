#include "../constants.h"
int draw_left_square_bracket() {
	pen_up();
	move_to_relative(382, -137);
	pen_down();
	move_to_relative(142, -137);
	move_to_relative(142, 861);
	move_to_relative(382, 861);
	return 382;
}