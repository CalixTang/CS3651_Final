#include ../constants.h
int draw_apostrophe() {
	pen_up();
	move_to_relative(0, 844);
	pen_down();
	move_to_relative(0, 608);
	return 0;
}