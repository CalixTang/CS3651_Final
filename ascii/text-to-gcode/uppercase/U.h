#include ../constants.h
int draw_U() {
	pen_up();
	move_to_relative(0, 845);
	pen_down();
	move_to_relative(0, 354);
	move_to_relative(2, 268);
	move_to_relative(17, 183);
	move_to_relative(48, 106);
	move_to_relative(105, 43);
	move_to_relative(197, 0);
	move_to_relative(328, -15);
	move_to_relative(461, 0);
	move_to_relative(552, 43);
	move_to_relative(610, 106);
	move_to_relative(641, 183);
	move_to_relative(655, 268);
	move_to_relative(658, 354);
	move_to_relative(658, 845);
	return 658;
}