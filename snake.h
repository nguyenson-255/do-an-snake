#include<iostream>
#include"console.h"
#include<conio.h>
#include<Windows.h>
#include"Toado.h"
#include"Food.h"
#include<time.h>

#define Widthdemo 50
#define heightdemo 29
using namespace std;
enum Trangthai{UP,DOWN,LEFT,RIGHT};

class snake
{
	private:
		Toado dot[100];
		int n;
		Trangthai tt;
		Food an;
	public:
		int Speed;
		snake();
		void hienthi(); 
		void dieukhien();
		int xuly();
};

