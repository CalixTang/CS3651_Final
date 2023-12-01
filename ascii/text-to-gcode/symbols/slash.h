#include "../constants.h"
int draw_slash() {
	pen_up();
	move_to_relative(0, -19);
	pen_down();
	move_to_relative(511, 831);
	return 511;
}