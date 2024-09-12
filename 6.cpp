/*	6
[ 문제 ]
문제 5번을 참고하여 짝수 정수만 랜덤하게 발생시키는 EvenRandom 클래스를 작성하고 EvenRandom 클래스를 이용하여 
10개의 짝수를 랜덤하게 출력하는 프로그램을 완성하라.
0도 짝수로 처리한다.

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
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 짝수
		cout << n << ' ';
	}
	cout << endl;
}