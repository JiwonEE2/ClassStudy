/*	9
[ ���� ]
Oval Ŭ������ �־��� �簢���� �����ϴ� Ÿ���� �߻�ȭ�� Ŭ�����̴�.
Oval Ŭ������ ����� ��� ������ ����. Oval Ŭ������ ����ο� �����η� ������ �ۼ��϶�.
- �������� �簢�� �ʺ�� ���̸� ������ width, height ���� ���
- �ʺ�� ���� ���� �Ű� ������ �޴� ������
- �ʺ�� ���̸� 1�� �ʱ�ȭ�ϴ� �Ű� ���� ���� ������
- width�� height�� ����ϴ� �Ҹ���
- Ÿ���� �ʺ� �����ϴ� getWidth() �Լ� ���
- Ÿ���� ���̸� �����ϴ� getHeight() �Լ� ���
- Ÿ���� �ʺ�� ���̸� �����ϴ� set(int w, int h) �Լ� ���
- Ÿ���� �ʺ�� ���̸� ȭ�鿡 ����ϴ� show() �Լ� ���

[ ���� �ڵ� ]
#include<iostream>
using namespace std;

int main() {
    Oval a, b(3,4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << "," << b.getHeight() << endl;
}

[ ���� ��� ]
width = 10, height = 20
3,4
Oval �Ҹ� : width = 3, height = 4
Oval �Ҹ� : width = 10, height = 20
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
        cout << "Oval �Ҹ� : width = " << width << ", height = " << height << "\n";
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