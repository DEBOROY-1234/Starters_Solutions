//Plus 2 or Minus 1

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long y;
	    cin>>y;
	    
	    if(y==0){
	        cout<<"1"<<endl;
	        continue;
	    }
	    
	    long long r = 2*y + y;
	    
	    cout<<r<<endl;
	    
	}
	return 0;
}
