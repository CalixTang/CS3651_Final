#include "../constants.h"
int draw_W() {
	pen_up();
	move_to_relative(142, 862);
	pen_down();
	move_to_relative(412, 0);
	move_to_relative(692, 862);
	move_to_relative(974, 0);
	move_to_relative(1244, 862);
	return 1244;
}