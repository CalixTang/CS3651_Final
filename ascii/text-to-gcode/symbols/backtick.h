#include ../constants.h
int draw_backtick() {
	pen_up();
	move_to_relative(0, 799);
	pen_down();
	move_to_relative(91, 655);
	return 91;
}