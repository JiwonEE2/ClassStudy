/*	8
[ ���� ]
int Ÿ���� ������ ��üȭ�� Integer Ŭ������ �ۼ��϶�. Integer�� ��� ��� �Լ��� �ڵ� �ζ������� �ۼ��϶�.
Integer Ŭ������ Ȱ���ϴ� �ڵ�� ������ ����.

[ ���� �ڵ� ]
#include<iostream>
#include<string>
using namespace std;

int main() {
	Integer n(30);
	cout << n.get() << ' '; // 30 ���
	n.set(50);
	cout << n.get() << ' '; // 50 ���

	Integer m("300");
	cout << m.get() << ' '; // 300 ���
	cout << m.isEven(); // true(������ 1) ���
}
*/
#include<iostream>
#include<string>
using namespace std;

class Integer {
	// 2. ����������� �ʱ�ȭ
	int number = 1;

public:
	// 1. �ʱ�ȭ����Ʈ
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
    cout << n.get() << ' '; // 30 ��� 
    n.set(50);
    cout << n.get() << ' '; // 50 ��� 

    Integer m("300");
    cout << m.get() << ' '; // 300 ��� 
    cout << m.isEven(); // true(������ 1) ��� 
}