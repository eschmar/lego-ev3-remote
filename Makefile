lego-ev3-remote: main.cpp ev3dev.cpp
	g++ -o $@ $^ -lncurses -std=c++11