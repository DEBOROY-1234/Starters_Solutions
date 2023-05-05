//Chef Eren

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n,a,b,x,y;
	    cin>>n>>a>>b;
	    
	    if(n%2==0){
	        x=n/2;
	        y=n-x;
	    }
	    else{
	        x=(n+1)/2;
	        y=n-x;
	    }
	    
	    int t = x*b + y*a;
	    
	    cout<<t<<endl;
	    
	}
	
	return 0;
}