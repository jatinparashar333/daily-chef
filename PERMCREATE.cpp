#include <iostream>
using namespace std;
void solve(){
    int n;cin>>n;
    if(n<=3){
        cout<<-1<<"\n";
    }
    else{
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    solve();
	 }
	return 0;
}
