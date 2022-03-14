#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	int n,x,sum;
	vector<int>myvect; 
	cin >> n;
	if (n>=1 && n<=10000){
		for(x=1; x<=n ;x++){
			if (n%x==0){
				myvect.push_back(x);
			}
			else continue;
		}
	}
	/*for (auto i:myvect){
		//cout << i << " " ;
		sum +=i;						//method 1
	}
	cout << sum << endl;  */
	cout << accumulate(myvect.begin(),myvect.end(),0)<<endl;  //method 2
}

/*method 2 for line 18
cout << accumulate(myvect.begin(),myvect.end(),0)<<endl; //this is vector default function
*/
