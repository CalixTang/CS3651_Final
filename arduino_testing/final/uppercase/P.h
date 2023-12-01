#include "../constants.h"
int draw_P() {
	pen_up();
	move_to_relative(142, 862);
	pen_down();
	move_to_relative(142, 0);
	pen_up();
	move_to_relative(142, 431);
	pen_down();
	move_to_relative(400, 431);
	move_to_relative(594, 475);
	move_to_relative(651, 527);
	move_to_relative(678, 588);
	move_to_relative(691, 650);
	move_to_relative(658, 754);
	move_to_relative(632, 787);
	move_to_relative(554, 837);
	move_to_relative(455, 862);
	move_to_relative(142, 862);
	return 691;
}