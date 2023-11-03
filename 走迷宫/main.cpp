#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
char dt[6][6];
char a;
int x,y;//表示坐标
int n,flag;
int main(){
	freopen("迷宫.in","r",stdin);
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>dt[i][j];
		}
	}
	freopen("CON","r",stdin);
	while(true){
		cout<<"请输入要干什么"<<endl<<"1.开始玩"<<endl<<"2.退出"<<endl;
		cin>>n;
		if(n==1){
			flag=1;
			dt[5][5]='z';
			dt[1][1]='w';
			x=1;
			y=1;
			cout<<"w是你自己,要到达z"<<endl;
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
				cout<<"请输入要怎么走:";
				cin>>a;
				if(a=='w'||a=='W'){
					if(x-1==0){
						cout<<"你走出了地图，游戏失败"<<endl;
						sleep(1);
						system("cls");
						dt[x][y]='.';
						flag=0;
						break;
					}
					else{
						if(dt[x-1][y]=='#'){
							cout<<"你撞到墙了 game over"<<endl;
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
						cout<<"你走出了地图，游戏失败"<<endl;
						sleep(1);
						system("cls");
						dt[x][y]='.';
						flag=0;
						break;
					}
					else{
						if(dt[x+1][y]=='#'){
							cout<<"你撞到墙了 game over"<<endl;
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
						cout<<"你走出了地图，游戏失败"<<endl;
						sleep(1);
						system("cls");
						dt[x][y]='.';
						flag=0;
						break;
					}
					else{
						if(dt[x][y-1]=='#'){
							cout<<"你撞到墙了 game over"<<endl;
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
						cout<<"你走出了地图，游戏失败"<<endl;
						sleep(1);
						system("cls");
						dt[x][y]='.';
						flag=0;
						break;
					}
 			   if(dt[x][y+1]=='#'){
							cout<<"你撞到墙了 game over"<<endl;
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
          cout<<"你赢了!"<<endl;
          sleep(1);
          system("cls");
          x=5;
          flag=2;
          y=5;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			if(flag==1){
				cout<<"you win!"<<endl;
			}
			if(flag==2){
				cout<<"真6"<<endl;
			}
			sleep(1);
			system("cls");
		}
		else{
			cout<<"感谢使用"<<endl;
			sleep(1);
			system("cls");
		}
	}
}
