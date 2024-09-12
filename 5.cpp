/*	5
[ ���� ]
���� ���� �߻���Ű�� Random Ŭ������ ������. Random Ŭ������ �̿��Ͽ� ���� �� ������ 10�� ����ϴ� ��ʴ� ������ ����.
Random Ŭ������ ������, next(), nextInRange()�� 3���� ��� �Լ��� �������� �ۼ��ϰ� main() �Լ��� ����
�ϳ��� cpp ���Ͽ� �����϶�.

[ ���� �ڵ� ]
#include <iostream>
using namespace std;

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for(int i=0; i<10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for(int i=0; i<10; i++) {
		int n = r.nextInRange(2,4); // 2���� 4 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
}
*/
#include <iostream>
using namespace std;

class Random {
public:
	Random() {
		srand(time(0));
	}
	int next() {
		return rand() % RAND_MAX;
	}
	int nextInRange(int a, int b) {
		return rand() % (b - a + 1) + a;
	}
};

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ����
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4); // 2���� 4 ������ ������ ����
		cout << n << ' ';
	}
	cout << endl;
}