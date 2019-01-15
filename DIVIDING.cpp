
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
 
 // CODECHEF SOLUTION  problem code : - DIVIDING
int main() {
	
 int t;
 cin>>t;
 while(t--)
 {
    long long int n;
	cin>>n;
	
	long long int tmp;
    long long int sum = 0;
	for(long long int i=0;i<n;i++)
	{
	    cin>>tmp;
	    sum = sum+tmp;
	}
	
	if(sum==(n*(n+1)/2))
	cout<<"YES"<<endl;
	 else
	 cout<<"NO"<<endl;
	
 }
 
 return 0;
}
