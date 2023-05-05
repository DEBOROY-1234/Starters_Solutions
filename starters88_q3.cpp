//Online or Offline

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float n,m;
	    cin>>n>>m;
	    
	    float r = n - n*0.1;
	    
	    if(r<m){
	        cout<<"ONLINE"<<endl;
	    }
	    else if(r>m){
	        cout<<"DINING"<<endl;
	    }
	    else{
	        cout<<"EITHER"<<endl;
	    }
	    
	}
	return 0;
}
