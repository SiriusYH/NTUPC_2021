#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,k,row;
	string sign;
	cin >> n;
	cin >>sign ;
	if (n>=2&&n<=5){
		for (row=1; row<=n;row++){
			for (k=0;k < n-row;k++){
				cout<< " ";
			}
			for (int x=2*n-row;x>2*k;x--){
				cout << sign;
			}
			for (int x=2*n-row;x>2*k+1;x--){
				cout << sign;
			}
			for (k=0;k < n-row-1;k++){
				cout<< " ";
			}
			cout <<"\n";
		}
		for(row=1;row<=n;row++){
			for (k=1;k < n;k++){
			cout<< " ";
			}
			cout << sign <<endl;
		}
	}
	return 0;
}
