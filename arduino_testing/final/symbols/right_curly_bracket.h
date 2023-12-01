#include "../constants.h"
int draw_right_curly_bracket() {
	pen_up();
	move_to_relative(142, 861);
	pen_down();
	move_to_relative(237, 861);
	move_to_relative(280, 854);
	move_to_relative(304, 831);
	move_to_relative(317, 791);
	move_to_relative(321, 732);
	move_to_relative(322, 582);
	move_to_relative(340, 509);
	move_to_relative(392, 411);
	move_to_relative(464, 362);
	move_to_relative(392, 314);
	move_to_relative(340, 215);
	move_to_relative(322, 142);
	move_to_relative(321, -7);
	move_to_relative(317, -65);
	move_to_relative(304, -105);
	move_to_relative(280, -128);
	move_to_relative(237, -135);
	move_to_relative(142, -135);
	return 464;
}