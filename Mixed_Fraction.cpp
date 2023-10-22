#include <iostream>
using namespace std;
typedef long long int ll;

int main(){

    ll n, d;
    cin >> n >> d;
    ll x, y;
    x = n/d;
    y = n%d;
    
    cout<<x<<" "<<y<<" "<<d<<endl;

}
