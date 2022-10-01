#include <iostream>
using namespace std;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int one=0,zero=0,zeroM=0;
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        if(a==1){
            one+=1;
        }
        else{
            if(i<=m){
                zeroM+=1;
            }
            zero+=1;
        }
    }
    if(zeroM!=0){
        cout<<"0\n";
    }
    else if(zero!=0){
        cout<<k<<"\n";
    }
    else{
        cout<<100<<"\n";
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
