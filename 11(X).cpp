/*	11
[ 문제 ]
다음 코드에서 Box 클래스의 선언부와 구현부를 Box.h, Box.cpp 파일로 분리하고
main() 함수 부분을 main.cpp로 분리하여 전체 프로그램을 완성하라.

[ 제공 코드 ]
#include<iostream>
using namespace std;

class Box {
    int width, height;
    char fill;
public:
    Box(int w, int h) { setSize(w, h); fill = '*';}
    void setFill(char f) {fill = f;}
    void setSize(int w, int h) { width = w; height = h;}
    void draw();
};
void Box::draw() {
    for (int n = 0; n < height; n++) {
        for (int m = 0; m < width; m++) cout << fill;
        cout << endl;
    }
}

int main() {
    Box b(10, 2);
    b.draw(); // 박스를 그린다.
    cout << endl;
    b.setSize(7, 4); // 박스의 크기를 변경한다.
    b.setFill('^'); // 박스의 내부를 채울 문자를 '^'로 변경한다.
    b.draw(); // 박스를 그린다.
}
*/