//MIN To MAX


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    
    cin>>t;
    
    while(t--){
       
       int n;
       cin>>n;
       
       int a[n];
       
       unordered_map<int,int>mp;
       
       for(int i=0;i<n;i++){
           cin>>a[i];
           mp[a[i]]++;
       }
       
       if(n==1){
           cout<<0<<endl;
           continue;
       }
       
       int min_occ = 0;
       int min = INT_MAX;
       
       for(auto i : mp){
           if(i.first < min){
               min = i.first;
               min_occ = i.second;
           }
       }
       
       cout<<n-min_occ<<endl;
       
    }
    
	return 0;
}
