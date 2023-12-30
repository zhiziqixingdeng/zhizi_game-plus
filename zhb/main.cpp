#include <iostream>
#include "zhb.h"
using namespace std;
int n;
int main(){
	have();
	while(true){
		index();
		getchar();
    cin>>n;
		if(n==1){
			make();
		}
		else if(n==2){
			mining();
		}
		else if(n==3){
			play();
		}
		else if(n==4){
			to();
		}
		else if(n==5){
			information();
		}
		else if(n==6){
			end();
			break;
		}
		else{
			cout<<"错误!并没有这个选项"<<endl;
		}
	}
	return 0;
}
