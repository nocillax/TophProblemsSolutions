#include <iostream>
using namespace std;

int NoCiLLaX(){
    int n;
    double total = 0; 
    cin >> n;

    double array[n];

    for(int i = 1; i <=n; i++){
        double x;
        cin >> x;
        total += x;
        array[i] = (total/i);
    }

    for (int i = 1; i <= n; i++){
        cout<<array[i]<<endl;
    }

int main(){
  NoCiLLaX();
}
