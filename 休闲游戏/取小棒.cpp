#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int a,b,n,w;
string name;
int t,f;
struct x{
	int flag1;
	int flag2;
	int flag3;
	int flag4;
	int flag5;
}c[2];
int flag;
int main(){
	cout<<"��ӭ������Ϸ(��Ҳ��֪����ʲô����(����))"<<endl;
	sleep(1);
	cout<<"���������ʲô:";
	cin>>name;
	cout<<"��ӭ��,"<<name<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<name<<",������Ҫ��ʲô"<<endl<<"1.��ʼ��Ϸ"<<endl<<"2.�鿴�ɾ�"<<endl<<"3.�˳���Ϸ"<<endl;
		cin>>n;
		if(n==1){
			cout<<"������Ҫ�ж���С��:";
			cin>>t;
			system("cls");
			cout<<"������һ��������ü���:";
			cin>>a;
			system("cls");
			flag=0;
			if(t==0){
				cout<<"��óɾ�:��������"<<endl;
				system("pause");
				c[1].flag1=1;
				system("cls");
				flag=1;
			}
			if(t<a){
				cout<<"��óɾ�:һ�����"<<endl;
				system("pause");
				c[1].flag2=1;
				system("cls");
				flag=1;
			}
			while(flag==0){
				for(int i=1;i<=t;i++){
					cout<<"*";
				}
				cout<<endl;
				cout<<"��������Ҫȡ����(1~"<<a<<"��)"<<endl;
				cin>>b;
				if(b<=0||b>a){
					cout<<"��óɾ�:����x2"<<endl;
					system("pause");
					c[1].flag4=1;
					flag=1;
					system("cls");
					break;
				}
				else{
					cout<<"�õ�"<<endl;
					t-=b;
					if(t<=0){
						cout<<"��ʤ����!"<<endl;
						if(c[1].flag5==0){
							cout<<"��óɾ�:��һ�λ�ʤ!"<<endl;
							sleep(1);
							c[1].flag5=1;
							system("cls");
							break;
						}
					}
				}
				w=rand()%(a-1)+1;
				cout<<"����ȡ��:"<<w<<"��"<<endl;
				t-=w;
				if(t<=0){
					cout<<"������"<<endl;
					sleep(1);
					system("cls");
					break;
				}
			}
		}
		else if(n==2){
			cout<<"1.";
			if(c[1].flag1==0){
				cout<<"???"<<endl;
			}
			else{
				cout<<"��������"<<endl;
			}
			sleep(0.1);
			cout<<"2.";
			if(c[1].flag2==0){
				cout<<"???"<<endl;
			}
			else{
				cout<<"һ�����"<<endl;
			}
			sleep(0.1);
			cout<<"3.";
			if(c[1].flag4==0){
				cout<<"???"<<endl;
			}
			else{
				cout<<"����x2"<<endl;
			}
			sleep(0.1);
			cout<<"4.";
			if(c[1].flag5==0){
				cout<<"???"<<endl;
			}
			else{
				cout<<"��һ�λ�ʤ!"<<endl;
			}
			cout<<"5.";
			if(c[1].flag3==0){
				cout<<"???"<<endl;
			} 
			else{
				cout<<"С����"<<endl;
			}
		}
		else if(n==3){
			cout<<"��лʹ��"<<endl;
			sleep(1);
			return 0;
		}
		else if(n==114514||n==1919810){
			cout<<"��óɾ�:С����"<<endl;
			sleep(1);
			c[1].flag3=1;
			system("cls");
		}
		else{
			cout<<"����"<<endl;
		}
	}
} 
