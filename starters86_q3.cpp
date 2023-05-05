//Chef and Battery

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    int min=0;
	    
	    while(n!=50){
	        if(n>50){
	            n=n-3;
	            min++;
	        }
	        
	        if(n<50){
	            n=n+2;
	            min++;
	        }
	    }
	    
	    cout<<min<<endl;
	}
	
}
