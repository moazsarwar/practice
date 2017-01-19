#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double sum=1.0;
	const unsigned short int MAX=100;
	int count=2;
	while(count<=100){
		sum+=1/(double)count;
		cout<<endl<<count<<"\t"<<sum;
		count+=2;

	}
	cout<<endl<<"Sum="<<sum<<endl;
	return 0;
}
