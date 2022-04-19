#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, sum = 0, min = 0;
        cin >> n >> x;
        string s;
        cin >> s;
        sum = min = x;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                x++;
                if (x >= sum)
                {
                    sum = x;
                }
            }
            else
            {

                x--;
                if (x < min)
                {
                    min = x;
                }
            }
        }

        cout << (sum - min) + 1 << endl;
    }
    return 0;
}
