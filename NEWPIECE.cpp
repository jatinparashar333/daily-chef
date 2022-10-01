#include <iostream>
using namespace std;
bool sameColor(int a,int b,int p,int q){
    int x=a+b;
    int y=p+q;
    if((x%2==0 && y%2==0) || (x%2==1 && y%2==1)){
        return true;
    }
    return false;
}
void solve(){
    int a,b,p,q;cin>>a>>b>>p>>q;
    if(a==p && b==q)
    {
        cout<<"0\n";
    }
    else if(sameColor(a,b,p,q)){
        cout<<"2\n";
    } 
    else{
        cout<<"1\n";
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
