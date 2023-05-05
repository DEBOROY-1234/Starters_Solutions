//Candy Division

#include <iostream>
using namespace std;

int main() {
	
	int testcases;
	
	cin>>testcases;
	
	while(testcases--){
	    
	    int n;
	    cin>>n;
	    
	    if(n<3){
	          cout<<"NO"<<endl;
	    }
	    
	    else if(n%3==0){
	           cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	
	return 0;
}