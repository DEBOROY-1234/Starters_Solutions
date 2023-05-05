//Existence
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long x,y;
	    cin>>x>>y;
	    
	    //(a^2-(2b))^2
	    
	    long long left = (x*x*x*x)+ 4*(y*y);
	    long long right = 4*x*x*y;
	    
	    if(left == right){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
