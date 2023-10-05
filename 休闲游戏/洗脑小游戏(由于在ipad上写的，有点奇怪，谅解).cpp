#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int r,a,b,n,w,ww;
int cnt=1;
//怪物的属性
int m1g,m1f;
//主角的属性
struct bei{
  int j;
  int flag;
}s[2];
string name;
int ans=10,x=20,gil=10,awa;//awa负责存储战斗前的血量
//ok
string str;
void st(){
  r=rand()%4+1;
  if(r==1){
    cout<<"你获得了吸血属性的装备"<<endl;
    sleep(1);
    cout<<"是否替换当前装备 1.替换 2.不替换"<<endl;
    cin>>ww;
    if(ww==1){
      cout<<"好的"<<endl;
      s[cnt].j=1;
      s[cnt].flag=1;
    }
    else{
      cout<<"我尊重你的选择"<<endl;
    }
    system("pause");
    system("cls");
  }
  else if(r==2){
    cout<<"你获得增加血量的装备"<<endl;
    sleep(1);
    cout<<"是否替换当前装备 1.替换 2.不替换"<<endl;
    cin>>ww;
    if(ww==1){
      cout<<"好的"<<endl;
      s[cnt].j=5;
      s[cnt].flag=2;
    }
    else{
      cout<<"我尊重你的选择"<<endl;
    }
    system("pause");
    system("cls");
  }
				else if(r==3){
      cout<<"你获得了有机会暴击的装备"<<endl;
      sleep(1);
      cout<<"是否替换 1.替换 2.不替换"<<endl;
      cin>>ww;
      if(ww==1){
        cout<<"好的"<<endl;
        s[cnt].flag=3;
      }
      else{
        cout<<"我尊重你的选择"<<endl;
      }
  }
  else{
    cout<<"你获得了有机会一击秒杀的装备！"<<endl;
    sleep(1);
    cout<<"请问是否替换 1.替换 2.不替换"<<endl;
    cin>>ww;
    if(ww==1){
      cout<<"好的"<<endl;
      sleep(1);
      s[cnt].flag=4;
    }
    else{
      cout<<"我尊重你的选择"<<endl;
    }
  }  
}
int main(){
  srand(0);
  cout<<"欢迎来到zhizi复刻的游戏"<<endl;
  cin>>name;
  sleep(0.1);
  cout<<"欢迎!"<<name<<"!"<<endl;
  system("cls");
  while(true){
    cout<<"有何贵干"<<endl<<"1.砍树"<<endl<<"2.打怪"<<endl<<"3.修炼"<<endl<<"4.走l"<<endl;
    cin>>n;
    if(n==1){
      system("cls");
      if(ans<=0){
        cout<<"你没有桃子来砍树了"<<endl;
        system("pause");
        system("cls");
      }
      else{
        ans--;
        st();
      }
    }
    else if(n==2){
      m1g=rand()%x+5;
      m1f=rand()%gil+3;
      cout<<"此怪物攻击力为"<<m1g<<",此怪物防御力为"<<m1f<<"。"<<endl;
      sleep(1);
      system("cls");
      cout<<"是否挑战 1.挑战 2.不挑战"<<endl;
      cin>>w;
      if(w==2){
        cout<<"好的"<<endl;
        system("pause");
        system("cls");
      }
      else{
        cout<<"好的"<<endl;
        awa=x;
        sleep(1);
        system("cls");
        while(true){
																		cout<<"输入1使用普通攻击，输入2使用武器"<<endl;
         cin>>ww;
         if(ww==1){
           cout<<"怪物受到了"<<gil<<"点伤害"<<endl;
           m1f-=gil;
           if(m1f<=0){
             cout<<"怪物死亡了，你获得了10个桃子"<<endl;
             ans+=10;
             sleep(1);
             system("cls");
             break;
           }
         }
         else{
         	if(s[cnt].flag==1){
            cout<<"对方减掉了"<<gil/2<<"点伤害"<<endl<<"你获得了"<<gil/4<<"点伤害"<<endl;
            m1f-=gil/2;
            x+=gil/2;
            if(m1f<=0){
              cout<<"怪物死亡了，你获得了十个桃子"<<endl;
              ans+=10;
              sleep(1);
              system("cls");
              break;
            }
          }
          else if(s[cnt].flag==2){
            cout<<"你获得了"<<x/4<<"点血"<<endl;
            x+=x/4;
          }
          else if(s[cnt].flag==3){
            r=rand()%3;
            
            if(r>0){
              cout<<"对方收到了你的暴击"<<endl<<"对方血量-"<<gil*1.5<<endl;
              m1f-=gil*1.5;
            }
            else{
              cout<<"你没能暴击"<<endl;
            }
          }
          else if(s[cnt].flag==4){
            r=rand()%100;
            if(r>70){
              cout<<"你把怪物一刀秒了"<<endl;
              sleep(1);
              cout<<"你获得了15个桃子"<<endl;
              ans+=15;
              sleep(1);
              system("cls");
              break;
            }
            else{
              cout<<"你没能把怪物一下打败"<<endl;
            }
          }
          else{
            cout<<"你还没有装备哦"<<endl;
          }
         }
         cout<<"怪物对你造成了"<<m1g<<"点伤害"<<endl;
         sleep(1);
         x-=m1g;
         if(x<=0){
           cout<<"你死了"<<endl;
           
           x=awa;
           break;
         }
        }
      }
     
    }
     else if(n==3){
        cout<<"请输入你要修炼什么 1.攻击力 2.血量"<<endl;
        cin>>w;
        if(w==1){
          if(ans<=3){
            cout<<"桃子不足"<<endl;
          }
          else{
            ans-=4;
            gil+=10;
            cout<<"升级完成"<<endl;
            system("pause");
            system("cls");
          }
        }
        else if(w==2){
          if(ans<=2){
            cout<<"桃子不足"<<endl;
          }
          else{
            ans-=3;
            x+=10;
            cout<<"升级完成"<<endl;
            system("pause");
            system("cls");
          }
        }
        else{
          cout<<"错误"<<endl;
        }
      }
      else if(n==4){
        cout<<"感谢游玩"<<endl;
        sleep(1);
        return 0;
      }
      else if(n==5){
        cout<<"请输入礼包码:";
        cin>>str;
        if(str=="vip666"){
          cout<<"获取成功!"<<endl;
          x+=666;
        }
        else if(str=="sb"){
          cout<<"获取成功!"<<endl;
          gil+=600;
        }
        else if(str=="zhizi"||str=="nihao"||str=="pt"){
          cout<<"欢迎!"<<endl;
          x+=1000;
          gil+=700;
        }
        else{
          cout<<"无效礼包码"<<endl;
        }
      }
      else{
        cout<<"错误"<<endl;
      }
  }
}
