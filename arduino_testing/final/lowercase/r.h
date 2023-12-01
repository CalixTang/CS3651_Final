#include "../constants.h"
int draw_r() {
	pen_up();
	move_to_relative(142, 0);
	pen_down();
	move_to_relative(142, 609);
	pen_up();
	move_to_relative(142, 435);
	pen_down();
	move_to_relative(207, 525);
	move_to_relative(259, 577);
	move_to_relative(311, 607);
	move_to_relative(358, 622);
	move_to_relative(400, 625);
	move_to_relative(411, 625);
	move_to_relative(424, 624);
	return 424;
}