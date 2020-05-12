#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check_odd(ll n, ll k){
    ll rem = n-k;
    if(rem<0){
        return 0;
    }
    if(rem&1){
        return 0;
    }
    cout<<"YES\n";
    for(ll i=0;i<k-1;i++){
        cout<<1<<" ";
    }
    cout<<1+rem<<"\n";
    return 1;
}

bool check_even(ll n, ll k){
    ll rem = n-2*k;
    if(rem<0){
        return 0;
    }
    if(rem&1){
        return 0;
    }
    cout<<"YES\n";
    for(ll i=0;i<k-1;i++){
        cout<<2<<" ";
    }
    cout<<2+rem<<"\n";
    return 1;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;

        if( check_odd(n,k) || check_even(n,k)){
            continue;
        }
        else{
            cout<<"NO\n";
        }
    }
    
}