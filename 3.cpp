/*	3
[ ���� ]
���࿡�� ����ϴ� ���α׷��� �ۼ��ϱ� ����, ���� ���� �ϳ��� ǥ���ϴ� Ŭ���� Account�� �ʿ��ϴ�.
���� ������ ������ ����, ���� ��ȣ, �ܾ��� ��Ÿ���� 3 ��� ������ �̷������.
main() �Լ��� ����� ����� ������ ������ Account Ŭ������ �ۼ��϶�.

[ ���� �ڵ� ]
#include <iostream>
using namespace std;

int main() {
	Account a("Kitae", 1, 5000); // id 1��, �ܾ� 5000��, �̸��� Kitae�� ���� ��
	a.deposit(50000); // 50000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000); // 20000�� ���. withdraw()�� ����� ���� �ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}

[ ���� ��� ]
Kitae�� �ܾ��� 55000
Kitae�� �ܾ��� 35000
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
	Account a("Kitae", 1, 5000); // id 1��, �ܾ� 5000��, �̸��� Kitae�� ���� ��
	a.deposit(50000); // 50000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000); // 20000�� ���. withdraw()�� ����� ���� �ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}