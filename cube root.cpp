#include<iostream>
#include<cmath>
int main(){
	int n;
	std::cout<<"Enter the number:";
	std::cin>>n;
	double cubeRoot= cbrt(n);
	std::cout<<"Cube root of "<<n<< "is."<<cubeRoot;
	return 0;
}