/*	1
main()의 실행 결과가 다음과 같도록 Tower 클래스를 작성하여라.

#include <iostream>
using namespace std;

int main()
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}

// 결과
높이는 1미터
높이는 100미터
*/

#include <iostream>
using namespace std;

class Tower {
	int height;

public:
	Tower() {
		height = 1;
	}
	Tower(int num) {
		height = num;
	}
	int getHeight() {
		return height;
	}
};

int main()
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}