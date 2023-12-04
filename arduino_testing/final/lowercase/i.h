#include "../constants.h"
int draw_i() {
	pen_up();
	move_to_relative(28, 868);
	pen_down();
	move_to_relative(48, 859);
	move_to_relative(57, 840);
	move_to_relative(48, 820);
	move_to_relative(28, 812);
	move_to_relative(8, 820);
	move_to_relative(0, 840);
	move_to_relative(8, 859);
	move_to_relative(28, 868);
	pen_up();
	move_to_relative(28, 597);
	pen_down();
	move_to_relative(28, 0);
	return 57;
}