#include <ncurses.h>
#include "ev3dev.h"

using namespace ev3dev;

int main() {
	int inputKey;
	
	const int KEY_A = 97;
	const int KEY_S = 115;
	const int KEY_D = 100;
	const int KEY_F = 102;
	const int KEY_Q = 113;
	const int KEY_R = 114;

	initscr();
	raw();
	mvprintw(1,2,"Hello world :) Press Q to quit. ");

	noecho();
	inputKey = getch();

	while(inputKey != KEY_Q) {
		printw("[KEY #%i PRESSED] ", inputKey);
		
		if (inputKey == KEY_R) {
			sound::beep();
			
		}else if (inputKey == KEY_A) {
			sound::tone(262,180);
		}else if (inputKey == KEY_S) {
			sound::tone(392,180);
		}else if (inputKey == KEY_D) {
			sound::tone(440,180);
		}else if (inputKey == KEY_F) {
			sound::tone(262,400);
		}
		
		inputKey = getch();
	}

	endwin();
	return 0;
}
