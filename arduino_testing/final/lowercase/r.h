#include "../constants.h"
int draw_r() {
	pen_up();
	move_to_relative(0, 0);
	pen_down();
	move_to_relative(0, 597);
	pen_up();
	move_to_relative(0, 427);
	pen_down();
	move_to_relative(64, 515);
	move_to_relative(117, 565);
	move_to_relative(168, 595);
	move_to_relative(215, 610);
	move_to_relative(257, 613);
	move_to_relative(268, 613);
	move_to_relative(281, 611);
	return 281;
}