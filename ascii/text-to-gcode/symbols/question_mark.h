#include ../constants.h
int draw_question_mark() {
	pen_up();
	move_to_relative(0, 617);
	pen_down();
	move_to_relative(21, 713);
	move_to_relative(72, 791);
	move_to_relative(150, 841);
	move_to_relative(247, 859);
	move_to_relative(332, 844);
	move_to_relative(401, 800);
	move_to_relative(448, 735);
	move_to_relative(465, 652);
	move_to_relative(455, 583);
	move_to_relative(430, 529);
	move_to_relative(390, 483);
	move_to_relative(340, 442);
	move_to_relative(298, 406);
	move_to_relative(264, 368);
	move_to_relative(228, 324);
	move_to_relative(208, 271);
	move_to_relative(201, 198);
	pen_up();
	move_to_relative(201, 0);
	pen_down();
	move_to_relative(201, 0);
	return 465;
}