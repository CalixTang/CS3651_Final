#include ../constants.h
int draw_colon() {
	pen_up();
	move_to_relative(0, 401);
	pen_down();
	move_to_relative(0, 401);
	pen_up();
	move_to_relative(0, 56);
	pen_down();
	move_to_relative(0, 56);
	return 0;
}