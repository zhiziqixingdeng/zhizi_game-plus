#include <iostream>
#include <unistd.h> 
#include <cstdlib>
using namespace std;
string name,str;
char x[100][100];
int a,b,n,w;
int main(){
	cout<<"��ӭ���淭��Ƭ"<<endl;
	sleep(1);
	cout<<"�������������:";
	cin>>name;
	cout<<"��ӭ,"<<name<<endl;
	sleep(1);
	while(1==1){
		cout<<"����1����2���������ֲ�ͬ��ģʽ"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��ӭ����1ά����Ƭ"<<endl;
			sleep(1);
			str="000000000000000000000000000000";
			cout<<"�Ƿ�鿴���� 1.�鿴 2,���鿴"<<endl;
			cin>>w;
			if(w==1){
				cout<<"���뿨Ƭ���ڵĵط�,�Ա�������Ƭ��Ϊ��ԭ���෴��"<<endl;
				cout<<"����:1��0,0���1"<<endl;
				cout<<"����114514ֹͣ"<<endl;
				cout<<"���Ϊ0"<<endl;
				system("pause");
				system("cls");
			}
			else{
				cout<<"�õģ����������ѡ��"<<endl;
			}
			while(a!=114514){
				cout<<str<<endl;
				cout<<"����������"<<endl;
				cin>>a;
				if(a==0){
					if(str[a+1]=='0'){
						str[a+1]='1';
					}
					else if(str[a+1]=='1'){
						str[a+1]='0';
					}
					else{
						cout<<"�㿴�������˵����Ĵ�����"<<endl;
					}
				}
				else if(a==30){
					if(str[a-1]=='0'){
						str[a-1]='1';
					}
					else if(str[a-1]=='1'){
						str[a-1]='0';
					}
					else{
						cout<<"�����������˵Ļ�����ô���Ǵ���Ĵ�����"<<endl; 
					}
				}
				else{
					if(str[a+1]=='0'){
						str[a+1]='1';
					}
					if(str[a+1]=='1'){
						str[a+1]='0';
					}
					if(str[a-1]=='0'){
						str[a-1]='1';
					}
					if(str[a-1]=='1'){
						str[a-1]='0';
					}
				}
			}
			cout<<"�õ�"<<endl;
			cout<<"��Ʒ:"<<str<<",��Ͽ츴��"<<endl;
			system("pause");
		}
		else if(n==2){
			cout<<"��ӭ����2ά����Ƭ"<<endl;
			sleep(1);
			cout<<"�Ƿ�鿴���� 1.�鿴 2�����鿴"<<endl;
			cin>>w;
			if(w==1){
				cout<<"����һ������"<<endl;
				cout<<"�������ҵ�����ȡ��"<<endl;
				cout<<"1���0��0���1"<<endl;
				cout<<"����114514 1919810����"<<endl;
			}
			else{
				cout<<"�õ�"<<endl;
				sleep(1);
			}
			while(a!=114514||b!=1919810){
				for(int i=1;i<=99;i++){
					for(int j=1;j<=99;j++){
						cout<<x[i][j];
					}
					cout<<endl;
				}
				cout<<"����������"<<endl;
				cin>>a>>b;
				if(a==1||b==1||a==99||b==99){
					cout<<"�Բ���Ŀǰ���ﲻ�ܷ�Ŷ"<<endl;
					cout<<"��С�ʵ� 0_0��"<<endl;
				}
				else{
					if(x[a][b+1]=='0'){
						x[a][b+1]='1';
					}
					else{
						x[a][b+1]='0';
					}
					if(x[a][b-1]=='0'){
						x[a][b-1]='1';
					}
					else{
						x[a][b-1]='0';
					}
					if(x[a+1][b]=='0'){
						x[a+1][b]='1';
					}
					else{
						x[a+1][b]='0';
					}
					if(x[a-1][b]=='0'){
						x[a-1][b]='1';
					}
					else{
						x[a-1][b]='0';
					}
					system("cls");
				}
			}
			cout<<"��Ʒ:"<<endl;
			for(int i=1;i<=99;i++){
				for(int j=1;j<=99;j++){
					cout<<x[i][j];
				}
				cout<<endl;
			}
			system("pause");
		}
		else{
			cout<<"����"<<endl;
		}
	}
} 
