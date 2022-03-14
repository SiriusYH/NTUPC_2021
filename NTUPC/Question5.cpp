#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
	vector<int>vect;
	int N,request,sum=0;
	cin >>N ;
	if (N>=1 && N<=10){
		vect.get_allocator().allocate(N); // or can use vect.reserve(N)
		for (int x=0;x<N;x++){
			cin >>request;
			vect.emplace_back(request);
		}
		for (auto i: vect){
			if (i%2==0){
				sum ++;
			}
		}
	}
	cout <<sum ;
	return 0;
}
