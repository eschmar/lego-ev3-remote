#include <ncurses.h>

int main() {
	int inputKey;

	initscr();
	raw();
	mvprintw(1,2,"Hello world :) Press Q to quit. ");

	noecho();
	inputKey = getch();

	while(inputKey != 113) {
		inputKey = getch();
		printw(": [KEY #%i PRESSED] ", inputKey);
	}

	endwin();
	return 0;
}
