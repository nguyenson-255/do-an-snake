#include"snake.h"

int main() {
	srand(time(NULL));
	snake p;	
	int check = 0;
	while (1) {
		// hiển thị
		p.hienthi();
		// điều khiển
		p.dieukhien();
		//xử lý	
		check=p.xuly();
		//thắng thua
		if (check == -1) {
			gotoXY(Widthdemo + 1, 13);
			cout << "You lose" << endl;
			break;
		}

		Sleep(p.Speed);
	}
}