#include "../constants.h"
int draw_Q() {
	pen_up();
	move_to_relative(115, 742);
	pen_down();
	move_to_relative(244, 830);
	move_to_relative(407, 861);
	move_to_relative(570, 830);
	move_to_relative(698, 742);
	move_to_relative(784, 604);
	move_to_relative(814, 422);
	move_to_relative(784, 240);
	move_to_relative(698, 103);
	move_to_relative(570, 15);
	move_to_relative(407, -15);
	move_to_relative(244, 15);
	move_to_relative(115, 103);
	move_to_relative(30, 240);
	move_to_relative(0, 422);
	move_to_relative(30, 604);
	move_to_relative(115, 742);
	pen_up();
	move_to_relative(508, 189);
	pen_down();
	move_to_relative(802, -36);
	return 814;
}