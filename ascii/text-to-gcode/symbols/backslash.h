#include ../constants.h
int draw_backslash() {
	pen_up();
	move_to_relative(0, 831);
	pen_down();
	move_to_relative(511, -19);
	return 511;
}