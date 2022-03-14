#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	float a,r,h;
	const float pi =3.14;
	cin >>r>>h;
	if (r>=1 && r<=60 && h>=1 && h<=60)
	a = 2*pi*r*h+2*pi*pow(r,2);
	cout <<setprecision(2)<<fixed<< a;
	return 0;
}
