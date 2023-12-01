#include "../constants.h"
int draw_o() {
	pen_up();
	move_to_relative(414, 625);
	pen_down();
	move_to_relative(527, 604);
	move_to_relative(612, 541);
	move_to_relative(667, 439);
	move_to_relative(685, 305);
	move_to_relative(665, 170);
	move_to_relative(611, 68);
	move_to_relative(525, 5);
	move_to_relative(414, -15);
	move_to_relative(302, 5);
	move_to_relative(217, 68);
	move_to_relative(161, 168);
	move_to_relative(142, 305);
	move_to_relative(161, 441);
	move_to_relative(215, 541);
	move_to_relative(302, 604);
	move_to_relative(414, 625);
	return 685;
}