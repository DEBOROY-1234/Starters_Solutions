//Budget of Technex

#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int r;
        cin>>r;
        
        int amount = (r*1000)/2;
        
        int eachamount = amount/5;
        
        cout<<eachamount<<endl;
    }
	return 0;
}