#ifndef CIRCLE_H
#define  CIRCLE_H
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include <string>
using namespace std;
struct bag{
	string name;
	int money;
}b[999999];//zhb购买的东西
long long int zhb;
int cnt;//购买了多少东西
string str;
void have(){
	freopen("zhb.in","r",stdin);
	cin>>zhb;
	cin>>cnt;
	if(cnt==0){
		return;
	}
	for(int i=1;i<=cnt;i++){
		getline(cin,b[i].name);
		cin>>b[i].money;
	}
	freopen("CON","r",stdin);
	return;
}
void index(){
	cout<<"    zhb      "<<endl;
	cout<<"版权所有:zhizi"<<endl;
	cout<<"**************"<<endl;
	cout<<"1.制作东西"<<endl;
	cout<<"2.挖矿"<<endl;
	cout<<"3.游戏*"<<endl;
	cout<<"4.转账"<<endl;
	cout<<"5.信息"<<endl;
	cout<<"6.结束"<<endl;
	cout<<"**************"<<endl;
	cout<<"* 可以获得zhb,但也可能失去"<<endl;
	return;
}
void make(){
	system("cls");
	cout<<"你有:"<<zhb<<"个zhb"<<endl;
	srand(time(NULL));
	int r=rand()%25+1;
	cout<<"本次制作需要"<<r<<"个zhb"<<endl;
	if(zhb<r){
		cout<<"由于你的zhb不足，无法制作"<<endl;
		sleep(1);
		system("cls");
		return;
	}
	cout<<"是否制作 1.制作 2.不制作"<<endl;
	int w;
	cin>>w;
	if(w==1){
		cnt++;
		zhb-=r;
		cout<<"请输入物品名称:";
		getline(cin,b[cnt].name);
		cout<<"ok!"<<endl;
		sleep(1);
		system("cls");
		b[cnt].money=r;
		return;
	}
	else{
		cout<<"好的"<<endl;
		sleep(1);
		system("cls");
		return;
	}
}
void mining(){
	system("cls");
	int a=0;
	srand(time(NULL));
	int r=rand()%100+1;//生成
	sleep(1);
	cout<<"随机生成了一个数，1~100"<<endl;
	sleep(1);
	cout<<"输入数字来猜"<<endl;
	int flag=30;//猜的次数越多，获得zhb越少
	sleep(1);
	system("cls");
	while(a!=r){
		cout<<"数字:";
		cin>>a;
		if(a<r){
			cout<<"小了"<<endl;
			flag--;
		}
		if(a>r){
			cout<<"大了"<<endl;
			flag--;
		}
	}
	cout<<"恭喜你，猜对了!"<<endl;
	if(flag<=0){
		cout<<"你没能获得zhb"<<endl;
	}
	else{
		cout<<"你获得了"<<flag<<"个zhb"<<endl;
		zhb+=flag;
	}
	sleep(1);
	system("cls");
	return;
}
void play(){
	system("cls");
	cout<<"石头剪刀布"<<endl;
	cout<<"你出什么"<<endl<<"1.石头"<<endl<<"2.剪刀"<<endl<<"3.布"<<endl;
	int w;
	cin>>w;
	w=rand()%3+1;
	if(w==1){
		cout<<"你胜利了!"<<endl;
		zhb+=5;
	}
	else if(w==2){
		cout<<"你输了"<<endl;
		zhb-=1;
	}
	else{
		cout<<"平局"<<endl;
	}
	return;
}
void to(){
	cout<<"请输入密码:";
	cin>>str;
	if(str=="密码"){//密码自己设置
		cout<<"你获得了多少:";
		int w;
		cin>>w;
		zhb+=w;
		sleep(1);
		system("cls");
		return;
	}
	else{
		cout<<"密码错误！"<<endl;
		sleep(1);
		system("cls");
		return;
	}
}
void information(){
	cout<<"你有"<<zhb<<"个zhb"<<endl;
	cout<<"你的东西:"<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<b[cnt].name<<endl<<"价值:"<<b[cnt].money<<endl;
	}
	sleep(5);
	system("cls");
	return;
}
void end(){
	cout<<"感谢使用"<<endl;
	sleep(1);
	freopen("zhb.in","w",stdin);
	cout<<zhb<<endl<<cnt;
	for(int i=1;i<=cnt;i++){
		cout<<b[cnt].name<<endl<<b[cnt].money<<endl;
	}
	return;
}
#endif
