/*	10
[ ���� ]
�ټ��� Ŭ������ �����ϰ� Ȱ���ϴ� ������ �����̴�. ���ϱ�(+), ����(-), ���ϱ�(*), ������(/)�� 
�����ϴ� 4���� Ŭ������ Add, Sub, Mul, Div�� ������� �Ѵ�.
�̵��� ��� �������� ���� ����� ������.
- int Ÿ�� ���� a, b : �ǿ�����
- void setValue(int x, int y) �Լ� : �Ű� ���� x, y�� ��� a, b�� ����
- int calculate() �Լ� : ������ �����ϰ� ��� ����
main() �Լ��� Add, Sub, Mul, Div Ŭ���� Ÿ���� ��ü a, s, m, d�� �����ϰ�, 
�Ʒ��� ���� Ű����κ��� �� ���� ������ �����ڸ� �Է¹ް�, 
a, s, m, d ��ü �߿��� ������ ó���� ��ü�� setValue() �Լ��� ȣ���� ��, 
calculate()�� ȣ���Ͽ� ����� ȭ�鿡 ����Ѵ�.
���α׷��� ���� ������ ����.

[ ���� ��� ]
�� ������ �����ڸ� �Է��ϼ���>>3 4 *
12
�� ������ �����ڸ� �Է��ϼ���>>5 2 /
2
�� ������ �����ڸ� �Է��ϼ���>>8 2 -
6
�� ������ �����ڸ� �Է��ϼ���>>
*/
#include<iostream>
using namespace std;

class Add {
    int a, b;
public:
    void setValue(int x, int y) {
        a = x;
        b = y;
    }
    int calculate() {
        return a + b;
    }
};

class Sub {
    int a, b;
public:
    void setValue(int x, int y) {
        a = x;
        b = y;
    }
    int calculate() {
        return a - b;
    }
};

class Mul {
    int a, b;
public:
    void setValue(int x, int y) {
        a = x;
        b = y;
    }
    int calculate() {
        return a * b;
    }
};

class Div {
    int a, b;
public:
    void setValue(int x, int y) {
        a = x;
        b = y;
    }
    int calculate() {
        return a / b;
    }
};

int main() {
    int x, y;
    char c;
    Add a;
    Sub s;
    Mul m;
    Div d;
    while (true) {
        cout << "�� ������ �����ڸ� �Է��ϼ���>>";
        cin >> x >> y >> c;
        if (c == '+') {
            a.setValue(x, y);
            cout << a.calculate() << "\n";
        }
        else if (c == '-') {
            s.setValue(x, y);
            cout << s.calculate() << "\n";
        }
        else if (c == '*') {
            m.setValue(x, y);
            cout << m.calculate() << "\n";
        }
        else if (c == '/') {
            d.setValue(x, y);
            cout << d.calculate() << "\n";
        }
    }
}