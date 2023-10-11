#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

string space = " ";
string star = "* ";
string result;
int count = n-1;

    for (int i=0; i<n; i++){

        for (int j=count; j>0; j--){
            cout<<space;
        }
        for (int k=0; k<=i; k++){
            if (k==i) cout<<"*";
            else cout<<star;
        }
      
        cout<<endl;
        count--;
    }
}
