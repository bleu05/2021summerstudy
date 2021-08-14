#include<iostream>
using namespace std;

int main() {
	int purchase = 0;

	cout << "총 구매액을 입력해주세요 : ";
	cin >> purchase;

	if (purchase >= 100000) {
		cout << "최종 결제액은 " << purchase - (purchase * 20 / 100) << "입니다" << endl;
	}
	else if(purchase>=50000){
		cout << "최종 결제액은 " << purchase - (purchase * 10 / 100) << "입니다" << endl;
	}
	else if (purchase >= 10000) {
		cout << "최종 결제액은 " << purchase - (purchase * 5 / 100) << "입니다" << endl;
	}
	else {
		cout << "최종 결제액은 " << purchase << "입니다" << endl;
		cout << "10000원 이상 구매 시 할인되니 많이 사주세요^^" << endl;
	}
}