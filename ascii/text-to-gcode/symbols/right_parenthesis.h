#include ../constants.h
int draw_right_parenthesis() {
	pen_up();
	move_to_relative(0, 862);
	pen_down();
	move_to_relative(95, 757);
	move_to_relative(168, 638);
	move_to_relative(217, 508);
	move_to_relative(232, 375);
	move_to_relative(217, 240);
	move_to_relative(168, 110);
	move_to_relative(95, -8);
	move_to_relative(0, -113);
	return 232;
}