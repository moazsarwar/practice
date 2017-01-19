#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	double numDegree=0.0;
	double radian =0.0;
	const double ONE_DEGREE	=2.0*3.14/360;
	cout.fixed;
	cout.precision(5);
	cout<<"Enter Angle in Degrees:";
	cin>>numDegree;
	radian=ONE_DEGREE * numDegree;
	cout<<endl<<endl<<radian<<endl;
	return 0;
}
