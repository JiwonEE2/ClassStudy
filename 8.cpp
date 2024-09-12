/*	8
[ 문제 ]
int 타입의 정수를 객체화한 Integer 클래스를 작성하라. Integer의 모든 멤버 함수를 자동 인라인으로 작성하라.
Integer 클래스를 활용하는 코드는 다음과 같다.

[ 제공 코드 ]
#include<iostream>
#include<string>
using namespace std;

int main() {
	Integer n(30);
	cout << n.get() << ' '; // 30 출력
	n.set(50);
	cout << n.get() << ' '; // 50 출력

	Integer m("300");
	cout << m.get() << ' '; // 300 출력
	cout << m.isEven(); // true(정수로 1) 출력
}
*/
#include<iostream>
#include<string>
using namespace std;

class Integer {
	// 2. 멤버변수에서 초기화
	int number = 1;

public:
	// 1. 초기화리스트
	Integer(int n) :number(n) {

	}
	Integer(string s) {
		number = stoi(s);
	}
	int get() {
		return number;
	}
	void set(int n) {
		number = n;
	}
	bool isEven() {
		if (number % 2 == 0) {
			return true;
		}
		return false;
	}
};

int main() {
    Integer n(30);
    cout << n.get() << ' '; // 30 출력 
    n.set(50);
    cout << n.get() << ' '; // 50 출력 

    Integer m("300");
    cout << m.get() << ' '; // 300 출력 
    cout << m.isEven(); // true(정수로 1) 출력 
}