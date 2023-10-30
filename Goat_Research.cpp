#include <iostream>
#include <string>
using namespace std;
typedef long long int ll;

void NoCiLLaX(){
    ll n;
    cin>>n;

    string s[n];
    ll mx = 2;

    for (int i=0; i<n; i++){

        cin >> s[i];
        ll sz = s[i].size();
        mx = max(mx,sz);

        if (sz == 2){
            s[i].push_back('a');
        }
        else if ((sz & 1) == 0){
            s[i].pop_back();
        }
    }
    
    for (int i=0; i<n; i++){
        int sp = (mx - s[i].size())/2;

        for (int j=1; j<=sp; j++){
            cout <<" ";
        }
        cout<<s[i]<<endl;
    }
}

int main(){   
  
    NoCiLLaX();
  
}
