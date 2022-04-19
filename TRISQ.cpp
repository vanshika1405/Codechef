#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	   int v;
	   cin>>v;
	   int n=(v/2-1);
	   n=(n*(n+1))/2;
	   cout<<n<<endl;
	}
	return 0;
}
