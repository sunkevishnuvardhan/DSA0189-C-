#include<iostream>
using namespace std;
int main(){
	int exponent;
	float base,result=1;
	cout<<"enter the base and exponent";
	cin>>base>>exponent;
	cout<<base<<"^"<<exponent<<"=";
	while(exponent!=0)
	{
		result*=base;
		--exponent;
	}
	cout<<result;
	return 0;
}