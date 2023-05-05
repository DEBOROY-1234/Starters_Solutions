//Maximise Score


#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    vector<int> diff(n-1);
	    
	    for(int i=0;i<n-1;i++){
	        diff[i]=abs(a[i]-a[i+1]);
	    }
	    
	    //alice picks the first element
	    int score = INT_MAX;
	    
	    if(n>=2){
	        score = min(score,diff[0]);
	    }
	    
	    //alice picks the last element
	    if(n>=2){
	        score = min(score,diff[n-2]);
	    }
	    
	    //alice picks middle element
	    for(int i=1;i<n-1;i++){
	        int max_diff = max(diff[i-1],diff[i]);
	        score = min(score,max_diff);
	    }
	    cout<<score<<endl;
	    
	}
	return 0;
}
