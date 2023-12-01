#include "../constants.h"
int draw_J() {
	pen_up();
	move_to_relative(142, 212);
	pen_down();
	move_to_relative(157, 118);
	move_to_relative(201, 47);
	move_to_relative(270, 0);
	move_to_relative(358, -15);
	move_to_relative(458, 0);
	move_to_relative(528, 48);
	move_to_relative(571, 137);
	move_to_relative(585, 270);
	move_to_relative(585, 862);
	return 585;
}