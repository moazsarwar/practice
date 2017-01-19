#include <iostream>
using namespace std;
int main(){
	float c=2.0;
	float r=1.0;
	while(c<=100){
		r=r+1.0/c;
		cout<<endl<<c<<"\t"<<r;
		c+=2;
	}
	cout<<endl<<r<<endl;
	return 0;
}
