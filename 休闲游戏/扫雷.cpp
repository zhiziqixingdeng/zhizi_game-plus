#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
char x[100][100];
int n,m,a,b,w,ww,cnt,flag[100][100],ff,ans,flag2;
int main(){
	cout<<"��ӭ��ɨ����Ϸ"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"����1��ʼ��Ϸ"<<endl;
		cin>>ww;
		for(int i=1;i<=99;i++){
			for(int j=1;j<=99;j++){
				x[i][j]='?';
				flag[i][j]=0;
			}
		}
		if(ww==1){
			cout<<"�������Ǽ��˼���(1~99)(��:20 20)"<<endl;
			cin>>n>>m;
			while(1==1){
				cout<<"��������Ҫ���ٵ���:";
				cin>>w;
				if(w>=n*m-1){
					cout<<"˭�ҵ��׶������ŵ�?"<<endl;
					sleep(1);
					cout<<"������"<<endl;
					sleep(1);
					system("cls");
				}
				else if(w<=0){
					cout<<"�����ǰ�"<<endl;
					sleep(1);
					cout<<"������"<<endl;
					sleep(1);
					system("cls");
				}
				else{
					cout<<"�õ�"<<endl;
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
			cout<<"��ʼ�"<<endl;
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
				cout<<"����ڼ��еڼ���(��:1 1):";
				cin>>a>>b;
				if(x[a][b]!='?'||a>m||b>n||a<=0||b<=0){
					cout<<"��������"<<endl;
				}
				else{
					if(flag[a][b]==1){
						cout<<"��Ū���˵���!"<<endl;
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
						cout<<"ɨ�׳ɹ�"<<endl; 
					}
				}
			}
			if(ff==0){
				cout<<"��ɹ���!"<<endl;
			}
			else{
				cout<<"��ʧ����"<<endl;
			}
		}
		else{
			cout<<"�����ȴ�"<<endl;
		}
	}
}
