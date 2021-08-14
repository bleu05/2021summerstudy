#include <iostream>
using namespace std;
#include <string>

const int MAX = 100;



int N;

string room[MAX];



int width(void)

{

    int result = 0;



    for (int i = 0; i < N; i++)

    {

        int cnt = 0;

        for (int j = 0; j < N; j++)

        {

            if (room[i][j] == '.')

                cnt++;


            else if (room[i][j] == 'X' && cnt >= 2)

            {

                result++;

                cnt = 0;

            }

            else if (room[i][j] == 'X')

                cnt = 0;

        }

        if (cnt >= 2)

            result++;

    }

    return result;

}



int height(void)

{

    int result = 0;



    for (int i = 0; i < N; i++)

    {

        int cnt = 0;

        for (int j = 0; j < N; j++)

        {

            if (room[j][i] == '.')

                cnt++;

            else if (room[j][i] == 'X' && cnt >= 2)

            {

                result++;

                cnt = 0;

            }


            else if (room[j][i] == 'X')

                cnt = 0;

        }

        if (cnt >= 2)

            result++;

    }

    return result;

}



int main(void)

{

    cin >> N;



    for (int i = 0; i < N; i++)

        cin >> room[i];



    cout << width() << " " << height() << endl;



    return 0;

}