#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
char dt[6][6];
char a;
int x,y;//��ʾ����
int n,flag;
int main(){
	freopen("�Թ�.in","r",stdin);
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>dt[i][j];
		}
	}
	freopen("CON","r",stdin);
	while(true){
		cout<<"������Ҫ��ʲô"<<endl<<"1.��ʼ��"<<endl<<"2.�˳�"<<endl;
		cin>>n;
		if(n==1){
			flag=1;
			dt[5][5]='z';
			dt[1][1]='w';
			x=1;
			y=1;
			cout<<"w�����Լ�,Ҫ����z"<<endl;
			sleep(1);
			system("cls");
			while(x!=5&&y!=5){
				system("cls");
				for(int i=1;i<=5;i++){
					for(int j=1;j<=5;j++){
						cout<<dt[i][j];
					}
					cout<<endl;
				}
				cout<<"������Ҫ��ô��:";
				cin>>a;
				if(a=='w'||a=='W'){
					if(x-1==0){
						cout<<"���߳��˵�ͼ����Ϸʧ��"<<endl;
						sleep(1);
						system("cls");
						dt[x][y]='.';
						flag=0;
						break;
					}
					else{
						if(dt[x-1][y]=='#'){
							cout<<"��ײ��ǽ�� game over"<<endl;
							sleep(1);
							system("cls");
							dt[x][y]='.';
							flag=0;
							break;
						}
						else{
							dt[x][y]='.';
							x-=1;
							dt[x][y]='.';
							dt[x][y]='w';
						}
					}
				}
				else if(a=='s'||a=='S'){
					if(x+1==6){
						cout<<"���߳��˵�ͼ����Ϸʧ��"<<endl;
						sleep(1);
						system("cls");
						dt[x][y]='.';
						flag=0;
						break;
					}
					else{
						if(dt[x+1][y]=='#'){
							cout<<"��ײ��ǽ�� game over"<<endl;
							sleep(1);
							system("cls");
							dt[x][y]='.';
							flag=0;
							break;
						}
						else{
							dt[x][y]='.';
							x+=1;
							dt[x][y]='w';
						}
					}
				}
				else if(a=='a'||a=='A'){
					if(y-1==0){
						cout<<"���߳��˵�ͼ����Ϸʧ��"<<endl;
						sleep(1);
						system("cls");
						dt[x][y]='.';
						flag=0;
						break;
					}
					else{
						if(dt[x][y-1]=='#'){
							cout<<"��ײ��ǽ�� game over"<<endl;
							sleep(1);
							dt[x][y]='.';
							system("cls");
							flag=0;
							break;
						}
						else{
							dt[x][y]='.';
							y-=1;
							dt[x][y]='w';
						}
					}
				}
				else if(a=='d'||a=='D'){
					if(y+1==6){
						cout<<"���߳��˵�ͼ����Ϸʧ��"<<endl;
						sleep(1);
						system("cls");
						dt[x][y]='.';
						flag=0;
						break;
					}
 			   if(dt[x][y+1]=='#'){
							cout<<"��ײ��ǽ�� game over"<<endl;
							sleep(1);
							dt[x][y]='.';
							system("cls");
							flag=0;
							break;
						}
						else{
							dt[x][y]='.';
							y+=1;
							dt[x][y]='w';
						}
				}
				else if(a=='6'){
          cout<<"��Ӯ��!"<<endl;
          sleep(1);
          system("cls");
          x=5;
          flag=2;
          y=5;
				}
				else{
					cout<<"����"<<endl;
				}
			}
			if(flag==1){
				cout<<"you win!"<<endl;
			}
			if(flag==2){
				cout<<"��6"<<endl;
			}
			sleep(1);
			system("cls");
		}
		else{
			cout<<"��лʹ��"<<endl;
			sleep(1);
			system("cls");
		}
	}
}
