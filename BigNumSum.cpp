#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
typedef long long int ll;

int NoCiLLaX(){
    vector<string> v;

    string a,b;
    cin >> a;
    cin >> b;

    int carry = 0;
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    

    for (int i=0; i<40; i++){
        int x, y, z;

        if (i < a.length()){
            x = a[i] - '0';
        }
      
        if (i < b.length()){
            y = b[i] - '0';
        }

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
    
    if (carry == 1){v.push_back("1");}

    
    reverse(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
}

int main(){

    NoCiLLaX();
  
}
