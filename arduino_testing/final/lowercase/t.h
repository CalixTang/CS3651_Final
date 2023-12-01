#include "../constants.h"
int draw_t() {
	pen_up();
	move_to_relative(445, -7);
	pen_down();
	move_to_relative(407, -8);
	move_to_relative(361, 2);
	move_to_relative(321, 35);
	move_to_relative(290, 82);
	move_to_relative(270, 178);
	move_to_relative(270, 770);
	pen_up();
	move_to_relative(142, 578);
	pen_down();
	move_to_relative(417, 578);
	return 445;
}