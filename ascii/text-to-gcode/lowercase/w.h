#include ../constants.h
int draw_w() {
	pen_up();
	move_to_relative(0, 597);
	pen_down();
	move_to_relative(217, 0);
	move_to_relative(407, 597);
	move_to_relative(602, 0);
	move_to_relative(814, 597);
	return 814;
}