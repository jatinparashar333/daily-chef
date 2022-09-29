#include <bits/stdc++.h>
using namespace std;
void solve(){
    map<char,int> mp;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        int x=s.size();
        for(int i=0;i<x;i++){
            char ch=s[i];
            if(ch=='c'||ch=='e'||ch=='o'||ch=='d'||ch=='h'||ch=='f'){
                mp[ch]++;
            }
        }
    }
    
        
        int min_val=INT_MAX;
        map<char,int> :: iterator it;
        for(it=mp.begin();it!=mp.end();it++){
            min_val=min(min_val,it->second);
        }
        if(mp['c']>=2 && mp['o']>=1 && mp['d']>=1 && mp['e']>=2 && mp['h']>=1 && mp['e']>=1 && mp['f']>=1){
            cout<<min(min_val,min(mp['c']/2,mp['e']/2))<<"\n";
        }
        else{
            cout<<0<<"\n";
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
