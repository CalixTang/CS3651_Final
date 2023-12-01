#include "../constants.h"
int draw_j() {
	pen_up();
	move_to_relative(327, 865);
	pen_down();
	move_to_relative(327, 857);
	move_to_relative(335, 857);
	move_to_relative(335, 865);
	move_to_relative(327, 865);
	pen_up();
	move_to_relative(331, 611);
	pen_down();
	move_to_relative(331, -25);
	move_to_relative(321, -131);
	move_to_relative(292, -195);
	move_to_relative(248, -227);
	move_to_relative(191, -234);
	move_to_relative(142, -232);
	return 335;
}