#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    int temp = (x+y)-1;
    int deduction = abs(x-y);

    cout<<temp-deduction<<endl;
}
