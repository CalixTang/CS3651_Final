#include "../constants.h"
int draw_D() {
	pen_up();
	move_to_relative(0, 844);
	pen_down();
	move_to_relative(260, 844);
	move_to_relative(451, 818);
	move_to_relative(587, 740);
	move_to_relative(668, 611);
	move_to_relative(695, 422);
	move_to_relative(668, 233);
	move_to_relative(587, 105);
	move_to_relative(451, 26);
	move_to_relative(260, 1);
	move_to_relative(0, 1);
	move_to_relative(0, 844);
	return 695;
}