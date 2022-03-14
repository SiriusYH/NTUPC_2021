#include <iostream>
#include <vector>
using namespace std;

int main(){
	int i, k ;
	int n;
	vector<int>vect;
	cin >> n;
	for (i=2 ; i <= n ;i++){
		
		for (k=2; k <=(i/k);k++){
		if (!(i%k))break;}
		
		if(k>(i/k)){
			vect.emplace_back(i);
		}
	}
	cout << vect.back()<<endl;
	return 0;
}
