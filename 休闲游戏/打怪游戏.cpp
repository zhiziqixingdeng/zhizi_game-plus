#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
struct r{
	string name;
	int mx=60;
	int mg=10;
	int flag1=1;
	int flag2=0;
	int flag3=0;
	int q;
}e[2];
int m1x=100000,m1g=3000;
int n,w,cnt,ww;
int m2x,m2g,flag,ans,ans2;
int main(){
	cout<<"��ӭ���������Ϸ"<<endl;
	sleep(1);
	srand((unsigned int)time(NULL)); 
	cout<<"�������������:";
	cin>>e[1].name;
	cout<<"��ӭ,"<<e[1].name<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"��������Ҫ��ʲô"<<endl<<"1.���"<<endl<<"2.ҩ��"<<endl<<"3.�ؼ�����"<<endl<<"4.������Ϣ"<<endl<<"5.��������(�뿪)"<<endl;
		cin>>n;
		if(n==1){
			system("cls");
			cout<<"������Ҫ��ʲô��"<<endl<<"1.���ֹ�(�����������)"<<endl<<"2.���ֹ�(���ֲ��ܴ�Ҫ��Ȼ���ĺܿ�)"<<endl<<"3.��ҹ�(���޵У���øĴ������)"<<endl;
			cin>>w;
			if(w==1){
				cout<<"��������С��"<<endl;
				m2x=rand()%100+9;
				m2g=rand()%40+3;
				cout<<"Ѫ��Ϊ:"<<m2x<<endl<<"������Ϊ:"<<m2g<<endl;
				cout<<"��ʼ"<<endl;
				flag=0;
				ans=0;
				ans2=0;
				while(1==1){
					if(e[1].mx<=0){
						cout<<"������"<<endl;
						e[1].mx+=10;
						flag=1;
						break;
					}
					cout<<"��������Ҫ��ʲô����"<<endl<<"1.��ͨ����(������"<<e[1].mg<<")"<<endl<<"2.�������(���������)"<<endl;
					if(e[1].flag2==1){
						cout<<"3.ħ��(����ʹ����ͨ���������ǻ��öԷ���Ѫ��һ����һ��)"<<endl;
					}
					if(e[1].flag3==1){
						cout<<"4.��Ѫ(�ظ������Ѫ,һ����1��)"<<endl;
					}
				cin>>ww;
				if(ww==1){
					cout<<"���������ͨ����"<<endl;
					cout<<"�Է�����Ѫ"<<endl;
					m2x-=e[1].mg;
				}
				else if(ww==2){
					cout<<"��������������"<<endl;
					sleep(1);
					cnt=rand()%e[1].mg+e[1].mg/2;
					cout<<"�Է��ܵ���"<<cnt<<"���˺�"<<endl;
					m2x-=cnt;
				}
				else if(ww==3&&e[1].flag2==1&&ans==0){
					cout<<"�㹥���˶Է�"<<endl;
					cout<<"�����"<<e[1].mg<<"��Ѫ"<<endl;
					sleep(1);
					cout<<"�Է�����"<<e[1].mg<<"��Ѫ"<<endl;
					m2x-=e[1].mg;
					e[1].mx+=e[1].mg;
				}
				else if(ww==4&&e[1].flag3==1&&ans2==0){
					cnt=e[1].mg+=10;
					cout<<"�����"<<cnt<<"��Ѫ";
					e[1].mx+=cnt; 
				}
				else{
					cout<<"����"<<endl;
				}
				if(m2x<=0){
					cout<<"��������"<<endl;
					cout<<"���100���"<<endl;
					e[1].q+=100; 
				}
				cout<<"������������"<<m2g<<"�㹥����"<<endl;
				e[1].mx-=m2g; 
			}
		}
		else if(w==2){
			m1x=100000; 
			m1g=3000;
			cout<<"�������˴��"<<endl;
				cout<<"Ѫ��Ϊ:"<<m1x<<endl<<"������Ϊ:"<<m1g<<endl;
				cout<<"��ʼ"<<endl;
				flag=0;
				ans=0;
				ans2=0;
				while(1==1){
					if(e[1].mx<=0){
						cout<<"������"<<endl;
						e[1].mx+=10;
						flag=1;
						break;
					}
					cout<<"��������Ҫ��ʲô����"<<endl<<"1.��ͨ����(������"<<e[1].mg<<")"<<endl<<"2.�������(���������)"<<endl;
					if(e[1].flag2==1){
						cout<<"3.ħ��(����ʹ����ͨ���������ǻ��öԷ���Ѫ��һ����һ��)"<<endl;
					}
					if(e[1].flag3==1){
						cout<<"4.��Ѫ(�ظ������Ѫ,һ����1��)"<<endl;
					}
				cin>>ww;
				if(ww==1){
					cout<<"���������ͨ����"<<endl;
					cout<<"�Է�����Ѫ"<<endl;
					m1x-=e[1].mg;
				}
				else if(ww==2){
					cout<<"��������������"<<endl;
					sleep(1);
					cnt=rand()%e[1].mg+e[1].mg/2;
					cout<<"�Է��ܵ���"<<cnt<<"���˺�"<<endl;
					m1x-=cnt;
				}
				else if(ww==3&&e[1].flag2==1&&ans==0){
					cout<<"�㹥���˶Է�"<<endl;
					cout<<"�����"<<e[1].mg<<"��Ѫ"<<endl;
					sleep(1);
					cout<<"�Է�����"<<e[1].mg<<"��Ѫ"<<endl;
					m1x-=e[1].mg;
					e[1].mx+=e[1].mg;
				}
				else if(ww==4&&e[1].flag3==1&&ans2==0){
					cnt=e[1].mg+=10;
					cout<<"�����"<<cnt<<"��Ѫ";
					e[1].mx+=cnt; 
				}
				else{
					cout<<"����"<<endl;
				}
				if(m1x<=0){
					cout<<"��������"<<endl;
					cout<<"������200���"<<endl;
					break; 
				}
				cout<<"������������"<<m1g<<"�㹥����"<<endl;
				e[1].mx-=m1g; 
			}
		}
		else if(w==3){
			m2x+=10000;
			m2g+=100; 
			cout<<"����������ҹ���"<<endl;
			sleep(1);
			cout<<"�Է�ʹ���������ң���������ؼ���Ч"<<endl;
			sleep(1);
			system("cls");
			cout<<"�Է�ʹ���˷�����,��Ĺ���������"<<endl;
			sleep(1);
			cout<<"��ʼ�Ծ�"<<endl;
			while(1==1){
				if(e[1].mx<=0){
					cout<<"������"<<endl;
					e[1].mx=20;
					break;
				}
				cout<<"��������Ҫʲô����"<<endl<<"1.��ͨ����(�˺�"<<e[1].mg/2<<")"<<endl;
				cin>>ww;
				if(ww==1){
					cnt=rand()%10;
					if(cnt>=3){
						cout<<"�Է�ʹ�ö����ң���������Ĺ���"<<endl;
					}
					else{
						cout<<"�Է�������"<<e[1].mg/2<<"��Ѫ"<<endl;
						m2x-=e[1].mg/2; 
					}
				}
				else{
					cout<<"����"<<endl;
				}
				if(m2x<=0){
					cout<<"��ʤ����"<<endl;
					sleep(1);
					cout<<"�����1000���"<<endl;
					e[1].q+=1000;
				}
				cnt=rand()%4;
				if(cnt==0){
					cout<<"�Է�ʹ�ü�Ѫ"<<endl;
					cout<<"+100"<<endl;
					m2x+=100;
				}
				else if(cnt==1){
					cout<<"�Է�ʹ���˳�������"<<endl;
					cout<<"���Ѫ-1000"<<endl;
					e[1].mx-=1000;
				}
				else if(cnt==2){
					cout<<"�Է�ʹ����awa��"<<endl;
					cout<<"���Ѫ������2"<<endl;
					e[1].mx/=2;
				}
				else{
					cout<<"�Է�ʹ������ͨ����"<<endl;
					cout<<"���Ѫ-100"<<endl;
					e[1].mx-=100;
				}
			} 
		}
	} 
	else if(n==2){
		cout<<"�ϰ�:С���ӣ����ʲô��"<<endl;
		cout<<"1.Ѫ��ҩˮ(����20Ѫ) �۸�100���"<<endl;
		cout<<"2.����������ҩˮ(����10Ѫ) �۸�100���"<<endl;
		cin>>w;
		if(e[1].q<100){
			cout<<"��Ҳ���!"<<endl;
		}
		if(w==1){
			e[1].q-=100;
			e[1].mx+=20;
			cout<<"ʹ�����!"<<endl;
		}
		else if(w==2){
			e[1].mg+=10;
			e[1].q-=100;
			cout<<"ʹ�����!"<<endl;
		}
		else{
			cout<<"����"<<endl;
		}
	} 
	else if(n==3){
		if(e[1].flag2==0){
			cout<<"�ؼ�2��ħ������Ҫ700���"<<endl;
			cout<<"�Ƿ��� 1.���� 2.������"<<endl;
			cin>>w;
			if(w==1){
				if(e[1].q<700){
					cout<<"��Ҳ���"<<endl;
				}
				else{
					cout<<"��óɹ�!"<<endl;
					e[1].flag2=1;
					e[1].q-=700;
				}
			}
			else{
				cout<<"�������ѡ��"<<endl;
			}
		}
		else{
			if(e[1].flag3==0){
				cout<<"�ؼ�3����Ѫ����Ҫ1200���"<<endl;
				cout<<"�Ƿ��� 1.���� 2.������"<<endl;
				cin>>w;
				if(w==1){
					if(e[1].q<1200){
						cout<<"��Ҳ���"<<endl;
					}
					else{
						cout<<"����ɹ�!"<<endl;
						e[1].flag3=1;
						e[1].q-=1200;
					}
				}
				else{
					cout<<"�õ�"<<endl;
				}
			}
			else{
				cout<<"���Ѿ�����������ؼ���"<<endl;
			}
		} 
	}
	else if(n==4){
		cout<<"����:"<<e[1].name<<endl;
		cout<<"Ǯ:"<<e[1].q<<"�����"<<endl;
		cout<<"�ؼ�:������� ";
		if(e[1].flag2==1){
			cout<<"ħ�� "; 
		}
		if(e[1].flag3==1){
			cout<<"��Ѫ";
		}
		cout<<endl;
		cout<<"Ѫ��:"<<e[1].mx<<endl;
		cout<<"������"<<e[1].mg<<endl;
	}
	else if(n==5){
		cout<<"�Ƿ�Ҫ�������� 1.Ҫ 2.��Ҫ"<<endl;
		cin>>w;
		if(w==1){
			cout<<"��л����"<<endl;
			sleep(1);
			return 0; 
		}
		else if(w==2){
			cout<<"�õ�"<<endl;
		}
		else{
			cout<<"������"<<endl;
		}
	}
	else{
		cout<<"����"<<endl;
	}
}
}
