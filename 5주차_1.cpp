#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int R;
        string P;
        cin >> R;
        cin >> P;

        for (int j = 0; j < P.length(); j++)
        {
            for (int k = 0; k < R; k++)
            {
                cout << P[j];
            }
        }
        cout << endl;
    }
    return 0;
}