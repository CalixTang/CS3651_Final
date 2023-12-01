#include ../constants.h
int draw_K() {
	pen_up();
	move_to_relative(0, 845);
	pen_down();
	move_to_relative(0, 0);
	pen_up();
	move_to_relative(625, 0);
	pen_down();
	move_to_relative(245, 505);
	pen_up();
	move_to_relative(0, 294);
	pen_down();
	move_to_relative(640, 845);
	return 640;
}