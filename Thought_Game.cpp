#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    string res[n];
    
    for (int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        
        int avg = (x+y)/2;
        
        if (avg%2 == 0){
            res[i] = "Sadia will be happy.";
        }
        else res[i] = "Oops!";
    }
    
    for(int i=0; i<n; i++){
        cout<<res[i]<<endl;
    }
    
}
