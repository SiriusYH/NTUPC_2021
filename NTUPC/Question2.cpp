#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	const float g=9.8;
	float h,t;
	cin>> h;
	t= sqrt(2*h/g);
	cout<<setprecision(2)<<fixed<<t;
}
