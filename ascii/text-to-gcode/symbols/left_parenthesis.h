#include "../constants.h"
int draw_left_parenthesis() {
	pen_up();
	move_to_relative(232, 862);
	pen_down();
	move_to_relative(137, 757);
	move_to_relative(64, 638);
	move_to_relative(15, 508);
	move_to_relative(0, 375);
	move_to_relative(15, 240);
	move_to_relative(64, 110);
	move_to_relative(137, -8);
	move_to_relative(232, -113);
	return 232;
}