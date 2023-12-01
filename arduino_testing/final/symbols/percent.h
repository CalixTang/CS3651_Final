#include "../constants.h"
int draw_percent() {
	pen_up();
	move_to_relative(324, 877);
	pen_down();
	move_to_relative(398, 861);
	move_to_relative(455, 817);
	move_to_relative(491, 744);
	move_to_relative(504, 647);
	move_to_relative(455, 478);
	move_to_relative(324, 419);
	move_to_relative(191, 478);
	move_to_relative(142, 647);
	move_to_relative(191, 817);
	move_to_relative(324, 877);
	pen_up();
	move_to_relative(827, 861);
	pen_down();
	move_to_relative(300, 0);
	pen_up();
	move_to_relative(624, 214);
	pen_down();
	move_to_relative(671, 381);
	move_to_relative(804, 441);
	move_to_relative(937, 381);
	move_to_relative(985, 214);
	move_to_relative(937, 44);
	move_to_relative(804, -15);
	move_to_relative(671, 44);
	move_to_relative(624, 214);
	return 985;
}