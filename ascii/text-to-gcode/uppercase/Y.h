#include ../constants.h
int draw_Y() {
	pen_up();
	move_to_relative(0, 845);
	pen_down();
	move_to_relative(352, 422);
	pen_up();
	move_to_relative(352, 0);
	pen_down();
	move_to_relative(352, 422);
	move_to_relative(705, 845);
	return 705;
}