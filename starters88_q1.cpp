//String Game


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    int noofones=0;
	    
	    for (int i = 0; i < n; i++){
	        if(s[i]=='1')
	        noofones++;
	    }
	    
	    int j=min(noofones,n-noofones);
	    
	    if(j%2!=0)
	    cout << "Zlatan" <<endl;
	    else
	    cout << "Ramos" <<endl;
	    
	}
	return 0;
}