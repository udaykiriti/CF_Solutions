#include <bits/stdc++.h>

int main(){

    long t; std::cin>>t;
    while(t--){
        long a, b, c; std::cin>>a>>b>>c;
        for(long p = 0; p < 5; p++){
            if(a <= b && a <= c){++a;}
            else if(b <= a && b <= c){++b;}
            else if(c <= a && c <= b){++c;}
        }
       std::cout<<a*b*c<<std::endl;
    }
}