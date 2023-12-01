#include ../constants.h
int draw_V() {
	pen_up();
	move_to_relative(0, 845);
	pen_down();
	move_to_relative(377, 0);
	move_to_relative(755, 845);
	return 755;
}