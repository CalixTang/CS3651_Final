#include "../constants.h"
int draw_caret() {
	pen_up();
	move_to_relative(0, 617);
	pen_down();
	move_to_relative(151, 813);
	move_to_relative(301, 617);
	return 301;
}