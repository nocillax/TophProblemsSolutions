#include <iostream>
#include <string>
using namespace std;

char shift(char cipher, int shift) {

    int x = ((cipher-97)-shift);
    if (x >=0) return ((x%26)+97);
    else return (26+x + 97);
}

int main(){
    
    int diff;
    cin >> diff;
    cin.ignore();
    string cipher;
    getline(cin, cipher);
    
    for(int i = 0; i <cipher.size(); i++){
        if(cipher[i]!=' '){
            cout<<shift(cipher[i], diff);
        }
        else cout<<cipher[i];
    }
}
