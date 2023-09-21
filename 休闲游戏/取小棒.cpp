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
	cout<<"欢迎来到游戏(我也不知道叫什么名字(被打))"<<endl;
	sleep(1);
	cout<<"请输入你叫什么:";
	cin>>name;
	cout<<"欢迎你,"<<name<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<name<<",请问你要干什么"<<endl<<"1.开始游戏"<<endl<<"2.查看成就"<<endl<<"3.退出游戏"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入要有多少小棒:";
			cin>>t;
			system("cls");
			cout<<"请输入一次最多能拿几根:";
			cin>>a;
			system("cls");
			flag=0;
			if(t==0){
				cout<<"获得成就:天生反骨"<<endl;
				system("pause");
				c[1].flag1=1;
				system("cls");
				flag=1;
			}
			if(t<a){
				cout<<"获得成就:一次完成"<<endl;
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
				cout<<"请输入你要取几个(1~"<<a<<"个)"<<endl;
				cin>>b;
				if(b<=0||b>a){
					cout<<"获得成就:反骨x2"<<endl;
					system("pause");
					c[1].flag4=1;
					flag=1;
					system("cls");
					break;
				}
				else{
					cout<<"好的"<<endl;
					t-=b;
					if(t<=0){
						cout<<"你胜利了!"<<endl;
						if(c[1].flag5==0){
							cout<<"获得成就:第一次获胜!"<<endl;
							sleep(1);
							c[1].flag5=1;
							system("cls");
							break;
						}
					}
				}
				w=rand()%(a-1)+1;
				cout<<"对手取了:"<<w<<"个"<<endl;
				t-=w;
				if(t<=0){
					cout<<"你输了"<<endl;
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
				cout<<"天生反骨"<<endl;
			}
			sleep(0.1);
			cout<<"2.";
			if(c[1].flag2==0){
				cout<<"???"<<endl;
			}
			else{
				cout<<"一次完成"<<endl;
			}
			sleep(0.1);
			cout<<"3.";
			if(c[1].flag4==0){
				cout<<"???"<<endl;
			}
			else{
				cout<<"反骨x2"<<endl;
			}
			sleep(0.1);
			cout<<"4.";
			if(c[1].flag5==0){
				cout<<"???"<<endl;
			}
			else{
				cout<<"第一次获胜!"<<endl;
			}
			cout<<"5.";
			if(c[1].flag3==0){
				cout<<"???"<<endl;
			} 
			else{
				cout<<"小黑子"<<endl;
			}
		}
		else if(n==3){
			cout<<"感谢使用"<<endl;
			sleep(1);
			return 0;
		}
		else if(n==114514||n==1919810){
			cout<<"获得成就:小黑子"<<endl;
			sleep(1);
			c[1].flag3=1;
			system("cls");
		}
		else{
			cout<<"错误"<<endl;
		}
	}
} 
