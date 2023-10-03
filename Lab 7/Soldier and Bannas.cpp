#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
 
    int total=0;
    for(int i=1;i<=w;i++){
        total=total+(i*k);
    }
 
    //int d=abs(total-n);
 
    if(total>n){
        int d=abs(total-n);
        cout<<d<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
 
 
    return 0;
}
