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
			cout<<"���ڵ���!"<<endl;
			sleep(1);
			system("cls");
			return;
		}
		sleep(0.01);
	}
	cout<<"��û�ڵ�"<<endl;
	sleep(1);
	return;
}
int main(){
	srand(time(0));
	freopen("�浵.in","r",stdin);
	getline(cin,people.name);
	cin>>people.zhb;
	freopen("CON","r",stdin);
	cout<<"��ӭʹ��zhb"<<endl;
	sleep(1);
	system("cls");
	while(true){
	 cout<<"Ҫ��ʲô"<<endl<<"1.�ֶ��ڿ�"<<endl<<"2.�Զ��ڿ�"<<endl<<"3.�˳�"<<endl;
	 cin>>n;
	 if(n==1){
		 r=rand()%9999+1;
		 cout<<"������1~10000��ֵ"<<endl;
		 cout<<"�������ڿ�"<<endl;
		 sleep(1);
		 system("cls");
		 while(a!=r){
			cin>>a;
			if(a>r){
				cout<<"����"<<endl;
			}
			if(a<r){
				cout<<"С��"<<endl;
			}
			cnt++;
		 }
		 if(cnt>=2500){
		 	cout<<"���ڵ��ˣ����Ǹ���û�ˣ�������Ǯ�������˸���"<<endl;
		 	system("pause");
		 	system("cls");
		 }
		 else{
		 	cout<<"���ڵ��˿�,������3zhb"<<endl;
			people.zhb+=3;
		 }
	 }
	 else if(n==2){
	 	r=rand()%9999+1;
		if(people.zhb<2){
			cout<<"ûzhb������û�����!"<<endl;
			system("pause");
			system("cls");
		}
		else{
			cout<<"������Ӽ���ʼ��2500��ʯͷ"<<endl;
			cin>>a;
			if(a>7500||a<0){
				cout<<"���ڸ�ʲô��֪����?"<<endl;
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
		freopen("�浵.in","w",stdout);
		cout<<people.name<<endl<<people.zhb<<endl;
		freopen("CON","w",stdout);
		cout<<"��л����"<<endl;
		sleep(1);
		return 0;
	 }
	}
}
