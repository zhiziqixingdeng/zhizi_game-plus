#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
int n,w,a,b,cnt,t,f;
bool o;
char x[10][10],y;
string name;
bool xz(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			if(x[i][j]=='d'){
				return false;
			} 
		}
	}
	return true;
}
bool xz2(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			if(x[i][j]=='w'){
				return false;
			} 
		}
	}
	return true;
}
int main(){
	srand((unsigned int)time(NULL)); 
	cout<<"��ӭ��������ս����Ϸ"<<endl;
	sleep(1);
	cout<<"����:";
	cin>>name;
	cout<<"��ӭ"<<name<<"��"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<name<<"�кι��"<<endl<<"1.ս��"<<endl<<"2.������Ϣ"<<endl<<"3.�˳�"<<endl;
		cin>>n;
		if(n==1){
			for(int i=1;i<=9;i++){
				for(int j=1;j<=9;j++){
					x[i][j]=' '; 
				}
			}
			cout<<"��������ĳ�ʼλ��"<<endl;
			sleep(1);
			system("cls");
			cout<<"1~9����:6 7��������:";
			cin>>a>>b;
			if(a>9||a<1||b>9||b<0){
				cout<<"����"<<endl;
				a=rand()%7+1;
				b=rand()%7+1;
			}
			x[a][b]='w';
			cout<<"��ʼ��Ϸ!"<<endl;
			sleep(1);
			system("cls");
			t=rand()%7+1;
			f=rand()%7+1;
			x[t][f]='d';
			cout<<"Ŀ��:d�ǵ��ˣ�w���Լ�,Ҫ��wasd���ƶ���������"<<endl; 
			sleep(1);
			system("cls");
			while(1==1){
				for(int i=1;i<=9;i++){
					for(int j=1;j<=9;j++){
						cout<<x[i][j];
					}
				}
				cout<<"������wsda:";
				cin>>y;
				if(y=='w'){
					if(a==1){
						cout<<"���Ѿ�������˰�"<<endl;
					}
					else{
						x[a][b]=' ';
						a=a-1;
						x[a][b]='w';
					}
				}
				else if(y=='s'){
					if(a==9){
						cout<<"���������!"<<endl;
					}
					else{
						x[a][b]=' ';
						a=a+1;
						x[a][b]='w';
					}
				}
				else if(y=='a'){
					if(b==1){
						cout<<"���������"<<endl;
					}
					else{
						x[a][b]=' ';
						b=b-1;
						x[a][b]='w';
					}
				}
				else if(y=='d'){
					if(b==9){
						cout<<"�������ұ�"<<endl;
					}
					else{
						x[a][b]=' ';
						b=b+1;
						x[a][b]='w';
					}
				}
				else{
					cout<<"����"<<endl;
				}
				sleep(1);
				system("cls");
				o=xz();
				if(o==true){
					cout<<"��Ӯ��!"<<endl;
					sleep(1);
					cnt++;
					system("cls");
					break;
				}
				else{
					for(int i=1;i<=9;i++){
						for(int j=1;j<=9;j++){
							cout<<x[i][j];
						}
					}
					x[t][f]=' ';
					t=rand()%7+1;
					f=rand()%7+1;
					x[t][f]='d';
					sleep(1);
					system("cls");
					o=xz2;
					if(o==true){
						cout<<"������"<<endl;
						sleep(1);
						system("cls");
						break;
					}
					for(int i=1;i<=9;i++){
						for(int j=1;j<=9;j++){
							cout<<x[i][j];
						}
					}
					sleep(1);
					system("cls");
				}
			}
		}
		else if(n==2){
			cout<<"����:"<<name<<endl;
			cout<<"Ӯ���Ĵ���:"<<cnt<<endl;
			system("pause");
		}
		else if(n==3){
			cout<<"��л����"<<endl;
			sleep(1);
			return 0;
		} 
		else{
			cout<<"����"<<endl;
			sleep(1);
			system("cls");
		}
	}
}
