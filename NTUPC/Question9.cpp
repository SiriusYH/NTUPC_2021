#include <iostream>
using namespace std;

int main(){
	int x,y,z,max;
	cin >>x>>y>>z;
	
	if (x>=1&&x<=200 && y>=1&&y<=200 && z>=1&&z<=200){
		max = (x>y)? x:y;
		max = (max>z)? max: z;
		
		for (;;){	
			if(max%x==0&&max%y==0&&max%z==0){
				cout<< max <<endl;
				break;
			}
			else max++;		
		}
	}
	return 0;
}
