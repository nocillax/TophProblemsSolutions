#include <iostream>

using namespace std;

int main() {
	int n;
    cin >> n;
	int arr[100];
    bool flag = false;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++) {
        if (arr[i]>arr[i+1]){
            flag = true;
            break;
        }
    }
    if (flag) cout << "No" << endl;
    else cout << "Yes" << endl;
}
