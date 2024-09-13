/*	11
[ ���� ]
���� �ڵ忡�� Box Ŭ������ ����ο� �����θ� Box.h, Box.cpp ���Ϸ� �и��ϰ�
main() �Լ� �κ��� main.cpp�� �и��Ͽ� ��ü ���α׷��� �ϼ��϶�.

[ ���� �ڵ� ]
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
    b.draw(); // �ڽ��� �׸���.
    cout << endl;
    b.setSize(7, 4); // �ڽ��� ũ�⸦ �����Ѵ�.
    b.setFill('^'); // �ڽ��� ���θ� ä�� ���ڸ� '^'�� �����Ѵ�.
    b.draw(); // �ڽ��� �׸���.
}
*/