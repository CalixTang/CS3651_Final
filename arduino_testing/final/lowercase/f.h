#include "../constants.h"
int draw_f() {
	pen_up();
	move_to_relative(302, 849);
	pen_down();
	move_to_relative(264, 851);
	move_to_relative(218, 840);
	move_to_relative(178, 807);
	move_to_relative(147, 761);
	move_to_relative(127, 667);
	move_to_relative(127, 0);
	pen_up();
	move_to_relative(0, 567);
	pen_down();
	move_to_relative(274, 567);
	return 302;
}