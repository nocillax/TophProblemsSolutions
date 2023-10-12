#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
    int x;
	cin>>x;
    string s1 = to_string(x);

    int noOfComma = (s1.length()-1)/3;

	reverse(s1.begin(), s1.end());

    while(noOfComma > 0){
        s1.insert((noOfComma*3), ",");
        noOfComma--;
    }
	reverse(s1.begin(), s1.end());

    cout<<s1<<endl;
}
