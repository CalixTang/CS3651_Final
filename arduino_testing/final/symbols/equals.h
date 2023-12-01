#include "../constants.h"
int draw_equals() {
	pen_up();
	move_to_relative(142, 449);
	pen_down();
	move_to_relative(571, 449);
	pen_up();
	move_to_relative(571, 270);
	pen_down();
	move_to_relative(142, 270);
	return 571;
}