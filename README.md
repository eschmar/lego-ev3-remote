# lego-ev3-remote
Terminal app for remote controlling your Lego EV3 robot.

## work in progress
This is a work in progress. Right now, the application is solely mapping some keyboard inputs to [Debians's beep command](http://manpages.debian.org/cgi-bin/man.cgi?query=BEEP&apropos=0&sektion=1&manpath=Debian+7.8+wheezy&format=html&locale=en) and serves as a starting point.

## compiling
You can either compile it directly on your EV3 brick or set up a toolchain for ARM code. [More information here](https://github.com/ev3dev/ev3dev-lang/tree/develop/cpp).

## requirements
* [ev3dev language bindings for c++](https://github.com/ev3dev/ev3dev-lang)
* ncurses
