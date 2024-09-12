/*	3
[ 문제 ]
은행에서 사용하는 프로그램을 작성하기 위해, 은행 계좌 하나를 표현하는 클래스 Account가 필요하다.
계좌 정보는 계좌의 주인, 계좌 번호, 잔액을 나타내는 3 멤버 변수로 이루어진다.
main() 함수의 실행과 결과가 다음과 같도록 Account 클래스를 작성하라.

[ 제공 코드 ]
#include <iostream>
using namespace std;

int main() {
	Account a("Kitae", 1, 5000); // id 1번, 잔액 5000원, 이름이 Kitae인 계좌 성
	a.deposit(50000); // 50000원 저금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000); // 20000원 출금. withdraw()는 출금한 실제 금액 리턴
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}

[ 실행 결과 ]
Kitae의 잔액은 55000
Kitae의 잔액은 35000
*/

#include <iostream>
using namespace std;

class Account {
	string name;
	int id, inqu;

public:
	Account(string n, int i, int in) {
		name = n;
		id = i;
		inqu = in;
	}
	void deposit(int money) {
		inqu += money;
	}
	int withdraw(int money) {
		inqu -= money;
		return money;
	}
	string getOwner() {
		return name;
	}
	int inquiry() {
		return inqu;
	}
};

int main() {
	Account a("Kitae", 1, 5000); // id 1번, 잔액 5000원, 이름이 Kitae인 계좌 성
	a.deposit(50000); // 50000원 저금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000); // 20000원 출금. withdraw()는 출금한 실제 금액 리턴
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}