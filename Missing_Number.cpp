#include <iostream>
using namespace std;
typedef long long int ll;

int main(){

    ll n;
    cin >> n;
    ll x, y, z;
    cin >> x >> y >> z;

    ll result = 0;
    result = n-(x+y+z);

    cout<<result<<endl;
}
