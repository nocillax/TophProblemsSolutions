#include <iostream>
using namespace std;

int main() {
    double input;  // Using float will not AC
    cin>>input;
    int x = input;
    int y = (x - x%10);

    int bar = y/10;

    cout << "[";

    for (int i = 0; i < bar; i++) {
        cout<<"+";
    }

    for (int i = 0; i <(10-bar); i++) {
        cout<<".";
    }

    cout << "] "<<x<<"%"<<endl;
}
