#include "../constants.h"
int draw_semicolon() {
	pen_up();
	move_to_relative(114, 391);
	pen_down();
	move_to_relative(134, 383);
	move_to_relative(142, 364);
	move_to_relative(134, 344);
	move_to_relative(114, 336);
	move_to_relative(94, 344);
	move_to_relative(85, 364);
	move_to_relative(94, 383);
	move_to_relative(114, 391);
	pen_up();
	move_to_relative(114, 112);
	pen_down();
	move_to_relative(114, 0);
	move_to_relative(85, -116);
	move_to_relative(0, -159);
	return 142;
}