/*	2
[ ���� ]
��¥�� �ٷ�� Date Ŭ������ �ۼ��ϰ��� �Ѵ�. Date�� �̿��ϴ� main()�� ���� ����� ������ ����.
Ŭ���� Date�� �ۼ��Ͽ� �Ʒ� ���α׷��� �߰��϶�.

[ ���� �ڵ� ]
#include <iostream>
using namespace std;

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}

[ ���� ��� ]
1945��8��15��
2014,3,20
*/

#include <iostream>
#include<string>
using namespace std;

class Date {
	int year, month, day;

public:
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	// stoi : ���ڿ��� ���ڷ�
	// substr : ���ڿ� ����
	Date(string date) {
		year = stoi(date.substr(0, 4));
		month = stoi(date.substr(5, 1));
		day = stoi(date.substr(7, 2));
	}
	void show() {
		cout << year << "��" << month << "��" << day << "��" << endl;
	}
	int getYear() {
		return year;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
};

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}