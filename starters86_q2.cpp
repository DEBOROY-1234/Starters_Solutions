//Cricket Match


#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int r,o;
	    cin>>r>>o;
	    
	    int t = 6*6*o;
	    
	    if(t>=r){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	
	return 0;
}
