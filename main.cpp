#include <ncurses.h>

int main() {
	int inputKey;

	initscr();
	raw();
	mvprintw(1,2,"Hello world :) Press Q to quit. ");

	noecho();
	inputKey = getch();

	while(inputKey != 113) {
		printw(": [KEY #%i PRESSED] ", inputKey);
		inputKey = getch();
	}

	endwin();
	return 0;
}
