#include "../constants.h"
int draw_n() {
	pen_up();
	move_to_relative(142, 577);
	pen_down();
	move_to_relative(142, 0);
	pen_up();
	move_to_relative(142, 357);
	pen_down();
	move_to_relative(202, 471);
	move_to_relative(252, 554);
	move_to_relative(307, 602);
	move_to_relative(361, 621);
	move_to_relative(415, 625);
	move_to_relative(498, 607);
	move_to_relative(542, 570);
	move_to_relative(570, 485);
	move_to_relative(584, 404);
	move_to_relative(584, 0);
	return 584;
}