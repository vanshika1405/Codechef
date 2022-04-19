#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,m=0;
	    cin>>n;
	    while(n>0)
	    {
	        n=n/5;
	        m=m+n;
	    }
	    cout<<m<<endl;
	}
	return 0;
}
