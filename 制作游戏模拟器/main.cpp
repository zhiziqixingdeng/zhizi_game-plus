#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
struct yx{
	string name;
	int dm;//���� 
	int th;//ͼ�� 
	int yy;//���� 
	int bug;//bug���� 
}x[1000];//��Ϸ����
struct ren{
	string ming;
	int dmm=1;
	int thh=1;
	int yyy=1;
	int q=100;//Ǯ��awa 
	int flag1;//Ա��
	int flag2;
	int flag3; 
}r[2];//�����ߵ�����
int n,w,cnt=1,ans,a,b; 
int main(){
	cout<<"��ӭ����������Ϸģ����"<<endl;
	sleep(1);
	cout<<"�������������:";
	cin>>r[1].ming;
	cout<<"��ӭ"<<r[1].ming<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"��������Ҫ��ʲô "<<endl<<"1.��ʼ������Ϸ "<<endl<<"2.�����Լ� "<<endl<<"3.������Ϣ "<<endl<<"4.�ҹ���/Ա��"<<endl<<"5.���С�¼�"<<endl<<"6.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"�������Ϸȡ�����ְ�!"<<endl;
			cin>>x[cnt].name;
			cout<<"�õģ����ǿ�ʼ������"<<endl;
			sleep(1);
			system("cls");
			while(1==1){
				cout<<"��������Ҫ��ʲô"<<endl<<"1.����"<<endl<<"2.�鿴��Ϸ������"<<endl<<"3.��bug"<<"4.����׬Ǯ"<<endl;
				cin>>w;
				if(w==1){
					if(r[1].flag1==1){
						cout<<"��Ĵ����Զ�+6"<<endl;
						sleep(1);
						cout<<"Ա��:���Ȱ�����һ��"<<endl; 
					}
					if(r[1].flag2==1){
						cout<<"���ͼ��+6"<<endl;
						sleep(1);
						cout<<"����:���Ȱ�������ͼ��"<<endl;
					}
					sleep(1);
					system("cls");
					cout<<"������Ҫ����ʲô"<<endl<<"1.����"<<endl<<"2.����"<<endl<<"3.ͼ��"<<endl;
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
						cout<<"������ɣ����벿��+"<<r[1].dmm<<endl;
						x[cnt].dm+=r[1].dmm;
						b=rand()%2;
						if(b==0){
							cout<<"��ο���bug+1"<<endl;
							x[cnt].bug++;
						}
						else{
							cout<<"��ο���û��bug"<<endl; 
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
						cout<<"�������!���ֲ���+"<<r[1].yyy<<endl;
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
						cout<<"�������!ͼ������+"<<r[1].thh<<endl;
						x[cnt].th+=r[1].thh;
					}
					else{
						cout<<"����"<<endl;
					}
					system("pause");
				}
				else if(w==2){
					cout<<"��Ϸ����:"<<x[cnt].name<<endl<<"��Ϸ����:"<<x[cnt].dm<<endl<<"��Ϸͼ��:"<<x[cnt].th<<endl<<"��Ϸ����:"<<x[cnt].yy<<endl; 
				}
				else if(w==3){
					a=rand()%100+100; 
					cout<<"���bug����ɱ�"<<a-r[1].dmm<<"Ǯ"<<endl;
					cout<<"�Ƿ��� 1.��� 2.�����"<<endl;
					cin>>w;
					if(w==1){
						if(r[1].q<=a){
							cout<<"ûǮ!"<<endl;
						}
						else{
							cout<<"������!"<<endl;
							sleep(1);
							x[cnt].bug-=1;
						}
					}
					else{
						cout<<"�õ�"<<endl;
					}
				}
				else if(w==4){
					if(x[cnt].dm<=20||x[cnt].th<=20||x[cnt].yy<=20){
						cout<<"˭����Ϸ��ô��ģ���������!"<<endl;
						system("pause");
						system("cls");
					}
					else if(x[cnt].bug>=15){
						cout<<"˭����Ϸbug��ô���,������bug!"<<endl;
						system("pause");
						system("cls");
					}
					else{
						if(x[cnt].dm*2+x[cnt].th+x[cnt].yy/2-x[cnt].bug<=0){
							cout<<"�������Ϸ��׬��32ԪǮ��ʣ�µ��˶�����!"<<endl;
							sleep(1);
							break;
						}
						else{
							cout<<"����׬��Ǯ:"<<x[cnt].dm*2+x[cnt].th+x[cnt].yy/2-x[cnt].bug<<endl;
							sleep(1);
							r[1].q+=x[cnt].dm*2+x[cnt].th+x[cnt].yy/2-x[cnt].bug;
							system("pause");
							system("cls");
							break;
						}
					}
				}
				else{
					cout<<"����"<<endl;
				}
			}
		}
		else if(n==2){
			cout<<"��������Ҫ�����ķ���:"<<endl<<"1.����(���20��)"<<endl<<"2.ͼ��"<<endl<<"3.����"<<endl;
			cin>>w;
			if(w==1){
				if(r[1].dmm==20){
					cout<<"�Ѿ�����20����"<<endl;
				}
				else{
					if(r[1].q<100){
						cout<<"����ʧ�ܣ�ûǮ"<<endl;
					}
					else{
						cout<<"�����ɹ�!"<<endl;
						r[1].dmm+=1;
						r[1].q-=100;
					}
				}
			}
			else if(w==2){
				if(r[1].q<100){
					cout<<"׬��Ǯ����������?"<<endl;
				}
				else{
					cout<<"�����ɹ�!"<<endl;
					r[1].thh+=1;
					r[1].q-=100;
				}
			}
			else if(w==3){
				if(r[1].q<=100){
					cout<<"׬Ǯ!"<<endl;
				}
				else{
					cout<<"�����ɹ�!"<<endl;
					r[1].yyy+=1;
					r[1].q-=100;
				}
			}
			else{
				cout<<"����"<<endl;
			}
			system("pause");
		}
		else if(n==3){
			cout<<"����:"<<r[1].ming<<endl<<"��������:"<<r[1].dmm<<endl<<"��������:"<<r[1].yyy<<endl<<"ͼ������:"<<r[1].thh<<endl;
			system("pause");
			system("cls");
		}
		else if(n==4){
			system("cls");
			cout<<"����Ա��"<<endl<<"1.����Ա(ÿ������6����)"<<endl<<"2.����(ÿ������6ͼ��)"<<endl<<"3.���ټ�(ÿ�ο���ʱ�����)"<<endl;
			cin>>w;
			if(w==1){
				if(r[1].flag1==1){
					cout<<"���Ѿ��������Ա����"<<endl;
				}
				else{
					if(r[1].q<500){
						cout<<"ûǮ"<<endl;
					}
					else{
						if(r[1].dmm<3){
							cout<<"����Ա:�Ҳ���Ͳ����������˵��"<<endl;
						}
						else{
							cout<<"��Ƹ�ɹ�!"<<endl;
							r[1].flag1=1;
							r[1].q-=500;
						}
					}
				}
			}
			else if(w==2){
				if(r[1].flag2==1){
					cout<<"���Ѿ��������Ա����!"<<endl;
				}
				else{
					if(r[1].q<400){
						cout<<"ûǮ"<<endl;
					}
					else{
						if(r[1].thh<4){
							cout<<"����:�㲻���������Ҹ��㲻��"<<endl;
						}
						else{
							cout<<"��Ƹ�ɹ�!"<<endl;
							r[1].flag2=1;
							r[1].q-=400;
						}
					}
				}
			}
			else if(w==3){
				if(r[1].flag3==1){
					cout<<"���Ѿ��������Ա����" <<endl;
				}
				else {
					if(cnt<2){
						cout<<"û���飬�Ҳ�Ҫ��-���ټ�"<<endl;
					}
					else{
						if(r[1].q<500){
							cout<<"ûǮ"<<endl;
						}
						else{
							cout<<"��Ƹ�ɹ���"<<endl;
						}
					}
				}
			}
			else{
				cout<<"����"<<endl;
			} 
		}
		else if(n==5){
			system("start rand.exe");
		}
		else if(n==6){
			cout<<"��л����"<<endl;
			sleep(1);
			return 0;	
		}
		else{
			cout<<"����"<<endl; 
		}
	}
}
