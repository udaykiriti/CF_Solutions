#include <bits/stdc++.h>
using namespace std;

int main(){
    long t; cin>>t;
    while(t--){
        long n, m, k; cin>>n>>m>>k;
        for(long p = n; p > m; p--) cout<<p;
        for(long p = 1; p <= m; p++) cout<<p;
        puts("");
    }
}