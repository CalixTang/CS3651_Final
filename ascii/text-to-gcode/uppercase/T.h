#include ../constants.h
int draw_T() {
	pen_up();
	move_to_relative(0, 845);
	pen_down();
	move_to_relative(662, 845);
	pen_up();
	move_to_relative(331, 845);
	pen_down();
	move_to_relative(331, 0);
	return 662;
}