#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	string A;
	cin >> A;
	int size = A.size();

	A[0]-=32;
	cout << A[0];

	for(int i=1; i<size; i++){

		if (A[i]=='s') cout << '$';
		
		else if (A[i]=='i') cout<< '!';
		
		else if (A[i]=='o') cout<< "()";

		else cout<< A[i];
	}

	cout <<".";
	
}
