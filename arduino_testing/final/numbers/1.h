#include "../constants.h"
int draw_1() {
	pen_up();
	move_to_relative(142, 638);
	pen_down();
	move_to_relative(262, 700);
	move_to_relative(355, 778);
	move_to_relative(418, 861);
	move_to_relative(418, 0);
	return 418;
}