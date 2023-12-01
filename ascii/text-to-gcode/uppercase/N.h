#include ../constants.h
int draw_N() {
	pen_up();
	move_to_relative(0, 0);
	pen_down();
	move_to_relative(0, 845);
	move_to_relative(671, 0);
	move_to_relative(671, 845);
	return 671;
}