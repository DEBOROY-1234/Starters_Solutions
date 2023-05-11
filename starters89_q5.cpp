#include <iostream>
using namespace std;

//Parliament


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    float n,x;
	    cin>>n>>x;
	    
	    float r = n/2;
	    
	    if(x>=r){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
