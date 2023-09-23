#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
char x[6][6];
int a,b,c,d,n,w;
char y;
string name;
int main(){
	cout<<"欢迎来到无聊的自动绘画"<<endl;
	sleep(1);
	cout<<"名字:";
	cin>>name;
	cout<<"欢迎,"<<name<<"啊"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<name<<"请问你要干什么"<<endl<<"1.开始随机绘画"<<endl<<"2.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"开始了"<<endl;
			cout<<"请问需要随机涂鸦几轮"<<endl;
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
			cout<<"感谢游玩"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
} 
