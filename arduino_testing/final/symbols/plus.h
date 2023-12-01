#include "../constants.h"
int draw_plus() {
	pen_up();
	move_to_relative(381, 595);
	pen_down();
	move_to_relative(381, 121);
	pen_up();
	move_to_relative(142, 358);
	pen_down();
	move_to_relative(615, 358);
	return 615;
}