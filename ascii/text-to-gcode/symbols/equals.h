#include ../constants.h
int draw_equals() {
	pen_up();
	move_to_relative(0, 441);
	pen_down();
	move_to_relative(428, 441);
	pen_up();
	move_to_relative(428, 264);
	pen_down();
	move_to_relative(0, 264);
	return 428;
}