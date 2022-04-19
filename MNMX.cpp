#include <iostream>
using namespace std;
int main () 
{
    int t;
    cin>>t;   
    for(int i=0; i<t; i++) 
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int j=0; j<n; j++ ) 
        {
            cin>>arr[j];
        }
    	long long small=arr[0];
    	for(int k=1; k<n; k++) 
    	{
    	    if (small>arr[k]) 
    	    {
    	        small= arr[k];
    	    }
    	}
    	long long result = (n-1)*small;
    	cout<<result<<endl;
    }
}