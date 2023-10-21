#include <iostream>
using namespace std;

int isIllegal(char c) { 
    if(c == 'W' || c == 'N' || c == 'D') return 1;
    else if ((c > 47 && c < 55) || c == 'O') return 0;
    else return 2;
}

string Balls(int balls){
    if(balls>1)  { 
        string b = to_string(balls) + " BALLS";
        return b;
        }

    else if (balls == 1) return "1 BALL";
    else return "";
}

string Overs(int overs){
    if(overs>1) { 
        string o = to_string(overs) + " OVERS"; 
        return o; 
    }
    
    else if (overs == 1) return "1 OVER";
    else return "";
}

int main(){
    int n;
    cin >> n;

    int overs[n];
    int balls[n];

    for (int i = 0; i < n; i++) {
        string x;
        cin>>x;
        int legalDelivery = 0;

        for (int i = 0; i < x.length(); i++) {
            if(isIllegal(x[i]) == 0) legalDelivery++;
            else if(isIllegal(x[i]) == 1) legalDelivery = legalDelivery;
        }

        overs[i] = legalDelivery/6;
        balls[i] = legalDelivery%6;
    }

    for(int i = 0; i<n; i++){
        if(overs[i]>0){
            cout<<Overs(overs[i])<<" ";
        }

        cout<<Balls(balls[i]);
        cout<<endl;
    }   
}
