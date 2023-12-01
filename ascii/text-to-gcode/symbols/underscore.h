#include ../constants.h
int draw_underscore() {
	pen_up();
	move_to_relative(0, -152);
	pen_down();
	move_to_relative(628, -152);
	return 628;
}