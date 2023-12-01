#include "../constants.h"
int draw_K() {
	pen_up();
	move_to_relative(142, 862);
	pen_down();
	move_to_relative(142, 0);
	pen_up();
	move_to_relative(768, 0);
	pen_down();
	move_to_relative(388, 515);
	pen_up();
	move_to_relative(142, 300);
	pen_down();
	move_to_relative(782, 862);
	return 782;
}