#include "snake.h"
snake::snake() {
	n = 1;
	dot[0].x = 0;
	dot[0].y = 0;
	tt = RIGHT;
	Speed = 300;
}
void snake::hienthi() {
	clrscr();
	for (int i = 0; i < heightdemo; i++) {
		gotoXY(Widthdemo, i);
		putchar(179);
	}
	for (int i = 0; i < Widthdemo; i++) {
		gotoXY( i,heightdemo-1);
		putchar('_');
	}


	TextColor(ColorCode_Red);
	gotoXY(an.food.x, an.food.y);
	cout << "+";

	TextColor(ColorCode_Pink);
	for (int i = 0; i < n; i++) {
		gotoXY(dot[i].x, dot[i].y);
		cout << "*";
	}
}
void snake::dieukhien() {
	for (int i = n - 1; i > 0; i--) {
		dot[i] = dot[i - 1];
	}

	if (_kbhit()) {
		int key = _getch();

		if (key == 'a' || key == 'A') {
			tt = LEFT;
		}
		else if (key == 'D' || key == 'd') {
			tt = RIGHT;
		}
		else if (key == 's' || key == 'S') {
			tt = DOWN;
		}
		else if (key == 'w' || key == 'W') {
			tt = UP;
		}
	}

	if (UP == tt)
		dot[0].y--;
	else if (DOWN == tt)
		dot[0].y++;
	else if (LEFT == tt)
		dot[0].x--;
	else if (RIGHT == tt)
		dot[0].x++;
}	
int snake::xuly() {

	if (dot[0].x < 0 || dot[0].x >= Widthdemo || dot[0].y < 0 || dot[0].y >= heightdemo)
		return -1;
	for (int i = 1; i < n; i++) {
		if (dot[0] == dot[i])
			return -1;
	}


	if (dot[0] == an.food) {
		for (int i = n - 1; i > 0; i--) {
			dot[i] = dot[i - 1];
		}
		n++;
		if (UP == tt)
			dot[0].y--;
		else if (DOWN == tt)
			dot[0].y++;
		else if (LEFT == tt)
			dot[0].x--;
		else if (RIGHT == tt)
			dot[0].x++;
		an.food.x = rand() % Widthdemo;
		an.food.y = rand() % heightdemo-1;

		if (Speed > 30)
			Speed -= 20;
	}


	
	return 0;
}