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
	cout<<"欢迎来到运气战斗游戏"<<endl;
	sleep(1);
	cout<<"名字:";
	cin>>name;
	cout<<"欢迎"<<name<<"！"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<name<<"有何贵干"<<endl<<"1.战斗"<<endl<<"2.个人信息"<<endl<<"3.退出"<<endl;
		cin>>n;
		if(n==1){
			for(int i=1;i<=9;i++){
				for(int j=1;j<=9;j++){
					x[i][j]=' '; 
				}
			}
			cout<<"请输入你的初始位置"<<endl;
			sleep(1);
			system("cls");
			cout<<"1~9，如:6 7，请输入:";
			cin>>a>>b;
			if(a>9||a<1||b>9||b<0){
				cout<<"错误"<<endl;
				a=rand()%7+1;
				b=rand()%7+1;
			}
			x[a][b]='w';
			cout<<"开始游戏!"<<endl;
			sleep(1);
			system("cls");
			t=rand()%7+1;
			f=rand()%7+1;
			x[t][f]='d';
			cout<<"目标:d是敌人，w是自己,要用wasd来移动碰到敌人"<<endl; 
			sleep(1);
			system("cls");
			while(1==1){
				for(int i=1;i<=9;i++){
					for(int j=1;j<=9;j++){
						cout<<x[i][j];
					}
				}
				cout<<"请输入wsda:";
				cin>>y;
				if(y=='w'){
					if(a==1){
						cout<<"你已经在最顶上了啊"<<endl;
					}
					else{
						x[a][b]=' ';
						a=a-1;
						x[a][b]='w';
					}
				}
				else if(y=='s'){
					if(a==9){
						cout<<"你在最底下!"<<endl;
					}
					else{
						x[a][b]=' ';
						a=a+1;
						x[a][b]='w';
					}
				}
				else if(y=='a'){
					if(b==1){
						cout<<"你在最左边"<<endl;
					}
					else{
						x[a][b]=' ';
						b=b-1;
						x[a][b]='w';
					}
				}
				else if(y=='d'){
					if(b==9){
						cout<<"你在最右边"<<endl;
					}
					else{
						x[a][b]=' ';
						b=b+1;
						x[a][b]='w';
					}
				}
				else{
					cout<<"错误"<<endl;
				}
				sleep(1);
				system("cls");
				o=xz();
				if(o==true){
					cout<<"你赢了!"<<endl;
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
						cout<<"你输了"<<endl;
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
			cout<<"名字:"<<name<<endl;
			cout<<"赢过的次数:"<<cnt<<endl;
			system("pause");
		}
		else if(n==3){
			cout<<"感谢游玩"<<endl;
			sleep(1);
			return 0;
		} 
		else{
			cout<<"错误"<<endl;
			sleep(1);
			system("cls");
		}
	}
}
