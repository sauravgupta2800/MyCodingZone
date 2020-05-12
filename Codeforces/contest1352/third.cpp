#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;

        ll qm = ceil(double(k)/(n-1));
        ll end = qm*n;

        ll pos = (n-1) - ((k-1)%(n-1));
        //cout<<qm<<" "<<end<<" "<<pos<<endl;
        cout<<end-pos<<endl;
    }
    return 0;

}