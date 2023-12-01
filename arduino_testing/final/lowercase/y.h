#include "../constants.h"
int draw_y() {
	pen_up();
	move_to_relative(142, 609);
	pen_down();
	move_to_relative(440, -11);
	pen_up();
	move_to_relative(185, -231);
	pen_down();
	move_to_relative(210, -234);
	move_to_relative(234, -234);
	move_to_relative(300, -219);
	move_to_relative(352, -178);
	move_to_relative(398, -108);
	move_to_relative(440, -11);
	move_to_relative(662, 609);
	return 662;
}