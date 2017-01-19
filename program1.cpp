#include <iostream>
using namespace std;
int main(){
	unsigned long long int factorial=1;
	unsigned short int num=0;
	cout<<"Enter Number:";
	cin>>num;
	while(num>0){
		factorial*=num;
		num--;
	}
	cout<<endl<<"Factorial ="<<factorial<<endl;
	return 0;
}
