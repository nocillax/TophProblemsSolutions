#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    string x,y;
    cin>>x>>y;
    
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    
    if((x[0]+y[0])%2 == 0) cout<<"Black";
    else cout<<"White";
    
    
}
