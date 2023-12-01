#include ../constants.h
int draw_x() {
	pen_up();
	move_to_relative(0, 597);
	pen_down();
	move_to_relative(507, 0);
	pen_up();
	move_to_relative(0, 0);
	pen_down();
	move_to_relative(507, 597);
	return 507;
}