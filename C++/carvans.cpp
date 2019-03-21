/**
* This is the Good Method 
* We have to find Comparsion 
* Between The Speed of The Cars 
* This is What How we are Doing 
*/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
	int T;
	cin>>T;
  
while(T--)
{   
    int count = 1;
    int N;/// Number of Racer 
	cin>>N;

	/// Taking input The Racers Speed 
    
	int maxSpeed[N];
	
	for(int i=0;i<N;i++)
		cin>>maxSpeed[i];
   

   int max = maxSpeed[0];

   for(int i=1;i<N;i++)
   {
     if(maxSpeed[i]<=max)
   	{   
   	    count++;
   		max = maxSpeed[i];
   	}
   }
   	cout<<count<<endl;
   
}
	return 0;
}
