#include "../constants.h"
int draw_asterisk() {
	pen_up();
	move_to_relative(227, 622);
	pen_down();
	move_to_relative(654, 191);
	pen_up();
	move_to_relative(441, 108);
	pen_down();
	move_to_relative(441, 710);
	pen_up();
	move_to_relative(654, 622);
	pen_down();
	move_to_relative(227, 191);
	pen_up();
	move_to_relative(142, 407);
	pen_down();
	move_to_relative(738, 407);
	return 738;
}