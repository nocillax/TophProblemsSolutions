#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

    long long int factorial = 1;
    long long int num = n;

    if (n >= 20){
        cout << "0000"<<endl;
    }

    else {
        for (int i = 0; i < n; i++) {
            factorial *= num;
            num--;
        }

        string fact = to_string(factorial);
        string result;
        reverse(fact.begin(), fact.end());

        string res = fact;
        if (fact.size()<4)  {
            reverse(res.begin(), res.end());
            cout<<res;
        }

        else {
            for (int i = 3; i>-1; i--) {
                cout << fact[i];
            }
        }
    }
	return 0;
}
