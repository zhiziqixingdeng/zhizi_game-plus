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
	cout<<"欢迎来到画东西2.0"<<endl;
	sleep(1);
	while(1==1){
		cout<<"请输入你要干什么"<<endl<<"1.画东西"<<endl<<"2.查找作品"<<endl<<"3.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入需要几x几的(如: 8 8,最高9):";
			cin>>s[cnt].a>>s[cnt].b;
			cout<<"结束输入114 514可以结束哦"<<endl;
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
				cout<<"请输入更改的坐标(如 4 4）:";
				cin>>t>>f;
				if(t==114&&f==514){
					cout<<"结束了"<<endl;
					for(int i=1;i<=s[cnt].a;i++){
						for(int j=1;j<=s[cnt].b;j++){
							s[cnt].x[i][j]=y[i][j];
						}
					}
					cout<<"请输入这个作品的名字:";
					cin>>s[cnt].name;
					cnt++;
					cout<<"好的"<<endl;
					sleep(1);
					system("cls");
					break;
				}
				else{
					if(t>s[cnt].a||t<=0||f>s[cnt].b||f<=0){
						cout<<"错误"<<endl;
						sleep(1);
						system("cls");
					}
					else{
						cout<<"请输入需要更改的字符:";
						cin>>d;
						y[t][f]=d;
						cout<<"完成!"<<endl;
						sleep(0.1);
						system("cls");
					}
				}
			} 
		}
		else if(n==2){
			cout<<"请输入这幅作品的名字:";
			cin>>str;
			t=0;
			for(int i=1;i<=cnt;i++){
				if(str==s[i].name){
					cout<<"找到作品:";
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
			cout<<"再见"<<endl;
			sleep(1);
			return 0;
		}
	}
} 
