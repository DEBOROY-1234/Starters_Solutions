//Inside The Stadium

#include <iostream>
using namespace std;

int main() {
    
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    float sum=0;
	    float c=0;
	    
	    for(int i=0;i<n;i++){
	        
	        sum = sum + a[i];
	        
	        float balls = i+1;
	        
	        if(sum==0){
	            continue;
	        }
	        
	        float strike = (sum/balls)*100;
	        
	        if(strike==100){
	            c++;
	        }
	        
	        
	        
	    }
	    
	    cout<<c<<endl;
	    
	}
	return 0;
}
