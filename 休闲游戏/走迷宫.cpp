#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
char x[30][30],q;
int a,b,c,d,t,f,n,w,flag;
bool hi;
string name;
bool td(){//众所周知，写注释是一个好习惯 
	for(int i=1;i<=t;i++){
		for(int j=1;j<=f;j++){
			if(x[i][j]=='z'){
				return false;
			}
		}
	}
	return true;//胜利 
}
bool td2(){
	for(int i=1;i<=t;i++){
		for(int j=1;j<=f;j++){
			if(x[i][j]==' '){
				return false;
			}
		}
	}
	return true;
}
int main(){
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"欢迎来到走迷宫,"<<name<<endl;
	sleep(1);
	system("cls");
	while(true){
		cout<<"请输入你要干什么"<<endl<<"1.玩走迷宫"<<endl<<"2.创建迷宫"<<endl<<"3.退出"<<endl;
		cin>>n;
		if(n==1){
			if(flag==0){
				cout<<"检测到你还没有创建地图"<<endl;
				sleep(1);
				cout<<"请先创建地图"<<endl;
			}
			else{
				cout<<"好的,wasd操控"<<endl;
				w=0;
				a=1;
				b=1;
				x[a][b]='w'; 
				while(w==0){
					for(int i=1;i<=t;i++){
						for(int j=1;j<=f;j++){
							cout<<x[i][j];
						}
						cout<<endl;
					}
					cout<<"请输入操作:";
					cin>>q;//控制玩家 
					if(q=='w'){
						if(a-1==0||x[a-1][b]=='1'){
							cout<<"错误"<<endl;
							sleep(0.1);
							system("cls");
						}
						else if(x[a-1][b]=='x'){
							cout<<"你弄到了地雷!"<<endl;
							sleep(1);
							cout<<"你失败了"<<endl;
							sleep(1);
							system("cls");
							break;
						}
						else{
							cout<<"好的，移动完成!"<<endl;
							sleep(0.1);
							x[a][b]='0';
							a=a-1;
							x[a][b]='w';
						}
					}
					else if(q=='s'){
						if(a+1==t+1||x[a+1][b]=='1'){
							cout<<"错误"<<endl;
							sleep(0.1);
							system("cls");
						}
						else if(x[a+1][b]=='x'){
							cout<<"你弄到了地雷!"<<endl;
							sleep(1);
							cout<<"你失败了"<<endl;
							sleep(1);
							system("cls");
							break;
						}
						else{
							cout<<"好的，移动完成"<<endl;
							sleep(0.1);
							x[a][b]='0';
							a=a+1;
							x[a][b]='w';
						}
					}
					else if(q=='a'){
						if(b-1==0||x[a][b-1]=='1'){
							cout<<"错误"<<endl;
							sleep(0.1);
							system("cls");
						}
						else if(x[a][b-1]=='x'){
							cout<<"你弄到了地雷!"<<endl;
							sleep(1);
							cout<<"你失败了"<<endl;
							sleep(1);
							system("cls");
							break;
						}
						else{
							cout<<"好的，移动完成"<<endl;
							sleep(0.1);
							x[a][b]='0';
							b=b-1;
							x[a][b]='w';
						}
					}
					else if(q=='d'){
						if(b+1==0||x[a][b+1]=='1'){
							cout<<"错误"<<endl;
							sleep(0.1);
							system("cls");
						}
						else if(x[a][b+1]=='x'){
							cout<<"你弄到了地雷!"<<endl;
							sleep(1);
							cout<<"你失败了"<<endl;
							sleep(1);
							system("cls");
							break;
						}
						else{
							cout<<"好的，移动完成"<<endl;
							sleep(0.1);
							x[a][b]='0';
							b=b+1;
							x[a][b]='w';
						}
					}
					else if(f=='x'){
						cout<<"游戏结束"<<endl;
						sleep(1);
						x[a][b]='0';
						break;
					}
					else{
						cout<<"错误"<<endl;
						sleep(1);
						system("cls");
					}
					hi=false;
					hi=td();
					if(hi==true){
						cout<<"胜利!"<<endl;
						sleep(1);
						system("cls");
						x[a][b]='z';
						break;
					}
				}
			}
		}
		else if(n==2){
			cout<<"请输入需要几乘几的(如:3 3,最高10)：";
			cin>>t>>f;
			if(t>10||f>10||t<=0||f<=0){
				cout<<"？？？"<<endl;
				cout<<"别弄了"<<endl;
			} 
			else{
				cout<<"请注意，创建一个地图会覆盖另一个地图，是否覆盖 1.是 2.不是"<<endl;
				cin>>w;
				system("cls");
				if(w==1){
					for(int i=1;i<=t;i++){
						for(int j=1;j<=f;j++){
							x[i][j]=' ';
						}
					}
					while(true){
					for(int i=1;i<=t;i++){
						for(int j=1;j<=f;j++){
							cout<<x[i][j];
						}
						cout<<endl;
					}
					cout<<"请输入更改的坐标:";
					cin>>a>>b;
					if(a>t||a>f||b>t||b>f||a<=0||b<=0){
						cout<<"错误"<<endl;
					}
					else{
						system("cls");
						cout<<"请问要增加什么"<<endl<<"1.小路"<<endl<<"2.增加障碍物"<<endl<<"3.增加地雷"<<endl<<"4.退出"<<endl;
						cin>>c;
						if(c==1){
							cout<<"增加成功!"<<endl;
							x[a][b]='0';
						} 
						else if(c==2){
							cout<<"增加成功!"<<endl;
							x[a][b]='1';
						}
						else if(c==3){
							cout<<"增加成功!"<<endl;
							x[a][b]='x';
						}
						else if(c==4){
							hi=td2();
							if(hi==false){
							cout<<"还有地方没有弄"<<endl;
							sleep(1);
							system("cls");
							}
							else{
								cout<<"好的"<<endl;
								sleep(1);
								break; 
							}
						}
						else{
							cout<<"错误"<<endl;
						}
					}
					}
				}
				else{
					cout<<"好的"<<endl;
				}
			}
		}
		else if(n==3){
			cout<<"感谢游玩"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"错误"<<endl;
		}
	} 
} 
