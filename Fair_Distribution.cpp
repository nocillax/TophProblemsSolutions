#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    int res = x-(y%x);
    cout<<res;

}
