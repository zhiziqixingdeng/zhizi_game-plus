#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
struct yx{
	string name;
	int dm;//代码 
	int th;//图画 
	int yy;//音乐 
	int bug;//bug数量 
}x[1000];//游戏属性
struct ren{
	string ming;
	int dmm=1;
	int thh=1;
	int yyy=1;
	int q=100;//钱，awa 
	int flag1;//员工
	int flag2;
	int flag3; 
}r[2];//开发者的属性
int n,w,cnt=1,ans,a,b; 
int main(){
	cout<<"欢迎来到制作游戏模拟器"<<endl;
	sleep(1);
	cout<<"请输入你的名字:";
	cin>>r[1].ming;
	cout<<"欢迎"<<r[1].ming<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"请输入你要干什么 "<<endl<<"1.开始开发游戏 "<<endl<<"2.提升自己 "<<endl<<"3.个人信息 "<<endl<<"4.找顾问/员工"<<endl<<"5.随机小事件"<<endl<<"6.退出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"给你的游戏取个名字吧!"<<endl;
			cin>>x[cnt].name;
			cout<<"好的，我们开始开发啦"<<endl;
			sleep(1);
			system("cls");
			while(1==1){
				cout<<"请输入你要干什么"<<endl<<"1.开发"<<endl<<"2.查看游戏的属性"<<endl<<"3.改bug"<<"4.上市赚钱"<<endl;
				cin>>w;
				if(w==1){
					if(r[1].flag1==1){
						cout<<"你的代码自动+6"<<endl;
						sleep(1);
						cout<<"员工:我先帮你做一点"<<endl; 
					}
					if(r[1].flag2==1){
						cout<<"你的图画+6"<<endl;
						sleep(1);
						cout<<"画画:我先帮你做做图画"<<endl;
					}
					sleep(1);
					system("cls");
					cout<<"请问你要开发什么"<<endl<<"1.代码"<<endl<<"2.音乐"<<endl<<"3.图画"<<endl;
					cin>>a;
					if(a==1){
						if(r[1].flag3==1){
							for(int i=1;i<=5;i++){
								sleep(1);
								cout<<"*";
							}
						}
						else{
							for(int i=1;i<=10;i++){
								sleep(1);
								cout<<"*";
							}
						}
						sleep(1);
						system("cls");
						cout<<"开发完成，代码部分+"<<r[1].dmm<<endl;
						x[cnt].dm+=r[1].dmm;
						b=rand()%2;
						if(b==0){
							cout<<"这次开发bug+1"<<endl;
							x[cnt].bug++;
						}
						else{
							cout<<"这次开发没有bug"<<endl; 
						}
					}
					else if(a==2){
						if(r[1].flag3==1){
							for(int i=1;i<=5;i++){
								cout<<"/";
								sleep(1);
							}
						}
						else{
							for(int i=1;i<=10;i++){
								cout<<"/";
								sleep(1);
							}
						}
						system("cls");
						cout<<"开发完成!音乐部分+"<<r[1].yyy<<endl;
						x[cnt].yy+=r[1].yyy;
					}
					else if(a==3){
						if(r[1].flag3==1){
							for(int i=1;i<=5;i++){
								cout<<"(";
								sleep(1);
							}
						}
						else{
							for(int i=1;i<=10;i++){
								cout<<"(";
								sleep(1); 
							}
						}
						system("cls");
						cout<<"开发完成!图画部分+"<<r[1].thh<<endl;
						x[cnt].th+=r[1].thh;
					}
					else{
						cout<<"错误"<<endl;
					}
					system("pause");
				}
				else if(w==2){
					cout<<"游戏名字:"<<x[cnt].name<<endl<<"游戏代码:"<<x[cnt].dm<<endl<<"游戏图画:"<<x[cnt].th<<endl<<"游戏音乐:"<<x[cnt].yy<<endl; 
				}
				else if(w==3){
					a=rand()%100+100; 
					cout<<"这个bug解决成本"<<a-r[1].dmm<<"钱"<<endl;
					cout<<"是否解决 1.解决 2.不解决"<<endl;
					cin>>w;
					if(w==1){
						if(r[1].q<=a){
							cout<<"没钱!"<<endl;
						}
						else{
							cout<<"解决完成!"<<endl;
							sleep(1);
							x[cnt].bug-=1;
						}
					}
					else{
						cout<<"好的"<<endl;
					}
				}
				else if(w==4){
					if(x[cnt].dm<=20||x[cnt].th<=20||x[cnt].yy<=20){
						cout<<"谁家游戏这么差的，继续开发!"<<endl;
						system("pause");
						system("cls");
					}
					else if(x[cnt].bug>=15){
						cout<<"谁家游戏bug这么多的,继续改bug!"<<endl;
						system("pause");
						system("cls");
					}
					else{
						if(x[cnt].dm*2+x[cnt].th+x[cnt].yy/2-x[cnt].bug<=0){
							cout<<"你这款游戏就赚了32元钱，剩下的人都不玩!"<<endl;
							sleep(1);
							break;
						}
						else{
							cout<<"上市赚的钱:"<<x[cnt].dm*2+x[cnt].th+x[cnt].yy/2-x[cnt].bug<<endl;
							sleep(1);
							r[1].q+=x[cnt].dm*2+x[cnt].th+x[cnt].yy/2-x[cnt].bug;
							system("pause");
							system("cls");
							break;
						}
					}
				}
				else{
					cout<<"错误"<<endl;
				}
			}
		}
		else if(n==2){
			cout<<"请输入你要提升哪方面:"<<endl<<"1.代码(最高20级)"<<endl<<"2.图画"<<endl<<"3.音乐"<<endl;
			cin>>w;
			if(w==1){
				if(r[1].dmm==20){
					cout<<"已经到了20级了"<<endl;
				}
				else{
					if(r[1].q<100){
						cout<<"升级失败，没钱"<<endl;
					}
					else{
						cout<<"升级成功!"<<endl;
						r[1].dmm+=1;
						r[1].q-=100;
					}
				}
			}
			else if(w==2){
				if(r[1].q<100){
					cout<<"赚点钱再来，好吗?"<<endl;
				}
				else{
					cout<<"升级成功!"<<endl;
					r[1].thh+=1;
					r[1].q-=100;
				}
			}
			else if(w==3){
				if(r[1].q<=100){
					cout<<"赚钱!"<<endl;
				}
				else{
					cout<<"升级成功!"<<endl;
					r[1].yyy+=1;
					r[1].q-=100;
				}
			}
			else{
				cout<<"错误"<<endl;
			}
			system("pause");
		}
		else if(n==3){
			cout<<"名字:"<<r[1].ming<<endl<<"代码能力:"<<r[1].dmm<<endl<<"音乐能力:"<<r[1].yyy<<endl<<"图形能力:"<<r[1].thh<<endl;
			system("pause");
			system("cls");
		}
		else if(n==4){
			system("cls");
			cout<<"三个员工"<<endl<<"1.程序员(每次增加6代码)"<<endl<<"2.画家(每次增加6图画)"<<endl<<"3.督促家(每次开发时间减半)"<<endl;
			cin>>w;
			if(w==1){
				if(r[1].flag1==1){
					cout<<"你已经有了这个员工了"<<endl;
				}
				else{
					if(r[1].q<500){
						cout<<"没钱"<<endl;
					}
					else{
						if(r[1].dmm<3){
							cout<<"程序员:我不想和不懂代码的人说话"<<endl;
						}
						else{
							cout<<"招聘成功!"<<endl;
							r[1].flag1=1;
							r[1].q-=500;
						}
					}
				}
			}
			else if(w==2){
				if(r[1].flag2==1){
					cout<<"你已经有了这个员工了!"<<endl;
				}
				else{
					if(r[1].q<400){
						cout<<"没钱"<<endl;
					}
					else{
						if(r[1].thh<4){
							cout<<"画家:你不懂艺术，我跟你不了"<<endl;
						}
						else{
							cout<<"招聘成功!"<<endl;
							r[1].flag2=1;
							r[1].q-=400;
						}
					}
				}
			}
			else if(w==3){
				if(r[1].flag3==1){
					cout<<"你已经有了这个员工了" <<endl;
				}
				else {
					if(cnt<2){
						cout<<"没经验，我不要你-督促家"<<endl;
					}
					else{
						if(r[1].q<500){
							cout<<"没钱"<<endl;
						}
						else{
							cout<<"招聘成功！"<<endl;
						}
					}
				}
			}
			else{
				cout<<"错误"<<endl;
			} 
		}
		else if(n==5){
			system("start rand.exe");
		}
		else if(n==6){
			cout<<"感谢游玩"<<endl;
			sleep(1);
			return 0;	
		}
		else{
			cout<<"错误"<<endl; 
		}
	}
}
