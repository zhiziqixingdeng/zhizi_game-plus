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
  int zb;//作弊次数，需要自己写脚本来增加
  int jd;//进度
}z[2];
char dt[30][30];
int n,cnt;
char w;
int x=1,y=1;//二维游戏坐标
int flag=0;
void cd(){
  freopen("存档.in","w",stdout);
  cout<<z[1].blood<<endl<<z[1].zb<<" "<<z[1].jd;
  flag=1;
  freopen("CON","w",stdout);
  return;
}
void to3(){
  out("你看见了你开发的zhizi_bot");
  out("zhizi_bot:主人你好");
  out("质子:你好");
  out("zhizi_bot：我知道主人有危险，所以带您去安全的地方");
  out("你到达了安全的地方，却不知道到底为什么会这样");
  cout<<"敬请期待zhizi历险记2！"<<endl;
  return;
}
void zd(){
  system("cls");
  srand(time(0));
  out("	你发现这里十分恐怖");
  out("有一个声音响起:猜数字游戏开始!");
  int r=rand()%99+1;
  out("猜数字游戏,范围1～100");
  sleep(2);
  system("cls");
  while(n!=r){
    cnt++;
    cout<<"要猜的数字:";
    cin>>n;
    if(n>r){
      out("大了");
    }
    if(n<r){
     	out("小了");
    }
    if(cnt==9){
      out("你因为猜的太多了，于是-1滴血");
      z[1].blood--;
      if(z[1].blood==0){
        out("你死了");
        cd();
        return;
      }
    }
  }
  cout<<"恭喜你，猜对了!"<<endl;
  to3();
  return;
}
void to2(){
  out("你顺利的走出了迷宫");
  out("你想知道为什么会这样，但是要去上班了，于是不多想了");
  sleep(1);
  system("cls");
  out("一段时间后");
  out("有一个人在敲门说:外卖!");
  cout<<"你要怎么办 1.拿外卖 2.不拿"<<endl;
  cin>>n;
  if(n==1){
    cout<<"外面的人把你用传送门扔到了一个地方"<<endl;
    system("pause");
    z[1].jd++;
    zd();
    return;
  }
  else{
    out("那个人生气了，于是用你好枪把你给ga了");
    cd();
    return;
  }
}
void zmg(){//走迷宫
  freopen("迷宫.txt","r",stdin);
  for(int i=1;i<=6;i++){
    for(int j=1;j<=6;j++){
        cin>>dt[i][j];
    }
    cout<<endl;
  }
  freopen("CON","r",stdin);
  out("你发现这个房间是一个小迷宫,你要走进一个地洞（按wasd操作)");
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
        out("你走出地图了，游戏失败");
        z[1].blood-=1;
        cd();
        return;
      }
      else{
        if(dt[x-1][y]=='#'){
         	out("你撞墙了");
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
        out("你走出地图了，游戏失败");
        cd();
        return;
      }
      else{
        if(dt[x+1][y]=='#'){
          out("你撞墙了");
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
        out("你走出地图了，游戏失败");
        cd();
        return;
      }
      else{
        if(dt[x][y-1]=='#'){
          out("你撞墙了");
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
        out("你走出地图了，游戏失败");
        cd();
        return;
      }
      else{
        if(dt[x][y+1]=='#'){
          out("你撞墙了");
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
        cout<<"6,作弊是吧"<<endl;
        sleep(0.1);
        cout<<"写个增加脚本会死吗？"<<endl;
        sleep(1);
      }
    }
    else{
      cout<<"错误"<<endl;
    }
    if(x==6&&y==6){
      cout<<"你走出了迷宫!"<<endl;
      z[1].jd++;
      to2();
      return;
    }
  }
}
void start(){
  out("你是一个小小的程序员,叫做质子");
  out("有一天，你掉进了一个房间");
  system("cls");
  z[1].jd++;
  zmg();
  return;
}
int main(){
  freopen("存档.in","r",stdin);
  cin>>z[1].blood;
  cin>>z[1].zb>>z[1].jd;
  freopen("CON","r",stdin);
  cout<<"你是一个单纯可爱的质子"<<endl;
  sleep(1);
  if(z[1].blood<=0){
    cout<<"程序员提示：你没血了,给你加点血"<<endl;
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
