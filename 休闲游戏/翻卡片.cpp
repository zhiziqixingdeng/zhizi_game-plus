#include <iostream>
#include <unistd.h> 
#include <cstdlib>
using namespace std;
string name,str;
char x[100][100];
int a,b,n,w;
int main(){
	cout<<"欢迎来玩翻卡片"<<endl;
	sleep(1);
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"欢迎,"<<name<<endl;
	sleep(1);
	while(1==1){
		cout<<"输入1或者2可以玩两种不同的模式"<<endl;
		cin>>n;
		if(n==1){
			cout<<"欢迎来到1维翻卡片"<<endl;
			sleep(1);
			str="000000000000000000000000000000";
			cout<<"是否查看规则 1.查看 2,不查看"<<endl;
			cin>>w;
			if(w==1){
				cout<<"输入卡片所在的地方,旁边两个卡片变为与原来相反的"<<endl;
				cout<<"就是:1变0,0变成1"<<endl;
				cout<<"输入114514停止"<<endl;
				cout<<"最低为0"<<endl;
				system("pause");
				system("cls");
			}
			else{
				cout<<"好的，我尊重你的选择"<<endl;
			}
			while(a!=114514){
				cout<<str<<endl;
				cout<<"请输入坐标"<<endl;
				cin>>a;
				if(a==0){
					if(str[a+1]=='0'){
						str[a+1]='1';
					}
					else if(str[a+1]=='1'){
						str[a+1]='0';
					}
					else{
						cout<<"你看到这个，说明你改代码了"<<endl;
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
						cout<<"如果这个出现了的话，那么就是代表改代码了"<<endl; 
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
			cout<<"好的"<<endl;
			cout<<"成品:"<<str<<",请赶快复制"<<endl;
			system("pause");
		}
		else if(n==2){
			cout<<"欢迎来到2维翻卡片"<<endl;
			sleep(1);
			cout<<"是否查看规则 1.查看 2，不查看"<<endl;
			cin>>w;
			if(w==1){
				cout<<"输入一个坐标"<<endl;
				cout<<"上下左右的数字取反"<<endl;
				cout<<"1变成0，0变成1"<<endl;
				cout<<"输入114514 1919810结束"<<endl;
			}
			else{
				cout<<"好的"<<endl;
				sleep(1);
			}
			while(a!=114514||b!=1919810){
				for(int i=1;i<=99;i++){
					for(int j=1;j<=99;j++){
						cout<<x[i][j];
					}
					cout<<endl;
				}
				cout<<"请输入坐标"<<endl;
				cin>>a>>b;
				if(a==1||b==1||a==99||b==99){
					cout<<"对不起，目前这里不能翻哦"<<endl;
					cout<<"（小彩蛋 0_0）"<<endl;
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
			cout<<"成品:"<<endl;
			for(int i=1;i<=99;i++){
				for(int j=1;j<=99;j++){
					cout<<x[i][j];
				}
				cout<<endl;
			}
			system("pause");
		}
		else{
			cout<<"错误"<<endl;
		}
	}
} 
