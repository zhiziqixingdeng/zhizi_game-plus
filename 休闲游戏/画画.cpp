#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
char x[6][6];
int a,b,c,d,n,w;
char y;
string name;
int main(){
	cout<<"��ӭ�������ĵ��Զ��滭"<<endl;
	sleep(1);
	cout<<"����:";
	cin>>name;
	cout<<"��ӭ,"<<name<<"��"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<name<<"������Ҫ��ʲô"<<endl<<"1.��ʼ����滭"<<endl<<"2.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��ʼ��"<<endl;
			cout<<"������Ҫ���Ϳѻ����"<<endl;
			cin>>a;
			for(int i=1;i<=5;i++){
				for(int j=1;j<=5;j++){
					x[i][j]='0';
				}
			}
			for(int i=1;i<=a;i++){
				b=rand()%4+1;
				c=rand()%4+1;
				if(x[b][c]=='0'){
					x[b][c]='1';
				}
				else{
					x[b][c]='0';
				}
				for(int i=1;i<=5;i++){
					for(int j=1;j<=5;j++){
						cout<<x[i][j];
					}
					cout<<endl;
				}
				sleep(1);
				system("cls");
			}
		}
		else if(n==2){
			cout<<"��л����"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"����"<<endl;
		}
	}
} 
