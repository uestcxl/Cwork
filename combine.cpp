#include<iostream>
using namespace std;
int com(int a,int b);
int mul(int c);

int main(){
	int m,n;
	cin >> m >> n;
	cout << com(m,n);
	return 0;
}

int mul(int c){
	int x=1,i,j;
	for (int i = 0; i < c; i++)
	{
		x*=(i+1);
	}
	return x;
}

int com(int m,int n){
	return mul(n)/(mul(m)*mul(n-m));
}