#include "../constants.h"
int draw_colon() {
	pen_up();
	move_to_relative(28, 391);
	pen_down();
	move_to_relative(48, 383);
	move_to_relative(57, 364);
	move_to_relative(48, 344);
	move_to_relative(28, 336);
	move_to_relative(8, 344);
	move_to_relative(0, 364);
	move_to_relative(8, 383);
	move_to_relative(28, 391);
	pen_up();
	move_to_relative(28, 112);
	pen_down();
	move_to_relative(48, 103);
	move_to_relative(57, 84);
	move_to_relative(48, 64);
	move_to_relative(28, 56);
	move_to_relative(8, 64);
	move_to_relative(0, 84);
	move_to_relative(8, 103);
	move_to_relative(28, 112);
	return 57;
}