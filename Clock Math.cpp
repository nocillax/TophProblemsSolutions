#include <iostream>
using namespace std;

int main(){

    int h, m; 
    float x, y, z;
    
    cin >> h >> m;

    x = h*30+(m*.5);
    y = m*6;

    z = x-y;

    if (z>180) z = 360 - z;

    cout << z << endl;
}
