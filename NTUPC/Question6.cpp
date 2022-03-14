#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long unsigned int X,Y;
	long long unsigned int greater,smaller,sum=0;
	cin >> X >>Y;
	if (X>=1 &&X<=10000 && Y>=1 && Y<=10000){
		greater = (X>Y)? X:Y;
		smaller = (X<Y)? X:Y;
		for (smaller;smaller<=greater;smaller++){
			sum +=smaller;
		}
	}
	cout <<sum<<endl;
	return 0;
}
