//Return the Change

#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    
	    x = x + 5;
	    int a = x/10;
	    a = a*10;
	    
	    cout<<100-a<<endl;
	}
	
	return 0;
}
