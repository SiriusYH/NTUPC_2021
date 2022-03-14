#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
	int x,y;
	int chicken,rabbit;
	cin >>x>>y;
	if (x>=1 && x<=1000 && y>=1 && y<=1000){
		chicken= abs((4*x-y)/2);
		rabbit = abs((y-(2*x))/2);
		if ((chicken+rabbit)!=x || ((2*chicken)+(4*rabbit))!=y) cout<< "No feasible solution"<<endl;
		else{
			cout<<chicken<<endl;
			cout<<rabbit<<endl;
		}
	}
	return 0;
}
