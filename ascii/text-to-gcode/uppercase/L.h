#include ../constants.h
int draw_L() {
	pen_up();
	move_to_relative(0, 845);
	pen_down();
	move_to_relative(0, 0);
	move_to_relative(508, 0);
	return 508;
}