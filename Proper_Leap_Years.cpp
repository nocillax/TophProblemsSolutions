#include <iostream>
using namespace std;

bool checkLeapYear(int year){
    if(year%100 == 0 && year%400 != 0) return false;
    else if(year%4 == 0) return true;
    else return false;
}

int main(){
    int n;
	cin>>n;
		
    if(!checkLeapYear(n)) { cout << "No" << endl;}
    else { cout << "Yes" << endl;}    
}
