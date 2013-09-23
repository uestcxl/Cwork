#include<iostream>
using namespace std;
int Recursion(int a,int b);

int main(){
	int x,y;
	cin>>x>>y;
	cout<<Recursion(x,y)<<endl;
	return 0;
}

int Recursion(int a,int b){
	if (b==1)
	{
		return 1;
	}
	else
	{
		return a*Recursion(a,b-1);
	}
}