#include ../constants.h
int draw_A() {
	pen_up();
	move_to_relative(0, 0);
	pen_down();
	move_to_relative(387, 845);
	move_to_relative(774, 0);
	pen_up();
	move_to_relative(638, 296);
	pen_down();
	move_to_relative(135, 296);
	return 774;
}