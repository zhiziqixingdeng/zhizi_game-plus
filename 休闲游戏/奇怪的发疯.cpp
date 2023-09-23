#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int n,w,a;
string name,str;
int main(){
	cout<<"欢迎来到小型答题器"<<endl;
	sleep(1);
	cout<<"你的名字是什么?"<<endl;
	cin>>name;
	if(name!="114514"&&name!="1919810"&&name!="ikun"&&name!="坤坤"){
		cout<<"滚"<<endl;
		sleep(1);
		return 0;
	} 
	else{
		cout<<"欢迎小黑子"<<endl;
		cout<<"1+1+4+5+1+4=";
		cin>>a;
		if(a==16){
			cout<<"滚，这里是神经病的地方"<<endl;
			sleep(1);
			return 0;
		}
		else if(a!=114514&&a!=16){
			cout<<"精神病患者严重"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"欢迎小黑子"<<endl;
			cout<<"你只因遇到了 114514+1919810=几的难题，请输入解答"<<endl;
			cin>>str;
			if(str=="114514+1919810"){
				cout<<"聪明!"<<endl;
				cout<<"输入答案"<<endl;
				cin>>str;
				if(str=="2034324"){
					cout<<"正常人出去"<<endl;
				}
				else if(str=="答案"){
					cout<<"正确!"<<endl;
					cout<<"你通关了!"<<endl;
					sleep(1);
					return 0;
				}
				else{
					cout<<"？？？"<<endl;
					sleep(1);
					return 0;
				}
			}
			else{
				cout<<"dsjhaiofhuiweohgfui"<<endl;
				sleep(1);
				return 0;
			}
		}
	}
} 
