#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int n,w,t,f,cnt=1;
struct zuo{
	string name;
	int a;
	int b;
	char x[10][10];
}s[100];
char y[10][10],d;
string str;
int main(){
	cout<<"��ӭ����������2.0"<<endl;
	sleep(1);
	while(1==1){
		cout<<"��������Ҫ��ʲô"<<endl<<"1.������"<<endl<<"2.������Ʒ"<<endl<<"3.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��������Ҫ��x����(��: 8 8,���9):";
			cin>>s[cnt].a>>s[cnt].b;
			cout<<"��������114 514���Խ���Ŷ"<<endl;
			sleep(1);
			system("cls");
			while(t!=114||f!=514){
				for(int i=1;i<=s[cnt].a;i++){
					cout<<i<<" "; 
				}
				cout<<endl;
				for(int i=1;i<=s[cnt].a;i++){
					cout<<i<<" ";
					for(int j=1;j<=s[cnt].b;j++){
						cout<<y[i][j]<<" ";
					}
					cout<<endl;
				}
				cout<<"��������ĵ�����(�� 4 4��:";
				cin>>t>>f;
				if(t==114&&f==514){
					cout<<"������"<<endl;
					for(int i=1;i<=s[cnt].a;i++){
						for(int j=1;j<=s[cnt].b;j++){
							s[cnt].x[i][j]=y[i][j];
						}
					}
					cout<<"�����������Ʒ������:";
					cin>>s[cnt].name;
					cnt++;
					cout<<"�õ�"<<endl;
					sleep(1);
					system("cls");
					break;
				}
				else{
					if(t>s[cnt].a||t<=0||f>s[cnt].b||f<=0){
						cout<<"����"<<endl;
						sleep(1);
						system("cls");
					}
					else{
						cout<<"��������Ҫ���ĵ��ַ�:";
						cin>>d;
						y[t][f]=d;
						cout<<"���!"<<endl;
						sleep(0.1);
						system("cls");
					}
				}
			} 
		}
		else if(n==2){
			cout<<"�����������Ʒ������:";
			cin>>str;
			t=0;
			for(int i=1;i<=cnt;i++){
				if(str==s[i].name){
					cout<<"�ҵ���Ʒ:";
					for(int i=1;i<=s[i].a;i++){
						for(int j=1;j<=s[i].b;j++){
							cout<<s[cnt].x[i][j]<<" ";
						}
					}
				}
			}
			system("pause");
		}
		else{
			cout<<"�ټ�"<<endl;
			sleep(1);
			return 0;
		}
	}
} 
