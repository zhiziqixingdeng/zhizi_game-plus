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
}b[999999];//zhb����Ķ���
long long int zhb;
int cnt;//�����˶��ٶ���
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
	cout<<"��Ȩ����:zhizi"<<endl;
	cout<<"**************"<<endl;
	cout<<"1.��������"<<endl;
	cout<<"2.�ڿ�"<<endl;
	cout<<"3.��Ϸ*"<<endl;
	cout<<"4.ת��"<<endl;
	cout<<"5.��Ϣ"<<endl;
	cout<<"6.����"<<endl;
	cout<<"**************"<<endl;
	cout<<"* ���Ի��zhb,��Ҳ����ʧȥ"<<endl;
	return;
}
void make(){
	system("cls");
	cout<<"����:"<<zhb<<"��zhb"<<endl;
	srand(time(NULL));
	int r=rand()%25+1;
	cout<<"����������Ҫ"<<r<<"��zhb"<<endl;
	if(zhb<r){
		cout<<"�������zhb���㣬�޷�����"<<endl;
		sleep(1);
		system("cls");
		return;
	}
	cout<<"�Ƿ����� 1.���� 2.������"<<endl;
	int w;
	cin>>w;
	if(w==1){
		cnt++;
		zhb-=r;
		cout<<"��������Ʒ����:";
		getline(cin,b[cnt].name);
		cout<<"ok!"<<endl;
		sleep(1);
		system("cls");
		b[cnt].money=r;
		return;
	}
	else{
		cout<<"�õ�"<<endl;
		sleep(1);
		system("cls");
		return;
	}
}
void mining(){
	system("cls");
	int a=0;
	srand(time(NULL));
	int r=rand()%100+1;//����
	sleep(1);
	cout<<"���������һ������1~100"<<endl;
	sleep(1);
	cout<<"������������"<<endl;
	int flag=30;//�µĴ���Խ�࣬���zhbԽ��
	sleep(1);
	system("cls");
	while(a!=r){
		cout<<"����:";
		cin>>a;
		if(a<r){
			cout<<"С��"<<endl;
			flag--;
		}
		if(a>r){
			cout<<"����"<<endl;
			flag--;
		}
	}
	cout<<"��ϲ�㣬�¶���!"<<endl;
	if(flag<=0){
		cout<<"��û�ܻ��zhb"<<endl;
	}
	else{
		cout<<"������"<<flag<<"��zhb"<<endl;
		zhb+=flag;
	}
	sleep(1);
	system("cls");
	return;
}
void play(){
	system("cls");
	cout<<"ʯͷ������"<<endl;
	cout<<"���ʲô"<<endl<<"1.ʯͷ"<<endl<<"2.����"<<endl<<"3.��"<<endl;
	int w;
	cin>>w;
	w=rand()%3+1;
	if(w==1){
		cout<<"��ʤ����!"<<endl;
		zhb+=5;
	}
	else if(w==2){
		cout<<"������"<<endl;
		zhb-=1;
	}
	else{
		cout<<"ƽ��"<<endl;
	}
	return;
}
void to(){
	cout<<"����������:";
	cin>>str;
	if(str=="����"){//�����Լ�����
		cout<<"�����˶���:";
		int w;
		cin>>w;
		zhb+=w;
		sleep(1);
		system("cls");
		return;
	}
	else{
		cout<<"�������"<<endl;
		sleep(1);
		system("cls");
		return;
	}
}
void information(){
	cout<<"����"<<zhb<<"��zhb"<<endl;
	cout<<"��Ķ���:"<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<b[cnt].name<<endl<<"��ֵ:"<<b[cnt].money<<endl;
	}
	sleep(5);
	system("cls");
	return;
}
void end(){
	cout<<"��лʹ��"<<endl;
	sleep(1);
	freopen("zhb.in","w",stdin);
	cout<<zhb<<endl<<cnt;
	for(int i=1;i<=cnt;i++){
		cout<<b[cnt].name<<endl<<b[cnt].money<<endl;
	}
	return;
}
#endif
