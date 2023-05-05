//Construct String

#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string u;
	    cin>>u;
	    
	    int temp=1;
	    char var=u[0];
	    string ans="";
	    for(int i=1;i<n;i++){
	        if(var==u[i]){
	            temp++;
	        }
	        else{
	            if(temp%2==0){
	                ans += var;
	                ans += var;
	            }
	            else{
	                ans += var;
	            }
	            var=u[i];
	            temp=1;
	        }
	    }
	    if(temp%2==0){
	                ans += var;
	                ans += var;
	            }
	            else{
	                ans += var;
	            }
	            
	           cout<<ans<<endl;
	}
	
	return 0;
}