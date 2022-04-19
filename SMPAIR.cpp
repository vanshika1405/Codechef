#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num1,num2,i,j,t,t1;
    unsigned long long int sum;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        cin >> num1;
        cin >> num2;
        n=n-2;
       for(int i=0;i<n;i++)
        {
            cin >> t1;
            if(t1<num1)
            {
            	if (num2>num1) num2=num1;
                num1=t1;
                continue;
            }
            if(t1<num2)
            {
                num2=t1;
            }
        }
        sum=num1+num2;
        cout << sum << "\n";
    }
return 0;
} 