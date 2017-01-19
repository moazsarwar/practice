#include <iostream>
using namespace std;
int main(){
	int num=0;
	int sumOdd=0;
	int sumEven=0;
	cout<<"Enter Number";
	cin>>num;
	for(int i=0;i<=num;i++){
		if(i%2==0){
			sumEven+=i;
		}
		else{
			sumOdd+=i;
		}
	}
	cout<<endl<<"Even Sum="<<sumEven<<endl<<"Odd Sum="<<sumOdd<<endl;
	return 0;
}
