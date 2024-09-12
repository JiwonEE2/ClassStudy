/*	2
[ 문제 ]
날짜를 다루는 Date 클래스를 작성하고자 한다. Date를 이용하는 main()과 실행 결과는 다음과 같다.
클래스 Date를 작성하여 아래 프로그램에 추가하라.

[ 제공 코드 ]
#include <iostream>
using namespace std;

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}

[ 실행 결과 ]
1945년8월15일
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
	// stoi : 문자열을 숫자로
	// substr : 문자열 추출
	Date(string date) {
		year = stoi(date.substr(0, 4));
		month = stoi(date.substr(5, 1));
		day = stoi(date.substr(7, 2));
	}
	void show() {
		cout << year << "년" << month << "월" << day << "일" << endl;
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