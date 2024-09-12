/*	6
[ ���� ]
���� 5���� �����Ͽ� ¦�� ������ �����ϰ� �߻���Ű�� EvenRandom Ŭ������ �ۼ��ϰ� EvenRandom Ŭ������ �̿��Ͽ� 
10���� ¦���� �����ϰ� ����ϴ� ���α׷��� �ϼ��϶�.
0�� ¦���� ó���Ѵ�.

[ 5�� �ڵ� ]
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
*/
#include <iostream>
using namespace std;

class EvenRandom {
	int ran;

public:
	EvenRandom() {
		srand(time(0));
	}
	int next() {
		do {
			ran = rand();
			if (ran == 0) {
				break;
			}
		} while (ran % 2 != 0);		
		return ran;
	}
};

int main() {
	EvenRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ¦�� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0���� RAND_MAX(32767) ������ ������ ¦��
		cout << n << ' ';
	}
	cout << endl;
}