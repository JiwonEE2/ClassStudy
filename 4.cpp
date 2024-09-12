/*	4
[ ���� ]
CoffeeMachine Ŭ������ ������. main() �Լ��� ���� ����� ������ ������ CoffeeMachine Ŭ������ �ۼ��϶�.
���������� �� �ܿ��� Ŀ�ǿ� ���� ���� 1�� �Һ�ǰ�, �Ƹ޸�ī���� ��� Ŀ�Ǵ� 1, ���� 2�� �Һ�ǰ�, ���� Ŀ�Ǵ� 
Ŀ�� 1, �� 2, ���� 1�� �Һ�ȴ�.
CoffeeMachine Ŭ�������� � ��� ������ � ��� �Լ��� �ʿ����� �� �Ǵ��Ͽ� �ۼ��϶�.

[ ���� �ڵ� ]
#include <iostream>
using namespace std;

int main() {
	CoffeeMachine java(5, 10, 3); // Ŀ�Ƿ�:5, ����:10, ����:6 ���� �ʱ�ȭ
	java.drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkAmericano(); // Ŀ�� 1, �� 2 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkSugarCoffee(); // Ŀ�� 1, �� 2, ���� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.fill(); // Ŀ�� 10, �� 10, ���� 10 ���� ä���
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
}

[ ���� ��� ]
Ŀ�� �ӽ� ����,	Ŀ��:4	��:9		����:3
Ŀ�� �ӽ� ����,	Ŀ��:3	��:7		����:3
Ŀ�� �ӽ� ����,	Ŀ��:2	��:5		����:2
Ŀ�� �ӽ� ����,	Ŀ��:10	��:10	����:10
*/

#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
	
public:
	CoffeeMachine(int c, int w, int s) {
		coffee = c;
		water = w;
		sugar = s;
	}
	void drinkEspresso() {
		coffee -= 1;
		water -= 1;
	}
	void drinkAmericano() {
		coffee -= 1;
		water -= 2;
	}
	void drinkSugarCoffee() {
		coffee -= 1;
		water -= 2;
		sugar -= 1;
	}
	void show() {
		cout << "Ŀ�� �ӽ� ����,\tĿ��:" << coffee << "\t��:" << water << "\t����:" << sugar << endl;
	}
	void fill() {
		coffee = 10;
		water = 10;
		sugar = 10;
	}
};

int main() {
	CoffeeMachine java(5, 10, 3); // Ŀ�Ƿ�:5, ����:10, ����:6 ���� �ʱ�ȭ
	java.drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkAmericano(); // Ŀ�� 1, �� 2 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkSugarCoffee(); // Ŀ�� 1, �� 2, ���� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.fill(); // Ŀ�� 10, �� 10, ���� 10 ���� ä���
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
}