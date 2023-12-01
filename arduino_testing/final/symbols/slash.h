#include "../constants.h"
int draw_slash() {
	pen_up();
	move_to_relative(142, -20);
	pen_down();
	move_to_relative(654, 848);
	return 654;
}