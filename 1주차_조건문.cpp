#include<iostream>
using namespace std;

int main() {
	int purchase = 0;

	cout << "�� ���ž��� �Է����ּ��� : ";
	cin >> purchase;

	if (purchase >= 100000) {
		cout << "���� �������� " << purchase - (purchase * 20 / 100) << "�Դϴ�" << endl;
	}
	else if(purchase>=50000){
		cout << "���� �������� " << purchase - (purchase * 10 / 100) << "�Դϴ�" << endl;
	}
	else if (purchase >= 10000) {
		cout << "���� �������� " << purchase - (purchase * 5 / 100) << "�Դϴ�" << endl;
	}
	else {
		cout << "���� �������� " << purchase << "�Դϴ�" << endl;
		cout << "10000�� �̻� ���� �� ���εǴ� ���� ���ּ���^^" << endl;
	}
}