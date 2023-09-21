#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int r;
int main(){
	srand((unsigned int)time(NULL)); 
	r=rand()%4;
	if(r==0){
		cout<<"你买了一杯饮料"<<endl;
	}
	else if(r==1){
		cout<<"你遇到了下雨天"<<endl;
	}
	else{
		cout<<"啥事没有"<<endl;
	}
	system("pause");
	return 0; 
} 
