#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	stack<char> st;
	int size;
	cin >> size;

	for (int i = 0; i < size; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(' || st.empty())
				st.push(s[j]);//여는 괄호거나 스택이 비어있다면 push 
			else if (st.top() == '(')//닫는 괄호를 입력했을 경우
				st.pop(); //맨 위에 있는 값이 여는 괄호일 경우 pop해준다
		}

		if (st.empty()) //스택이 비어있을 경우
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;//비어있지 않을 경우
		while (!st.empty()) 
			st.pop();
	}
}
