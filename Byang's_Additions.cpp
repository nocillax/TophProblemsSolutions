#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a;
    int b;
	cin>>a>>b;
    int add;
    bool flag;

    string x = to_string(a);
    string y = to_string(b);

    int size = min(x.size(),y.size());

    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    
    for(int i = 0; i <size; i++){

        int j = x[i] - 48;
        int k = y[i] - 48;

        add = j + k;

        if(add>9){

            flag = true;
            break;
        }
        else flag = false;
    }

    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
