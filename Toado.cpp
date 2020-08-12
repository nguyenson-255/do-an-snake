#include "Toado.h"

Toado::Toado() {
	x = 0; y = 0;
}
int Toado::operator==(const Toado& s) {
	if (x == s.x && y == s.y)
		return 1;
	else
		return 0;
}