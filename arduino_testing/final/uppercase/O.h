#include "../constants.h"
int draw_O() {
	pen_up();
	move_to_relative(258, 757);
	pen_down();
	move_to_relative(387, 847);
	move_to_relative(550, 878);
	move_to_relative(712, 847);
	move_to_relative(841, 757);
	move_to_relative(927, 617);
	move_to_relative(957, 431);
	move_to_relative(927, 245);
	move_to_relative(841, 105);
	move_to_relative(712, 15);
	move_to_relative(550, -15);
	move_to_relative(387, 15);
	move_to_relative(258, 105);
	move_to_relative(172, 245);
	move_to_relative(142, 431);
	move_to_relative(172, 617);
	move_to_relative(258, 757);
	return 957;
}