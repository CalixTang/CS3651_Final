#include "../constants.h"
int draw_h() {
	pen_up();
	move_to_relative(142, 861);
	pen_down();
	move_to_relative(142, 0);
	pen_up();
	move_to_relative(142, 442);
	pen_down();
	move_to_relative(205, 520);
	move_to_relative(264, 574);
	move_to_relative(320, 607);
	move_to_relative(371, 621);
	move_to_relative(418, 625);
	move_to_relative(500, 608);
	move_to_relative(560, 564);
	move_to_relative(585, 514);
	move_to_relative(607, 404);
	move_to_relative(607, 0);
	return 607;
}