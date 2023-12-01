#include ../constants.h
int draw_o() {
	pen_up();
	move_to_relative(271, 613);
	pen_down();
	move_to_relative(384, 592);
	move_to_relative(470, 530);
	move_to_relative(524, 431);
	move_to_relative(542, 299);
	move_to_relative(522, 166);
	move_to_relative(468, 67);
	move_to_relative(382, 5);
	move_to_relative(271, -15);
	move_to_relative(160, 5);
	move_to_relative(74, 67);
	move_to_relative(18, 165);
	move_to_relative(0, 299);
	move_to_relative(18, 432);
	move_to_relative(72, 530);
	move_to_relative(160, 592);
	move_to_relative(271, 613);
	return 542;
}