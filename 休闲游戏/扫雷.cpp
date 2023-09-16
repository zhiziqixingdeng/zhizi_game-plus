#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
char x[100][100];
int n,m,a,b,w,ww,cnt,flag[100][100],ff,ans,flag2;
int main(){
	cout<<"欢迎玩扫雷游戏"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"输入1开始游戏"<<endl;
		cin>>ww;
		for(int i=1;i<=99;i++){
			for(int j=1;j<=99;j++){
				x[i][j]='?';
				flag[i][j]=0;
			}
		}
		if(ww==1){
			cout<<"请输入是几乘几的(1~99)(如:20 20)"<<endl;
			cin>>n>>m;
			while(1==1){
				cout<<"请输入需要多少地雷:";
				cin>>w;
				if(w>=n*m-1){
					cout<<"谁家地雷堆满家门的?"<<endl;
					sleep(1);
					cout<<"重来吧"<<endl;
					sleep(1);
					system("cls");
				}
				else if(w<=0){
					cout<<"开挂是吧"<<endl;
					sleep(1);
					cout<<"重来吧"<<endl;
					sleep(1);
					system("cls");
				}
				else{
					cout<<"好滴"<<endl;
					for(int i=1;i<=w;i++){
						a=rand()%(n-1)+1;
						b=rand()%(m-1)+1;
						if(flag[a][b]==0){
							flag[a][b]=1;
						}
						else{
							i--;
						}
					}
					sleep(1);
					break;
				}
			}
			cnt=0;
			cout<<"开始喽"<<endl;
			ff=0;
			while(1==1){
				ans=0;
				flag2=0;
				for(int i=1;i<=n;i++){
					for(int j=1;j<=n;j++){
						if(x[i][j]=='?'){
							flag2=1;
						}
					}
				}
				if(flag2==0){
					break;
				}
				for(int i=1;i<=n;i++){
					for(int j=1;j<=m;j++){
						cout<<x[i][j]<<" ";
					}
					cout<<endl;
				}
				cout<<"输入第几行第几列(如:1 1):";
				cin>>a>>b;
				if(x[a][b]!='?'||a>m||b>n||a<=0||b<=0){
					cout<<"你在作弊"<<endl;
				}
				else{
					if(flag[a][b]==1){
						cout<<"你弄到了地雷!"<<endl;
						sleep(1);
						cout<<"boom"<<endl;
						sleep(1);
						system("pause");
						ff=1;
						break;
					}
					else{
						if(a>1&&b>1){
						if(flag[a+1][b]==1){
							ans++;
						}
						if(flag[a-1][b]==1){
							ans++;
						}
						if(flag[a][b+1]==1){
							ans++;
						}
						if(flag[a][b-1]==1){
							ans++;
						}
						if(flag[a-1][b-1]==1){
							ans++;
						}
						if(flag[a+1][b+1]==1){
							ans++;
						}
						if(flag[a+1][b-1]==1){
							ans++;
						}
						if(flag[a-1][b+1]==1){
							ans++;
						}
						}
						else{
						if(flag[a+1][b]==1){
							ans++;
						}
						if(flag[a-1][b]==1){
							ans++;
						}
						if(flag[a][b+1]==1){
							ans++;
						}
						if(flag[a][b-1]==1){
							ans++;
						}
						if(flag[a-1][b-1]==1){
							ans++;
						}
						if(flag[a+1][b+1]==1){
							ans++;
						}
						if(flag[a+1][b-1]==1){
							ans++;
						}
						if(flag[a-1][b+1]==1){
							ans++;
						}
						} 
						x[a][b]=48+ans;
						cout<<"扫雷成功"<<endl; 
					}
				}
			}
			if(ff==0){
				cout<<"你成功了!"<<endl;
			}
			else{
				cout<<"你失败了"<<endl;
			}
		}
		else{
			cout<<"继续等待"<<endl;
		}
	}
}
