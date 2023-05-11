//DDMM or MMDD

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    string s;
	    cin>>s;
	    
	    
	    int first = (s[0] - '0')*10 + (s[1] -'0');
	    int second = (s[3] - '0')*10 + (s[4]-'0');
	    
	    if(first>12){
	        cout<<"DD/MM/YYYY"<<endl;
	    }
	    else if(second>12){
	        cout<<"MM/DD/YYYY"<<endl;
	    }
	    else{
	        cout<<"BOTH"<<endl;
	    }
	    
	}
	return 0;
}
