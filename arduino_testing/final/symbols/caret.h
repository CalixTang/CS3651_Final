#include "../constants.h"
int draw_caret() {
	pen_up();
	move_to_relative(142, 630);
	pen_down();
	move_to_relative(294, 829);
	move_to_relative(444, 630);
	return 444;
}