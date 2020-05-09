#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    ll t;
    cin>>t;
    while(t--){
        ll n,Q;
        cin>>n>>Q;
        string str;
        cin>>str;
        vector <ll> umap(26,0);
        for(ll i=0;i<n;i++){
            umap[str[i]-'a']++;
        }
        while(Q--){
            ll c;
            cin>>c;
            
            ll res = 0;
            for(int i=0;i<=25;i++){
                int currValue = umap[i]; 
                if( currValue > c){
                    res += currValue - c;
                }
            }
            cout<<res<<endl;

        }
        
    }


    return 0;  
}