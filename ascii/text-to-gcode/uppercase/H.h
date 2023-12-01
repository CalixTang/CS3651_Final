#include "../constants.h"
int draw_H() {
	pen_up();
	move_to_relative(0, 845);
	pen_down();
	move_to_relative(0, 0);
	pen_up();
	move_to_relative(0, 450);
	pen_down();
	move_to_relative(658, 450);
	pen_up();
	move_to_relative(658, 0);
	pen_down();
	move_to_relative(658, 845);
	return 658;
}