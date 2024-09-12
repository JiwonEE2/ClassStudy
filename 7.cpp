/*	7
[ ���� ]
���� 5���� �����Ͽ� �����ڸ� �̿��Ͽ� ¦�� Ȧ���� ������ �� �ֵ��� SelectableRandom Ŭ������ �ۼ��ϰ� 
¦�� 10��, Ȧ�� 10���� �����ϰ� �߻���Ű�� ���α׷��� �ۼ��϶�.

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

class SelectableRandom {
	int ran = 0;

public:
	SelectableRandom() {		
		srand(time(0));
	}
	int even() {
		do {
			ran = rand();
			if (ran == 0) {
				break;
			}
		} while (ran % 2 != 0);
		return ran;
	}
	int odd() {
		do {
			ran = rand();
			if (ran == 0) {
				continue;
			}
		} while (ran % 2 == 0);
		return ran;
	}
};

int main() {
	SelectableRandom r;
	cout << "�����ϼ��� (¦��:0, Ȧ��:1) : ";
	int input;
	cin >> input;
	if (input == 0) {
		cout << "-- 0���� " << RAND_MAX << "������ ���� ¦�� 10 ��--" << endl;
		for (int i = 0; i < 10; i++) {
			int n = r.even(); // 0���� RAND_MAX(32767) ������ ������ ¦��
			cout << n << ' ';
		}
	}
	else {
		cout << "-- 0���� " << RAND_MAX << "������ ���� Ȧ�� 10 ��--" << endl;
		for (int i = 0; i < 10; i++) {
			int n = r.odd(); // 0���� RAND_MAX(32767) ������ ������ Ȧ��
			cout << n << ' ';
		}
	}
	cout << endl;
}