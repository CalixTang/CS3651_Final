#include ../constants.h
int draw_quotation_marks() {
	pen_up();
	move_to_relative(0, 844);
	pen_down();
	move_to_relative(0, 608);
	pen_up();
	move_to_relative(210, 608);
	pen_down();
	move_to_relative(210, 844);
	return 210;
}