#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
char x[30][30],q;
int a,b,c,d,t,f,n,w,flag;
bool hi;
string name;
bool td(){//������֪��дע����һ����ϰ�� 
	for(int i=1;i<=t;i++){
		for(int j=1;j<=f;j++){
			if(x[i][j]=='z'){
				return false;
			}
		}
	}
	return true;//ʤ�� 
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
	cout<<"�������������:";
	cin>>name;
	cout<<"��ӭ�������Թ�,"<<name<<endl;
	sleep(1);
	system("cls");
	while(true){
		cout<<"��������Ҫ��ʲô"<<endl<<"1.�����Թ�"<<endl<<"2.�����Թ�"<<endl<<"3.�˳�"<<endl;
		cin>>n;
		if(n==1){
			if(flag==0){
				cout<<"��⵽�㻹û�д�����ͼ"<<endl;
				sleep(1);
				cout<<"���ȴ�����ͼ"<<endl;
			}
			else{
				cout<<"�õ�,wasd�ٿ�"<<endl;
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
					cout<<"���������:";
					cin>>q;//������� 
					if(q=='w'){
						if(a-1==0||x[a-1][b]=='1'){
							cout<<"����"<<endl;
							sleep(0.1);
							system("cls");
						}
						else if(x[a-1][b]=='x'){
							cout<<"��Ū���˵���!"<<endl;
							sleep(1);
							cout<<"��ʧ����"<<endl;
							sleep(1);
							system("cls");
							break;
						}
						else{
							cout<<"�õģ��ƶ����!"<<endl;
							sleep(0.1);
							x[a][b]='0';
							a=a-1;
							x[a][b]='w';
						}
					}
					else if(q=='s'){
						if(a+1==t+1||x[a+1][b]=='1'){
							cout<<"����"<<endl;
							sleep(0.1);
							system("cls");
						}
						else if(x[a+1][b]=='x'){
							cout<<"��Ū���˵���!"<<endl;
							sleep(1);
							cout<<"��ʧ����"<<endl;
							sleep(1);
							system("cls");
							break;
						}
						else{
							cout<<"�õģ��ƶ����"<<endl;
							sleep(0.1);
							x[a][b]='0';
							a=a+1;
							x[a][b]='w';
						}
					}
					else if(q=='a'){
						if(b-1==0||x[a][b-1]=='1'){
							cout<<"����"<<endl;
							sleep(0.1);
							system("cls");
						}
						else if(x[a][b-1]=='x'){
							cout<<"��Ū���˵���!"<<endl;
							sleep(1);
							cout<<"��ʧ����"<<endl;
							sleep(1);
							system("cls");
							break;
						}
						else{
							cout<<"�õģ��ƶ����"<<endl;
							sleep(0.1);
							x[a][b]='0';
							b=b-1;
							x[a][b]='w';
						}
					}
					else if(q=='d'){
						if(b+1==0||x[a][b+1]=='1'){
							cout<<"����"<<endl;
							sleep(0.1);
							system("cls");
						}
						else if(x[a][b+1]=='x'){
							cout<<"��Ū���˵���!"<<endl;
							sleep(1);
							cout<<"��ʧ����"<<endl;
							sleep(1);
							system("cls");
							break;
						}
						else{
							cout<<"�õģ��ƶ����"<<endl;
							sleep(0.1);
							x[a][b]='0';
							b=b+1;
							x[a][b]='w';
						}
					}
					else if(f=='x'){
						cout<<"��Ϸ����"<<endl;
						sleep(1);
						x[a][b]='0';
						break;
					}
					else{
						cout<<"����"<<endl;
						sleep(1);
						system("cls");
					}
					hi=false;
					hi=td();
					if(hi==true){
						cout<<"ʤ��!"<<endl;
						sleep(1);
						system("cls");
						x[a][b]='z';
						break;
					}
				}
			}
		}
		else if(n==2){
			cout<<"��������Ҫ���˼���(��:3 3,���10)��";
			cin>>t>>f;
			if(t>10||f>10||t<=0||f<=0){
				cout<<"������"<<endl;
				cout<<"��Ū��"<<endl;
			} 
			else{
				cout<<"��ע�⣬����һ����ͼ�Ḳ����һ����ͼ���Ƿ񸲸� 1.�� 2.����"<<endl;
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
					cout<<"��������ĵ�����:";
					cin>>a>>b;
					if(a>t||a>f||b>t||b>f||a<=0||b<=0){
						cout<<"����"<<endl;
					}
					else{
						system("cls");
						cout<<"����Ҫ����ʲô"<<endl<<"1.С·"<<endl<<"2.�����ϰ���"<<endl<<"3.���ӵ���"<<endl<<"4.�˳�"<<endl;
						cin>>c;
						if(c==1){
							cout<<"���ӳɹ�!"<<endl;
							x[a][b]='0';
						} 
						else if(c==2){
							cout<<"���ӳɹ�!"<<endl;
							x[a][b]='1';
						}
						else if(c==3){
							cout<<"���ӳɹ�!"<<endl;
							x[a][b]='x';
						}
						else if(c==4){
							hi=td2();
							if(hi==false){
							cout<<"���еط�û��Ū"<<endl;
							sleep(1);
							system("cls");
							}
							else{
								cout<<"�õ�"<<endl;
								sleep(1);
								break; 
							}
						}
						else{
							cout<<"����"<<endl;
						}
					}
					}
				}
				else{
					cout<<"�õ�"<<endl;
				}
			}
		}
		else if(n==3){
			cout<<"��л����"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"����"<<endl;
		}
	} 
} 
