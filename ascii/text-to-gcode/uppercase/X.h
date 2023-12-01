#include ../constants.h
int draw_X() {
	pen_up();
	move_to_relative(0, 845);
	pen_down();
	move_to_relative(705, 0);
	pen_up();
	move_to_relative(0, 0);
	pen_down();
	move_to_relative(705, 845);
	return 705;
}