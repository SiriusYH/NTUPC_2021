#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
	float m1,m2,m3,m4,m5,m6,m7,sum,mean;
	vector<float>mark;
	cin >>m1>>m2>>m3>>m4>>m5>>m6>>m7;
	if ( (m1)>=0 && (m1)<=100 && (m2)>=0 && (m2)<=100 && (m3)>=0 && (m3)<=100 && (m4)>=0 && (m4)<=100 && (m5)>=0 && (m5)<=100 && (m6)>=0 && (m6)<=100 && (m7)>=0 && (m7)<=100){
	
		mark.emplace_back(m1);
		mark.emplace_back(m2);
		mark.emplace_back(m3);
		mark.emplace_back(m4);
		mark.emplace_back(m5);
		mark.emplace_back(m6);
		mark.emplace_back(m7);
	
		sort(mark.begin(),mark.end());
		sum = mark[2]+mark[3]+mark[4];
		mean = sum/3;

		cout <<	setprecision(2)<< fixed<< mean;}
	return 0;	
}
