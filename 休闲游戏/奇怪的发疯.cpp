#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int n,w,a;
string name,str;
int main(){
	cout<<"��ӭ����С�ʹ�����"<<endl;
	sleep(1);
	cout<<"���������ʲô?"<<endl;
	cin>>name;
	if(name!="114514"&&name!="1919810"&&name!="ikun"&&name!="����"){
		cout<<"��"<<endl;
		sleep(1);
		return 0;
	} 
	else{
		cout<<"��ӭС����"<<endl;
		cout<<"1+1+4+5+1+4=";
		cin>>a;
		if(a==16){
			cout<<"�����������񾭲��ĵط�"<<endl;
			sleep(1);
			return 0;
		}
		else if(a!=114514&&a!=16){
			cout<<"���񲡻�������"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"��ӭС����"<<endl;
			cout<<"��ֻ�������� 114514+1919810=�������⣬��������"<<endl;
			cin>>str;
			if(str=="114514+1919810"){
				cout<<"����!"<<endl;
				cout<<"�����"<<endl;
				cin>>str;
				if(str=="2034324"){
					cout<<"�����˳�ȥ"<<endl;
				}
				else if(str=="��"){
					cout<<"��ȷ!"<<endl;
					cout<<"��ͨ����!"<<endl;
					sleep(1);
					return 0;
				}
				else{
					cout<<"������"<<endl;
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
