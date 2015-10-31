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
	
	const int NOTE_C = 262;
	const int NOTE_CS = 277;
	const int NOTE_D = 294;
	const int NOTE_DS = 311;
	const int NOTE_E = 330;
	const int NOTE_F = 349;
	const int NOTE_FS = 370;
	const int NOTE_G = 392;
	const int NOTE_GS = 415;
	const int NOTE_A = 440;
	const int NOTE_AS = 466;
	const int NOTE_B = 494;
	
	initscr();
	raw();
	keypad(stdscr, TRUE);
	mvprintw(1, 2, "Enabled keys = {A,S,D,F,R,Q}. Press Q to quit. ");

	noecho();
	inputKey = getch();

	while(inputKey != KEY_Q) {
		printw("[KEY #%i PRESSED] ", inputKey);
		
		if (inputKey == KEY_R) {
			sound::beep();
			
		}else if (inputKey == KEY_A) {
			sound::tone(NOTE_C, 180);
		}else if (inputKey == KEY_S) {
			sound::tone(NOTE_G, 180);
		}else if (inputKey == KEY_D) {
			sound::tone(NOTE_A, 180);
		}else if (inputKey == KEY_F) {
			sound::tone(NOTE_C, 400);
		}
		
		inputKey = getch();
	}

	endwin();
	return 0;
}
