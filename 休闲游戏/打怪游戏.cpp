#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
struct r{
	string name;
	int mx=60;
	int mg=10;
	int flag1=1;
	int flag2=0;
	int flag3=0;
	int q;
}e[2];
int m1x=100000,m1g=3000;
int n,w,cnt,ww;
int m2x,m2g,flag,ans,ans2;
int main(){
	cout<<"欢迎来到打怪游戏"<<endl;
	sleep(1);
	srand((unsigned int)time(NULL)); 
	cout<<"请输入你的名字:";
	cin>>e[1].name;
	cout<<"欢迎,"<<e[1].name<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"请输入你要干什么"<<endl<<"1.打怪"<<endl<<"2.药店"<<endl<<"3.秘籍购买"<<endl<<"4.个人信息"<<endl<<"5.退隐江湖(离开)"<<endl;
		cin>>n;
		if(n==1){
			system("cls");
			cout<<"请输入要打什么怪"<<endl<<"1.新手怪(新手用来打的)"<<endl<<"2.高手怪(高手才能打，要不然死的很快)"<<endl<<"3.外挂怪(很无敌，你得改代码才行)"<<endl;
			cin>>w;
			if(w==1){
				cout<<"你遇到了小怪"<<endl;
				m2x=rand()%100+9;
				m2g=rand()%40+3;
				cout<<"血量为:"<<m2x<<endl<<"攻击力为:"<<m2g<<endl;
				cout<<"开始"<<endl;
				flag=0;
				ans=0;
				ans2=0;
				while(1==1){
					if(e[1].mx<=0){
						cout<<"你死了"<<endl;
						e[1].mx+=10;
						flag=1;
						break;
					}
					cout<<"请输入你要用什么技能"<<endl<<"1.普通攻击(攻击力"<<e[1].mg<<")"<<endl<<"2.随机攻击(攻击力随机)"<<endl;
					if(e[1].flag2==1){
						cout<<"3.魔道(可以使用普通攻击，但是会获得对方的血，一局用一次)"<<endl;
					}
					if(e[1].flag3==1){
						cout<<"4.回血(回复随机滴血,一局用1次)"<<endl;
					}
				cin>>ww;
				if(ww==1){
					cout<<"你进行了普通攻击"<<endl;
					cout<<"对方减了血"<<endl;
					m2x-=e[1].mg;
				}
				else if(ww==2){
					cout<<"你进行了随机攻击"<<endl;
					sleep(1);
					cnt=rand()%e[1].mg+e[1].mg/2;
					cout<<"对方受到了"<<cnt<<"点伤害"<<endl;
					m2x-=cnt;
				}
				else if(ww==3&&e[1].flag2==1&&ans==0){
					cout<<"你攻击了对方"<<endl;
					cout<<"你加了"<<e[1].mg<<"点血"<<endl;
					sleep(1);
					cout<<"对方减了"<<e[1].mg<<"点血"<<endl;
					m2x-=e[1].mg;
					e[1].mx+=e[1].mg;
				}
				else if(ww==4&&e[1].flag3==1&&ans2==0){
					cnt=e[1].mg+=10;
					cout<<"你回了"<<cnt<<"滴血";
					e[1].mx+=cnt; 
				}
				else{
					cout<<"错误"<<endl;
				}
				if(m2x<=0){
					cout<<"怪物死了"<<endl;
					cout<<"获得100金币"<<endl;
					e[1].q+=100; 
				}
				cout<<"怪物对你造成了"<<m2g<<"点攻击力"<<endl;
				e[1].mx-=m2g; 
			}
		}
		else if(w==2){
			m1x=100000; 
			m1g=3000;
			cout<<"你遇到了大怪"<<endl;
				cout<<"血量为:"<<m1x<<endl<<"攻击力为:"<<m1g<<endl;
				cout<<"开始"<<endl;
				flag=0;
				ans=0;
				ans2=0;
				while(1==1){
					if(e[1].mx<=0){
						cout<<"你死了"<<endl;
						e[1].mx+=10;
						flag=1;
						break;
					}
					cout<<"请输入你要用什么技能"<<endl<<"1.普通攻击(攻击力"<<e[1].mg<<")"<<endl<<"2.随机攻击(攻击力随机)"<<endl;
					if(e[1].flag2==1){
						cout<<"3.魔道(可以使用普通攻击，但是会获得对方的血，一局用一次)"<<endl;
					}
					if(e[1].flag3==1){
						cout<<"4.回血(回复随机滴血,一局用1次)"<<endl;
					}
				cin>>ww;
				if(ww==1){
					cout<<"你进行了普通攻击"<<endl;
					cout<<"对方减了血"<<endl;
					m1x-=e[1].mg;
				}
				else if(ww==2){
					cout<<"你进行了随机攻击"<<endl;
					sleep(1);
					cnt=rand()%e[1].mg+e[1].mg/2;
					cout<<"对方受到了"<<cnt<<"点伤害"<<endl;
					m1x-=cnt;
				}
				else if(ww==3&&e[1].flag2==1&&ans==0){
					cout<<"你攻击了对方"<<endl;
					cout<<"你加了"<<e[1].mg<<"点血"<<endl;
					sleep(1);
					cout<<"对方减了"<<e[1].mg<<"点血"<<endl;
					m1x-=e[1].mg;
					e[1].mx+=e[1].mg;
				}
				else if(ww==4&&e[1].flag3==1&&ans2==0){
					cnt=e[1].mg+=10;
					cout<<"你回了"<<cnt<<"滴血";
					e[1].mx+=cnt; 
				}
				else{
					cout<<"错误"<<endl;
				}
				if(m1x<=0){
					cout<<"怪物死了"<<endl;
					cout<<"你获得了200金币"<<endl;
					break; 
				}
				cout<<"怪物对你造成了"<<m1g<<"点攻击力"<<endl;
				e[1].mx-=m1g; 
			}
		}
		else if(w==3){
			m2x+=10000;
			m2g+=100; 
			cout<<"你遇到了外挂怪物"<<endl;
			sleep(1);
			cout<<"对方使用了锁定挂，你的所有秘籍无效"<<endl;
			sleep(1);
			system("cls");
			cout<<"对方使用了防御挂,你的攻击力减半"<<endl;
			sleep(1);
			cout<<"开始对决"<<endl;
			while(1==1){
				if(e[1].mx<=0){
					cout<<"你死了"<<endl;
					e[1].mx=20;
					break;
				}
				cout<<"请输入需要什么攻击"<<endl<<"1.普通攻击(伤害"<<e[1].mg/2<<")"<<endl;
				cin>>ww;
				if(ww==1){
					cnt=rand()%10;
					if(cnt>=3){
						cout<<"对方使用躲闪挂，躲闪了你的攻击"<<endl;
					}
					else{
						cout<<"对方剪掉了"<<e[1].mg/2<<"滴血"<<endl;
						m2x-=e[1].mg/2; 
					}
				}
				else{
					cout<<"错误"<<endl;
				}
				if(m2x<=0){
					cout<<"你胜利了"<<endl;
					sleep(1);
					cout<<"你加了10000金币"<<endl;
					e[1].q+=10000;
				}
				cnt=rand()%4;
				if(cnt==0){
					cout<<"对方使用加血"<<endl;
					cout<<"+100"<<endl;
					m2x+=100;
				}
				else if(cnt==1){
					cout<<"对方使用了超级攻击"<<endl;
					cout<<"你的血-1000"<<endl;
					e[1].mx-=1000;
				}
				else if(cnt==2){
					cout<<"对方使用了awa挂"<<endl;
					cout<<"你的血量除以2"<<endl;
					e[1].mx/=2;
				}
				else{
					cout<<"对方使用了普通攻击"<<endl;
					cout<<"你的血-100"<<endl;
					e[1].mx-=100;
				}
			} 
		}
	} 
	else if(n==2){
		cout<<"老板:小伙子，买点什么啊"<<endl;
		cout<<"1.血量药水(增加20血) 价格100金币"<<endl;
		cout<<"2.攻击力增加药水(增加10血) 价格100金币"<<endl;
		cin>>w;
		if(e[1].q<100){
			cout<<"金币不足!"<<endl;
		}
		if(w==1){
			e[1].q-=100;
			e[1].mx+=20;
			cout<<"使用完成!"<<endl;
		}
		else if(w==2){
			e[1].mg+=10;
			e[1].q-=100;
			cout<<"使用完成!"<<endl;
		}
		else{
			cout<<"错误"<<endl;
		}
	} 
	else if(n==3){
		if(e[1].flag2==0){
			cout<<"秘籍2，魔道，需要700金币"<<endl;
			cout<<"是否购买 1.购买 2.不够卖"<<endl;
			cin>>w;
			if(w==1){
				if(e[1].q<700){
					cout<<"金币不足"<<endl;
				}
				else{
					cout<<"获得成功!"<<endl;
					e[1].flag2=1;
					e[1].q-=700;
				}
			}
			else{
				cout<<"尊重你的选择"<<endl;
			}
		}
		else{
			if(e[1].flag3==0){
				cout<<"秘籍3，回血，需要1200金币"<<endl;
				cout<<"是否购买 1.购买 2.不购买"<<endl;
				cin>>w;
				if(w==1){
					if(e[1].q<1200){
						cout<<"金币不足"<<endl;
					}
					else{
						cout<<"购买成功!"<<endl;
						e[1].flag3=1;
						e[1].q-=1200;
					}
				}
				else{
					cout<<"好的"<<endl;
				}
			}
			else{
				cout<<"你已经获得了所有秘籍了"<<endl;
			}
		} 
	}
	else if(n==4){
		cout<<"名字:"<<e[1].name<<endl;
		cout<<"钱:"<<e[1].q<<"个金币"<<endl;
		cout<<"秘籍:随机攻击 ";
		if(e[1].flag2==1){
			cout<<"魔道 "; 
		}
		if(e[1].flag3==1){
			cout<<"回血";
		}
		cout<<endl;
		cout<<"血量:"<<e[1].mx<<endl;
		cout<<"攻击力"<<e[1].mg<<endl;
	}
	else if(n==5){
		cout<<"是否要退隐江湖 1.要 2.不要"<<endl;
		cin>>w;
		if(w==1){
			cout<<"感谢游玩"<<endl;
			sleep(1);
			return 0; 
		}
		else if(w==2){
			cout<<"好的"<<endl;
		}
		else{
			cout<<"。。。"<<endl;
		}
	}
	else{
		cout<<"错误"<<endl;
	}
}
}
