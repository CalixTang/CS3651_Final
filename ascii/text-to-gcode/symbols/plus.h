#include ../constants.h
int draw_plus() {
	pen_up();
	move_to_relative(238, 583);
	pen_down();
	move_to_relative(238, 119);
	pen_up();
	move_to_relative(0, 351);
	pen_down();
	move_to_relative(472, 351);
	return 472;
}