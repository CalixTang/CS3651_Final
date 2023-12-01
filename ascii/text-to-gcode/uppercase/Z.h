#include "../constants.h"
int draw_Z() {
	pen_up();
	move_to_relative(50, 845);
	pen_down();
	move_to_relative(645, 845);
	move_to_relative(0, 0);
	move_to_relative(662, 0);
	return 662;
}