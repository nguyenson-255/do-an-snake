#pragma once
class Toado
{
	private:
		int x, y;
		friend class snake;
		friend class Food;
	public:
		Toado();
		int operator==(const Toado& s);
};

