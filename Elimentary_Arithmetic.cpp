#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

typedef long long int ll;

int main(){

    vector<string> v;

    string a;
    string b;
    cin >> a >> b;

    int carry = 0;
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    ll size = max(a.length(),b.length());

    for (int i=0; i<size; i++){
        int x, y, z;

        if (i < a.length()){
            x = a[i] - '0';
        }
        else x = 0;
        
        if (i < b.length()){
            y = b[i] - '0';
        }
        else y = 0;
        
        z = x + y + carry;
        
        if(z>=10){
            z = z - 10;
            v.push_back(to_string(z));
            carry = 1;
        }
        else{
            v.push_back(to_string(z));
            carry = 0;
        }
    }
    if(carry == 1) v.push_back(to_string(carry));

    string s = "";
    reverse(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    
}
