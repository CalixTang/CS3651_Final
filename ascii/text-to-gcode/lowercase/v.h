#include ../constants.h
int draw_v() {
	pen_up();
	move_to_relative(0, 597);
	pen_down();
	move_to_relative(260, 0);
	move_to_relative(518, 597);
	return 518;
}