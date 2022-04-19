#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c=0;;
	    cin>>a>>b;
	    for(int i=a;i<=b;i++)
	    {
	        int x=i%10;
	        if(x==2||x==3||x==9)
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
