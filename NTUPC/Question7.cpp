#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	int A_0, P,T,n; // T stands for target , P = principle , r =rate
	double r;
	cin >>P>>r>>T;
	if ((P>=1&&P<=2000)&&(r>0&&r<=0.05)&&(T>=P&&T<=4000)){
		if (P==T){
			n=0;
			cout <<n<<endl;
		}
		else {
			for (n=0;P<T;n++){
				A_0 = P*pow((1+r),n);
				if (A_0 >= T){
					cout<< n<<endl;
					break;
				}
				else continue;
			}
		}
		
	}
	return 0;
}
