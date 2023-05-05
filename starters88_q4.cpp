//Largest and Second Large

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    
	    sort(a,a+n);
	    int m=n-1;
	    
	    //to get a distinct number
	    while(a[m]==a[n-1]){
	        m--;
	    }
	    
	    int max = a[m]+a[n-1];
	    
	    cout<<max<<endl;
	    
	}
	return 0;
}
