#include ../constants.h
int draw_1() {
	pen_up();
	move_to_relative(0, 625);
	pen_down();
	move_to_relative(120, 686);
	move_to_relative(212, 763);
	move_to_relative(275, 844);
	move_to_relative(275, 0);
	return 275;
}