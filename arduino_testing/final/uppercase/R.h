#include "../constants.h"
int draw_R() {
	pen_up();
	move_to_relative(142, 0);
	pen_down();
	move_to_relative(142, 862);
	move_to_relative(142, 862);
	move_to_relative(455, 862);
	move_to_relative(554, 837);
	move_to_relative(632, 787);
	move_to_relative(658, 754);
	move_to_relative(691, 650);
	move_to_relative(678, 588);
	move_to_relative(651, 527);
	move_to_relative(594, 475);
	move_to_relative(400, 431);
	pen_up();
	move_to_relative(142, 431);
	pen_down();
	move_to_relative(400, 431);
	move_to_relative(528, 385);
	move_to_relative(628, 228);
	move_to_relative(691, 0);
	return 691;
}