#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int r;
int main(){
	srand((unsigned int)time(NULL)); 
	r=rand()%4;
	if(r==0){
		cout<<"������һ������"<<endl;
	}
	else if(r==1){
		cout<<"��������������"<<endl;
	}
	else{
		cout<<"ɶ��û��"<<endl;
	}
	system("pause");
	return 0; 
} 
