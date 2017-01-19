
#include <iostream>
using namespace std;
int main(){
	int num=0;
	int sum=0;
	int temp=0;
	int temp2=0;
	cout<<"Enter Number : ";
	cin>>num;
	temp2=num;
	while(num){
		temp=num%10;		
		sum=sum+temp*temp*temp;
		cout<<endl<<sum<<endl;
		num/=10;
	}
	if(temp2==sum){
		cout<<"Armstrong";
	}
	else{
		cout<<"Not Armstrong";
	}
	return 0;
}
