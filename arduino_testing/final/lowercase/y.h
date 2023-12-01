#include "../constants.h"
int draw_y() {
	pen_up();
	move_to_relative(0, 597);
	pen_down();
	move_to_relative(297, -11);
	pen_up();
	move_to_relative(42, -226);
	pen_down();
	move_to_relative(67, -229);
	move_to_relative(91, -229);
	move_to_relative(157, -215);
	move_to_relative(210, -175);
	move_to_relative(255, -106);
	move_to_relative(297, -11);
	move_to_relative(520, 597);
	return 520;
}