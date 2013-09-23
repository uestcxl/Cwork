#include <iostream>
using namespace std;
float change(float fah);

int main(){
	float fan,cen;
	cout << "input fahrenheit/n";
	cin >> fan;
	cen= change(fan);
	cout << cen;
	return 0;
}

float change(float fan){
	return (fan-32)*5/9;
}