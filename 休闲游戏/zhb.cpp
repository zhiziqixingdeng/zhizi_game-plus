#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <string>
using namespace std;
int flag,a,cnt;
struct start{
	string name;
	long long int zhb;
};
start people;
int n,r;
void wk(int x,int y){
	int cnt;
	for(int i=x;cnt<=2500;i++){
		cnt++;
		if(i==y){
			people.zhb+=3;
			cout<<"你挖到了!"<<endl;
			sleep(1);
			system("cls");
			return;
		}
		sleep(0.01);
	}
	cout<<"你没挖到"<<endl;
	sleep(1);
	return;
}
int main(){
	srand(time(0));
	freopen("存档.in","r",stdin);
	getline(cin,people.name);
	cin>>people.zhb;
	freopen("CON","r",stdin);
	cout<<"欢迎使用zhb"<<endl;
	sleep(1);
	system("cls");
	while(true){
	 cout<<"要干什么"<<endl<<"1.手动挖矿"<<endl<<"2.自动挖矿"<<endl<<"3.退出"<<endl;
	 cin>>n;
	 if(n==1){
		 r=rand()%9999+1;
		 cout<<"生成了1~10000的值"<<endl;
		 cout<<"输入数挖矿"<<endl;
		 sleep(1);
		 system("cls");
		 while(a!=r){
			cin>>a;
			if(a>r){
				cout<<"大了"<<endl;
			}
			if(a<r){
				cout<<"小了"<<endl;
			}
			cnt++;
		 }
		 if(cnt>=2500){
		 	cout<<"你挖到了，但是稿子没了，于是用钱重新买了稿子"<<endl;
		 	system("pause");
		 	system("cls");
		 }
		 else{
		 	cout<<"你挖到了矿,你获得了3zhb"<<endl;
			people.zhb+=3;
		 }
	 }
	 else if(n==2){
	 	r=rand()%9999+1;
		if(people.zhb<2){
			cout<<"没zhb别过来用机器人!"<<endl;
			system("pause");
			system("cls");
		}
		else{
			cout<<"请输入从几开始挖2500个石头"<<endl;
			cin>>a;
			if(a>7500||a<0){
				cout<<"你在干什么你知道吗?"<<endl;
				system("pause");
				system("cls");
			}
			else{
				people.zhb-=2;
				wk(a,r);
			}
		}
	 }
	 else{
		freopen("存档.in","w",stdout);
		cout<<people.name<<endl<<people.zhb<<endl;
		freopen("CON","w",stdout);
		cout<<"感谢游玩"<<endl;
		sleep(1);
		return 0;
	 }
	}
}
