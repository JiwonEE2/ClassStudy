/*	9
[ 문제 ]
Oval 클래스는 주어진 사각형에 내접하는 타원을 추상화한 클래스이다.
Oval 클래스의 멤버는 모두 다음과 같다. Oval 클래스를 선언부와 구현부로 나누어 작성하라.
- 정수값의 사각형 너비와 높이를 가지는 width, height 변수 멤버
- 너비와 높이 값을 매개 변수로 받는 생성자
- 너비와 높이를 1로 초기화하는 매개 변수 없는 생성자
- width와 height를 출력하는 소멸자
- 타원이 너비를 리턴하는 getWidth() 함수 멤버
- 타원의 높이를 리턴하는 getHeight() 함수 멤버
- 타원의 너비와 높이를 변경하는 set(int w, int h) 함수 멤버
- 타원의 너비와 높이를 화면에 출력하는 show() 함수 멤버

[ 제공 코드 ]
#include<iostream>
using namespace std;

int main() {
    Oval a, b(3,4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << "," << b.getHeight() << endl;
}

[ 실행 결과 ]
width = 10, height = 20
3,4
Oval 소멸 : width = 3, height = 4
Oval 소멸 : width = 10, height = 20
*/
#include<iostream>
using namespace std;

class Oval {
    int width, height;

public:
    Oval() {
        width = 1;
        height = 1;
    }
    Oval(int w, int h) {
        width = w;
        height = h;
    }
    ~Oval() {
        cout << "Oval 소멸 : width = " << width << ", height = " << height << "\n";
    }
    void set(int w, int h) {
        width = w;
        height = h;
    }
    void show() {
        cout<<"width = "<< width << ", height = " << height << "\n";
    }
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }
};

int main() {
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << "," << b.getHeight() << endl;
}