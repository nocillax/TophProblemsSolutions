#include<bits/stdc++.h>
using namespace std;

void NoCiLLaX(){

    int m, n, x;
    cin >> m >> n;

    int array[m][n];

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>array[i][j];
        }
    }

    cin >> x;

    int r[x];
    int c[x];

    for (int i=0; i<x; i++){
        cin >> r[i] >> c[i];
    }

    for (int i=0; i<x; i++) {
            int temp = 0;

        temp = array[r[i]-1][c[i]-1];
        array[r[i]-1][c[i]-1] = array[r[i]][c[i]-1];
        array[r[i]][c[i]-1] = array[r[i]+1][c[i]-1];
        array[r[i]+1][c[i]-1] = array[r[i]+1][c[i]];
        array[r[i]+1][c[i]] = array[r[i]+1][c[i]+1];
        array[r[i]+1][c[i]+1] = array[r[i]][c[i]+1];
        array[r[i]][c[i]+1] = array[r[i]-1][c[i]+1];
        array[r[i]-1][c[i]+1] = array[r[i]-1][c[i]];
        array[r[i]-1][c[i]] = temp;


        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}

int main(){
    NoCiLLaX();
}
