//Can Chef

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    
	    int x,y;
	    cin>>x>>y;
	    
	    int d = 2*y;
	    
	    int s = 15*x;
	    
	    if(s>=d){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
