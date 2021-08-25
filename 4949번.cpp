#include<iostream>
#include<stdio.h>
#include<string>
#include<stack>

using namespace std;
string str;

int main()
{
	while (1)
	{
		getline(cin, str);
		stack<char> a;
		if (str[0] == '.') 
			break;

		for (int i = 0; i < str.length() - 1; i++)
		{
			if (str[i] == '(') a.push('(');
			if (str[i] == '[') a.push('[');
			if (str[i] == ']')
			{
				if (!a.empty() && a.top() == '[')
					a.pop();
				else 
				{ cout<<"no\n";
				break; } // "]hello[" 같은 예외 문장들 방지
			}

			if (str[i] == ')')
			{
				if (!a.empty() && a.top() == '(') 
					a.pop();
				else 
				{
					cout << "no\n"; break; } // ")hello(" 같은 예외 문장들 방지
			}

			if (a.empty() && i == str.length() - 2) 
				cout << "yes\n"; // str[str.length() - 1] = '.' 이므로 검사할 필요가 없다.
			else if (!a.empty() && i == str.length() - 2) 
				cout << "no\n";
		}

	}
}
