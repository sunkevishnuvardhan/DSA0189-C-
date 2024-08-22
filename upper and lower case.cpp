#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cout<<"ENter the string s1:";
	cin>>s1;
	transform(s1.begin(),s1.end(),s1.begin(),::toupper);
	cout<<s1<<endl;
	cout<<"ENter the string s2:";
	cin>>s2;
	transform(s2.begin(),s2.end(),s2.begin(),::tolower);
	cout<<s2<<endl;
}