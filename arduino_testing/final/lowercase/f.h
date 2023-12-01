#include "../constants.h"
int draw_f() {
	pen_up();
	move_to_relative(445, 867);
	pen_down();
	move_to_relative(407, 868);
	move_to_relative(361, 857);
	move_to_relative(321, 824);
	move_to_relative(290, 777);
	move_to_relative(270, 681);
	move_to_relative(270, 0);
	pen_up();
	move_to_relative(142, 578);
	pen_down();
	move_to_relative(417, 578);
	return 445;
}