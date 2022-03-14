#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float d,t;
	cin >>t;
	if (t>0&&t<=5){
		d=(660*t)/52;
		cout<<setprecision(2)<<fixed<<d;
	}
	return 0;
}
