/*	7
[ 문제 ]
문제 5번을 참고하여 생성자를 이용하여 짝수 홀수를 선택할 수 있도록 SelectableRandom 클래스를 작성하고 
짝수 10개, 홀수 10개를 랜덤하게 발생시키는 프로그램을 작성하라.

[ 5번 코드 ]
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
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수
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
	cout << "선택하세요 (짝수:0, 홀수:1) : ";
	int input;
	cin >> input;
	if (input == 0) {
		cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 10 개--" << endl;
		for (int i = 0; i < 10; i++) {
			int n = r.even(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 짝수
			cout << n << ' ';
		}
	}
	else {
		cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 홀수 10 개--" << endl;
		for (int i = 0; i < 10; i++) {
			int n = r.odd(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 홀수
			cout << n << ' ';
		}
	}
	cout << endl;
}