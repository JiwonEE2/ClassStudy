/*	1
main()�� ���� ����� ������ ������ Tower Ŭ������ �ۼ��Ͽ���.

#include <iostream>
using namespace std;

int main()
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}

// ���
���̴� 1����
���̴� 100����
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
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}