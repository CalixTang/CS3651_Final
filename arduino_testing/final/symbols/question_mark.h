#include "../constants.h"
int draw_question_mark() {
	pen_up();
	move_to_relative(142, 630);
	pen_down();
	move_to_relative(164, 728);
	move_to_relative(215, 807);
	move_to_relative(292, 858);
	move_to_relative(390, 877);
	move_to_relative(475, 861);
	move_to_relative(544, 817);
	move_to_relative(591, 750);
	move_to_relative(608, 665);
	move_to_relative(598, 595);
	move_to_relative(572, 540);
	move_to_relative(532, 492);
	move_to_relative(482, 451);
	move_to_relative(441, 414);
	move_to_relative(407, 375);
	move_to_relative(371, 331);
	move_to_relative(351, 277);
	move_to_relative(344, 202);
	pen_up();
	move_to_relative(342, 8);
	pen_down();
	move_to_relative(342, 0);
	move_to_relative(351, 0);
	move_to_relative(351, 8);
	move_to_relative(342, 8);
	return 608;
}