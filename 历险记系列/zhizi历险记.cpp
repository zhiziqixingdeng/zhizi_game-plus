#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include <string>
#include <conio.h>
using namespace std;
void out(string x){
  for(int i=0;i<x.length();i++){
    cout<<x[i];
    sleep(0.1);
  }
  cout<<endl;
  return;
}
struct zhizi{
  int blood;
  int zb;//���״�������Ҫ�Լ�д�ű�������
  int jd;//����
}z[2];
char dt[30][30];
int n,cnt;
char w;
int x=1,y=1;//��ά��Ϸ����
int flag=0;
void cd(){
  freopen("�浵.in","w",stdout);
  cout<<z[1].blood<<endl<<z[1].zb<<" "<<z[1].jd;
  flag=1;
  freopen("CON","w",stdout);
  return;
}
void to3(){
  out("�㿴�����㿪����zhizi_bot");
  out("zhizi_bot:�������");
  out("����:���");
  out("zhizi_bot����֪��������Σ�գ����Դ���ȥ��ȫ�ĵط�");
  out("�㵽���˰�ȫ�ĵط���ȴ��֪������Ϊʲô������");
  cout<<"�����ڴ�zhizi���ռ�2��"<<endl;
  return;
}
void zd(){
  system("cls");
  srand(time(0));
  out("	�㷢������ʮ�ֲֿ�");
  out("��һ����������:��������Ϸ��ʼ!");
  int r=rand()%99+1;
  out("��������Ϸ,��Χ1��100");
  sleep(2);
  system("cls");
  while(n!=r){
    cnt++;
    cout<<"Ҫ�µ�����:";
    cin>>n;
    if(n>r){
      out("����");
    }
    if(n<r){
     	out("С��");
    }
    if(cnt==9){
      out("����Ϊ�µ�̫���ˣ�����-1��Ѫ");
      z[1].blood--;
      if(z[1].blood==0){
        out("������");
        cd();
        return;
      }
    }
  }
  cout<<"��ϲ�㣬�¶���!"<<endl;
  to3();
  return;
}
void to2(){
  out("��˳�����߳����Թ�");
  out("����֪��Ϊʲô������������Ҫȥ�ϰ��ˣ����ǲ�������");
  sleep(1);
  system("cls");
  out("һ��ʱ���");
  out("��һ����������˵:����!");
  cout<<"��Ҫ��ô�� 1.������ 2.����"<<endl;
  cin>>n;
  if(n==1){
    cout<<"������˰����ô������ӵ���һ���ط�"<<endl;
    system("pause");
    z[1].jd++;
    zd();
    return;
  }
  else{
    out("�Ǹ��������ˣ����������ǹ�����ga��");
    cd();
    return;
  }
}
void zmg(){//���Թ�
  freopen("�Թ�.txt","r",stdin);
  for(int i=1;i<=6;i++){
    for(int j=1;j<=6;j++){
        cin>>dt[i][j];
    }
    cout<<endl;
  }
  freopen("CON","r",stdin);
  out("�㷢�����������һ��С�Թ�,��Ҫ�߽�һ���ض�����wasd����)");
 		sleep(3);
  while(true){
    system("cls");
    for(int i=1;i<=6;i++){
      for(int j=1;j<=6;j++){
        if(i==x&&j==y){
          cout<<"w";
        }
        else{
          cout<<dt[i][j];
        }
      }
      cout<<endl;
    }
    w=getch();
    if(w=='w'){
      if(x-1==0){
        out("���߳���ͼ�ˣ���Ϸʧ��");
        z[1].blood-=1;
        cd();
        return;
      }
      else{
        if(dt[x-1][y]=='#'){
         	out("��ײǽ��");
          cd();
          return;
        }
        else{
          x--;
        }
      }
    }
    else if(w=='s'){
      if(x+1==7){
        out("���߳���ͼ�ˣ���Ϸʧ��");
        cd();
        return;
      }
      else{
        if(dt[x+1][y]=='#'){
          out("��ײǽ��");
          cd();
          return;
        }
        else{
          x++;
        }
      }
    }
    else if(w=='a'){
      if(y-1==0){
        out("���߳���ͼ�ˣ���Ϸʧ��");
        cd();
        return;
      }
      else{
        if(dt[x][y-1]=='#'){
          out("��ײǽ��");
          cd();
          return;
        }
        else{
          y--;
        }
      }
    }
    else if(w=='d'){
      if(y+1==7){
        out("���߳���ͼ�ˣ���Ϸʧ��");
        cd();
        return;
      }
      else{
        if(dt[x][y+1]=='#'){
          out("��ײǽ��");
          cd();
          return;
        }
        else{
          y++;
        }
      }
    }
    else if(w=='6'){
      if(z[1].zb>=1){
        z[1].zb--;
        x=6;
        y=6;
      }
      else{
        cout<<"6,�����ǰ�"<<endl;
        sleep(0.1);
        cout<<"д�����ӽű�������"<<endl;
        sleep(1);
      }
    }
    else{
      cout<<"����"<<endl;
    }
    if(x==6&&y==6){
      cout<<"���߳����Թ�!"<<endl;
      z[1].jd++;
      to2();
      return;
    }
  }
}
void start(){
  out("����һ��СС�ĳ���Ա,��������");
  out("��һ�죬�������һ������");
  system("cls");
  z[1].jd++;
  zmg();
  return;
}
int main(){
  freopen("�浵.in","r",stdin);
  cin>>z[1].blood;
  cin>>z[1].zb>>z[1].jd;
  freopen("CON","r",stdin);
  cout<<"����һ�������ɰ�������"<<endl;
  sleep(1);
  if(z[1].blood<=0){
    cout<<"����Ա��ʾ����ûѪ��,����ӵ�Ѫ"<<endl;
    z[1].blood=10;
  }
  system("cls");
  if(z[1].jd==1){
    start();
  }
  else if(z[1].jd==2){
    zmg();
  }
  else if(z[1].jd==3){
    to2();
  }
  else if(z[1].jd==4){
    zd();
  }
}
