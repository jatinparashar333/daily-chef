#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    set<int> s1;
    set<int> s2;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        s1.insert(x);
    }
    for(int i=0;i<k;i++){
        int x;cin>>x;
        s2.insert(x);
    }
    int count1=0,count2=0;
    for(int i=1;i<=n;i++){
        if(s1.find(i)!=s1.end() && s2.find(i)!=s2.end()){
            count1+=1;
        }
        if(s1.find(i)==s1.end() && s2.find(i)==s2.end()){
            count2+=1;
        }
    }
    cout<<count1<<" "<<count2<<"\n";
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
