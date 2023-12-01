#include "../constants.h"
int draw_quotation_marks() {
	pen_up();
	move_to_relative(142, 861);
	pen_down();
	move_to_relative(142, 621);
	pen_up();
	move_to_relative(352, 621);
	pen_down();
	move_to_relative(352, 861);
	return 352;
}