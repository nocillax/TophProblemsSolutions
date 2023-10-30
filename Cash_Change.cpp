#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;

void NoCiLLaX(){
    
    vector<int> v;
    int x[6] = {500, 100, 50, 10, 5, 1};
    ll n; 
    cin >> n;

    for(int i=0; i<6; i++){

        ll num = n/x[i];
        for(int j=1; j<=num; j++){
            v.push_back(x[i]);
        }
        n = n%x[i];
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    
    NoCiLLaX();

}
