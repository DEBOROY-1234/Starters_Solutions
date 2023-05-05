//Efficient PAN Linking

#include <iostream>
using namespace std;

int main() {
    
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    
	    string n;
	    
	    cin>>n;
	    
	    int k = 20;
	    
	    int res = 0;
	    
	    for(int i=0;i<n.length();i++){
	        res = (res*10 + (n[i]-'0'))%k;
	    }
	    
	    cout<<res<<endl;
	    
	}
	
	
	return 0;
}

