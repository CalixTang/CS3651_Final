#include ../constants.h
int draw_full_point() {
	pen_up();
	move_to_relative(0, 56);
	pen_down();
	move_to_relative(0, 56);
	return 0;
}