#pragma GCC optimize(2)
#include<bits/stdc++.h>
#include<ctime>
#include<cmath>
#include<time.h>
#include<conio.h>
#include<cstring>
#include<windows.h>
#define ll long long
#define green_ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_GREEN)
#define blue_ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_BLUE)
#define red_ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED)
#define white_ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE)
#define lgreen_ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE)
#define yellow_ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED)
#define purple_ SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE)
using namespace std;
int n,n_;
bool lang;
bool musicchk=0;
ll smv=0;
//Awake
int Awk=1000;
int setp;
string locstr,str1,str2,str3,str4,str5,str6,strpau;
//BGM
int sel[4]={1,4,7,8};
void BGMset(){
	if(setp<=sel[0])PlaySound(str1.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
	else if(setp<=sel[1])PlaySound(str2.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
	else if(setp<=sel[2])PlaySound(str3.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
	else if(setp<=sel[3])PlaySound(str4.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
	return ;
}
int tempsetp;
void BGMchk(){
	if(musicchk){
		if(smv>=Awk){
			PlaySound(str5.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
		}
		else{
			if(setp<=sel[0]){
				if(tempsetp>sel[0]){
					PlaySound(str2.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
				}
			}
			else if(setp<=sel[1]){
				if(tempsetp<=sel[0]||tempsetp>sel[1]){
					PlaySound(str2.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
				}
			}
			else if(setp<=sel[2]){
				if(tempsetp<=sel[1]||tempsetp>sel[2]){
					PlaySound(str3.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
				}
			}
			else if(setp<=sel[3]){
				if(tempsetp<=sel[2]||tempsetp>sel[3]){
					PlaySound(str4.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
				}
			}
		}	
	}
	else PlaySound(strpau.c_str(),NULL,0);	
	return ;
} 
void updatelog(){
	green_;
	cout<<"Newest Update Log:"<<endl;
	cout<<"Number of enemies' incorrect after [Roar].           [FIXED]"<<endl;
	cout<<"Transverse Teleport won't collect the random '?' .   [FIXED]"<<endl;
	cout<<"Enemies mutiplied while freezing.                    [FIXED]"<<endl;
	cout<<"Extra:"<<endl;
	cout<<"    1- Language can be selected as you like"<<endl;
	cout<<"    2- [Teleport] Enhanced(Please notice the modification of the instruction)"<<endl;
	cout<<"    3- Background Music(Play as you choose the level) available, you can press E to turn on as you like."<<endl;
	cout<<"    4- Numbers overflow limited!"<<endl;
	cout<<"    5- Immeadiately restart once pressed R while playing"<<endl;
	red_;
	cout<<"    #- Rules of enemies generation has been STRENTHENED!"<<endl;
	green_;
	cout<<"������־��"<<endl;
	cout<<"[����]�����������ʵ�ʲ���                           [���޸�]"<<endl;
	cout<<"�������޷��ռ� ����������أ���'?'���ţ�           [���޸�]"<<endl;
	cout<<"[����]ʱ��������С���ʼ���                           [���޸�]"<<endl;
	cout<<"������Ŀ��"<<endl;
	cout<<"    1- ��Ӣ�Ŀ���ѡ"<<endl;
	cout<<"    2- [����]���� �Ѽ�ǿ����ע�� ˵�� ���ֵı仯��"<<endl;
	cout<<"    3- ��֧���ֶ����ű������֣�����ѡ�ȼ����ţ����밴������е���"<<endl;
	cout<<"    4- �Զ������ݳ��� �Ѽ�������"<<endl;
	cout<<"    5- ��֧�� ��Ϸ�а�R �����ؿ�"<<endl;
	red_;
	cout<<"    #- ����������ɹ�����ǿ����"<<endl;
	white_;
	return ;
}
void rule(){
	if(lang==0)cout<<"In this game, please use W A S D to control the movement of your '0', and try to live long enough being captured by '1'"<<endl;
	if(lang==0){
		red_;
		cout<<"Please notice that enemies will randomly be created on the right side of the map!"<<endl;
		white_;
	}
	if(lang==1)cout<<"��Ϸ�У����� W A S D ���� '0' ���ƶ��������� '1' ��׷���´������"<<endl;
	if(lang==1){
		red_;
		cout<<"ע�� �����˹��٣����˽��ڵ�ͼ��/�±�Ե ������ɣ�"<<endl;
		white_;
	}
	return ;
}
void thanklist(){
	lgreen_;
	cout<<"    Contributor   Aspect(s)"<<endl;
	cout<<"    ֧����        ֧����"<<endl;
	cout<<" 1)  cbydc       BGM & Function & Advise"<<endl;
	cout<<" 2)  dustbin     Filestream & Function"<<endl;
	cout<<" 3)  bmyjacks    Filestream"<<endl;
	cout<<" 4)  ����        Advise"<<endl;
	white_;
	return ;
}
void contactus(){
	if(lang==0)cout<<"Contact author via the following ways:"<<endl;
	if(lang==1)cout<<"����ͨ�����·�ʽ��ϵ�����ߣ�"<<endl;
	cout<<"Tel : (+86)18070915368"<<endl;
	cout<<"QQ : 2088230443  (Email available)"<<endl; 
	return ;
} 
void ulti(){
	green_;
	if(lang==0)cout<<"## Ultimate move  Key            Effect"<<endl;
	if(lang==0)cout<<"1- Freeze         (U)            To keep enemies trapped until you move certain steps."<<endl;
	if(lang==0)cout<<"2- Teleport       (I + W/A/S/D)  To teleport to any side of the map and kill enemies along the road.[Won't work with Freeze]"<<endl;
	if(lang==0)cout<<"3- Roar          (O)             To kill 1/3 of the enemies closest to player(0%~66% each successfully killed if too far before [Awake])"<<endl;
	if(lang==0)cout<<"4- Speed Boost    (L)            To get yourself speed up to 200%"<<endl;
	if(lang==0)cout<<"5- Awake           -             To possibly keep your skill points of skills." <<endl;
	if(lang==1)cout<<"## �ռ���ʽ     ��ݼ�         Ч��"<<endl;
	if(lang==1)cout<<"1- �䶳        ��U��           ���������ж�һ������֮�ڵ��˽����ܶ���"<<endl;
	if(lang==1)cout<<"2- ����        ��I + W/A/S/D�� ���͵���ͼ������һ�߲���ɱ��;���ˣ�[����]�󽫻�ɱ��;��· �޷��� [�䶳] ͬʱʹ�ã�"<<endl;
	if(lang==1)cout<<"3- ����        ��O��           Ĩȥ��'0'�����1/3���ֵ��ˣ��������Զ���������˽�0%~66%���ʻ�ɱ��[����]�����Ӿ��룩"<<endl;
	if(lang==1)cout<<"4- ����        ��L��           �ٶ�������ԭ�ٶȵ�200%"<<endl;
	if(lang==1)cout<<"5- ����          -             ʹ�ü�����һ�����ʲ����ĵ���"<<endl;
	white_;
	return ;
}
void not1(){
	lgreen_;
	if(lang==0)cout<<"Before it starts, please make sure the following things:"<<endl;
	if(lang==0)cout<<"1- Caps-Lock on"<<endl;
	if(lang==0)cout<<"2- Screen enlarged"<<endl;
	if(lang==0)cout<<"## Please notice that corner takes time to turn!"<<endl;
	if(lang==0)cout<<"## If you want to take a break, press P at anytime to pause the progress."<<endl; 
	if(lang==0)cout<<"And press E to start (or Q to Quit)"<<endl;
	if(lang==0)cout<<"Good luck!"<<endl;
	if(lang==1)cout<<"��Ϸ��ʼǰ����ȷ�����¼��"<<endl;
	if(lang==1)cout<<"1- ��д������"<<endl;
	if(lang==1)cout<<"2- ���п�Ŵ�"<<endl;
	if(lang==1)cout<<"## ע������ת�򽫻���һС����ͻ���"<<endl;
	if(lang==1)cout<<"## ���������Ϣһ�£���ʱ��'P'������ͣ"<<endl;
	if(lang==1)cout<<"Ȼ����'E'��ʼ����'Q'�˳���"<<endl;
	if(lang==1)cout<<"ף����ˣ�"<<endl;
	white_;
	return ;
}
int ox,oy;
int len,wid;
//Adjust Difficulty here
int lev[9]={1350,1150,1010,930,880,760,680,625,525};//movement
int lv2[9]={28,26,25,25,25,23,22,22,20};
int fre[9]={6,6,7,8,10,11,13,14,16};//step to collect 1 energy of Freeze
int maxf[9]={25,20,18,16,15,14,12,10,8};//Limitation of Freeze
int roar[9]={10,8,7,6,6,5,5,4,3};//Limitation of roar Power 
int tpc[9]={30,25,22,20,18,16,15,15,12};//Limitation of Teleport Power 
int maxbst[9]={500,400,350,350,300,250,200,150,100};//Limitaion of Boost Power;
ll bsc=0;
void hist(){
	if(lang==0)cout<<"History Best: "<<bsc<<endl;
	if(lang==1)cout<<"��ʷ��߷�����"<<bsc<<endl;
	return ;
}
//Freeze
int Frecnt=0;
bool frez=0;
//roar
int roarcnt=3;
bool roarshow=0;
//Tp
int tpcnt=0;
bool tpshow=0;
//boost
bool bst=0;
int bstcnt=0;
void movec(int x,int y){
	HANDLE hOut;
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X=x,pos.Y=y;
	bool now=SetConsoleCursorPosition(hOut,pos);
	//cout<<now<<endl;
	return ;
}
struct tpkil{
	bool dir;
	int cord;
}tmp; 
struct man{
	int cx,cy;
	void reset(){
		cx=ox,cy=oy;
	}
	void tp(){
		tpshow=1;
		char now;
		while(1){
			if(_kbhit()){
				now=_getch();
				if(now==32){
					musicchk=not musicchk;
					BGMchk();
				}
				if(now>='a'&&now<='z')now-=('a'-'A');
				if(now=='W'){
					tmp.dir=0;
					tmp.cord=cy;
					cx=1;
				}
				else if(now=='S'){
					tmp.dir=0;
					tmp.cord=cy;
					cx=len-len/10;
				}
				else if(now=='A'){
					tmp.dir=1;
					tmp.cord=cx;
					cy=1;
				}
				else if(now=='D'){
					tmp.dir=0;
					tmp.cord=cx;
					cy=wid-wid/10;
				}
				break;
			}
		}
		tpcnt--;
		if(smv>=Awk){
			int now=rand()%3;
			if(now>=1)tpcnt++;
		}
		return ;
	}
	int kbget(){
		char ch;
		if(_kbhit()){
			ch=_getch();
			if(ch==32){
				musicchk=not musicchk;
				BGMchk();
			}
			if(ch>='a'&&ch<='z')ch-=('a'-'A');
			if(ch=='S'){
				if(!bst&&cx<len)cx++;
				else if(bst){
					cx=min(cx+2,len);
					bstcnt--;
					if(smv>=Awk){
						bstcnt++;
					}
					if(bstcnt==0){
						bst=0;
					}
				}
			}
			else if(ch=='W'){
				if(!bst&&cx>1)cx--;
				else if(bst){
					cx=max(cx-2,1);
					bstcnt--;
					if(bstcnt==0){
						bst=0;
					}
				}
			}
			else if(ch=='A'){
				if(!bst&&cy>1)cy--;
				else if(bst){
					cy=max(cy-2,1);
					bstcnt--;
					if(bstcnt==0){
						bst=0;
					}
				}
			}
			else if(ch=='D'){
				if(!bst&&cy<wid)cy++;
				else if(bst){
					cy=min(wid,cy+2);
					bstcnt--;
					if(bstcnt==0){
						bst=0;
					}
				}
			}
			else if(ch=='Q')return -1;
			else if(ch=='N'&&setp>=1){
				smv=0;
				setp--;
				if(Frecnt>fre[setp])Frecnt=fre[setp];
				if(frez&&Frecnt<fre[setp])Frecnt++;
			}
			else if(ch=='M'&&setp<8){
				setp++;
				if(Frecnt>fre[setp])Frecnt=fre[setp];
				if(frez&&Frecnt<fre[setp])Frecnt++;
			}
			else if(ch=='R'){
				return 2;
			}
			else if(ch=='U'){
				return 3;
			}
			else if(ch=='P'){
				system("pause");
			}
			else if(ch=='I'){
				if(!frez&&tpcnt>0){
					tp();
					return 5;
				}
			}
			else if(ch=='O'){
				return 4;
			}
			else if(ch=='L'){
				if(frez&&Frecnt<fre[setp])Frecnt++;
				if(bstcnt>0){
					bst=not bst;
					if(bst)purple_;
					else white_;
				}
			}
			else if(ch=='Q'){
				return 6;
			}
			return 1;
		}
		return 0;
	}
}m;
struct enm{
	int cx,cy;
	bool dead;
	void reset(){
		bool vis1=rand()%2;
		if(vis1){
			dead=0;
			bool vis_=rand()%2;
			if(vis_){
				cx=rand()%5+(len-4);
			}
			else{
				cx=rand()%5+1;
			}
			cy=rand()%5+(wid-4);
		}
		else{
			dead=0;
			bool vis_=rand()%2;
			cx=rand()%len+1;
			cy=rand()%wid+1;
			if(!vis_){
				cx=len;
			}
			else{
				cy=wid;
			}
		}	
		return ;
	}
	void rndcor(){
		dead=0;
		bool vis=rand()%2;
		cx=rand()%len+1;
		cy=rand()%wid+1;
		if(!vis){
			cx=len;
		}
		else{
			cy=wid;
		}
		return ;
	}
	void move(){
		if(!frez&&!dead){
			bool vis=rand()%2;
			if(vis){
				if(cx>m.cx){
					if(cx>1)cx--;
				}
				else if(cx<m.cx){
					if(cx<len)cx++;
				}
				else{
					if(cy>m.cy){
						if(cy>1)cy--;
					}
					else{
						if(cy<wid)cy++;
					}
				}
			}
			else{
				if(cy>m.cy){
					if(cy>1)cy--;
				}
				else if(cy<m.cy){
					if(cy<wid)cy++;
				}
				else{
					if(cx>m.cx){
						if(cx>1)cx--;
					}
					else if(cx<m.cx){
						if(cx<len)cx++;
					}
				}
			}
		}
		return ;
	}
	bool kill(){
		if(dead)return 0;
		else return (cx==m.cx&&cy==m.cy);
	}
}e[5010];
void chkenm(){
	for(int i=1;i<=n;i++){
		if(!e[i].dead){
			e[i].rndcor();
		}
	}
	return ;
}
bool cmp(enm a,enm b){
	return abs(a.cx-m.cx)+abs(a.cy-m.cy)<abs(b.cx-m.cx)+abs(b.cy-m.cy);
}
bool cmp2(enm a,enm b){
	return a.dead<b.dead; 
}
void creat(int x){
	x=max(x,5);
	for(int i=1;i<=x;i++){
		n++;
		e[n].rndcor();
	};
	while(n<=n_/5){
		n++;
		e[n].rndcor();
	}
	return ;
}
void note(){
	movec(wid*2+3,0);
	if(lang==0)cout<<"Current level: "<<setp<<endl;
	if(lang==1)cout<<"��ǰ�Ѷȣ�"<<setp<<endl;
	movec(wid*2+3,1);
	if(lang==0)cout<<"Current number of the enemies: "<<n<<endl;
	if(lang==1)cout<<"��ǰ����������"<<n<<endl;
	movec(wid*2+3,3);
	if(lang==0)cout<<"Q - Quit"<<endl;
	if(lang==1)cout<<"�� Q �˳�"<<endl;
	movec(wid*2+3,4);
	if(lang==0)cout<<"P - pause"<<endl;
	if(lang==1)cout<<"�� P ��ͣ"<<endl;
	movec(wid*2+3,5);
	if(lang==0)cout<<"N - decrease hardship & reset your score"<<endl;
	if(lang==1)cout<<"�� N �����Ѷ� �����õ�ǰ����"<<endl;
	movec(wid*2+3,6);
	if(lang==0)cout<<"M - increase and keep your score)"<<endl;
	if(lang==1)cout<<"��M �����Ѷȣ�����������"<<endl;
	movec(wid*2+3,7);
	if(lang==0)cout<<"R - reset the position of the enemies(and your roarrent score)"<<endl;
	if(lang==1)cout<<"�� R ���� ���˵�λ�ã��͵�ǰ������"<<endl; 
	
	movec(wid*2+3,9);
	if(lang==0)cout<<"Survive score : "<<smv<<endl;
	if(lang==1)cout<<"��ǰ������"<<smv<<endl;
	movec(wid*2+3,10);
	if(lang==0)cout<<"History best : "<<bsc<<endl;
	if(lang==1)cout<<"��ʷ��߷�����"<<bsc<<endl; 
	movec(wid*2+3,13);
	if(lang==0)cout<<"Freeze Energy: "<<Frecnt<<" (Press U to use/unuse)  "<<endl;
	if(lang==1)cout<<"�䶳������"<<Frecnt<<" ����'U'ʹ��/�����  "<<endl;
	if(Frecnt<10)cout<<" "<<endl;
	movec(wid*2+3,15);
	if(lang==0)cout<<"Teleportation Remain: "<<tpcnt<<" (Press I and then W/A/S/D to use while UNFREEZING)  "<<endl;
	if(lang==1)cout<<"���� ʣ�������"<<tpcnt<<"��[�Ǳ���]״̬�� ��'I'+ W/A/S/D ʹ�ã�  "<<endl;
	movec(wid*2+3,17);
	if(lang==0)cout<<"roar Power Remain: "<<roarcnt<<" (Press O to use)  "<<endl;
	if(lang==1)cout<<"���� ʣ��������"<<roarcnt<<" ����'O'ʹ�ã�  "<<endl;
	movec(wid*2+3,19);
	if(lang==0)cout<<"Speed Boost Power Remain: "<<bstcnt<<" (Press L to use/unuse)      "<<endl;
	if(lang==1)cout<<"���� ʣ��������"<<bstcnt<<"����'L'ʹ��/�����     "<<endl;
	if(smv>=Awk){
		movec(wid*2+3,25);
		lgreen_;
		if(lang==0)cout<<"Awaken!"<<endl;
		else if(lang==1)cout<<"�ɹ����ѣ�"<<endl;
		else{
			if(smv>=Awk)yellow_;
			else white_;
		}
	}
	movec(wid*2+3,27);
	if(lang==0)cout<<"Space - turn on/off the background music"<<endl;
	if(lang==1)cout<<"�� �ո�� ��ͣ/���� ��������"<<endl;
	return ;
}
void roar_dead(){
	if(roarcnt>0){
		roarcnt--;
		if(smv>=Awk){
			int vis1=rand()%2;
			if(vis1>=1)roarcnt++;
		}
		roarshow=1;
		sort(e+1,e+1+n,cmp);
		for(int i=1;i<=n/3;i++){
			if(smv>=Awk||abs(e[i].cx-m.cx)<=len/3&&abs(e[i].cy-m.cy)<=wid/3){
				e[i].dead=1;
			}
			else{
				if(abs(e[i].cx-m.cx)<=len/2&&abs(e[i].cy-m.cy)<=wid/2){
					int vis1=rand()%5;
					e[i].dead=(bool)vis1;
				}
				else if(abs(e[i].cx-m.cx)<=len*3/4&&abs(e[i].cy-m.cy)<=wid*3/4){
					int vis1=rand()%2;
					e[i].dead=(bool)vis1;
				}
				else{
					e[i].dead=0;
				}
			}	
		}
		sort(e+1,e+1+n,cmp2);
		while(n&&e[n].dead)n--;
		if(n<=n_/4){
			creat(n_/2);
		}
	}
	return ;
}
int rndx,rndy;
bool rndshow=0;
string rndstr;
int cdown=0;
void randmove(){
	rndshow=1;
	int choi=rand()%4;
	if(choi==0){
		Frecnt=min(Frecnt+maxf[setp]/2,maxf[setp]);
		rndstr="Freeze";
	}
	else if(choi==1){
		tpcnt=min(tpc[setp],tpcnt+tpc[setp]/2);
		rndstr="Teleport";
	}
	else if(choi==2){
		roarcnt=min(roar[setp],roarcnt+roar[setp]/2);
		rndstr="Roar";
	}
	else if(choi==3){
		bstcnt=maxbst[setp];
		rndstr="Boost";
	}
	cdown=500;
	return ;
}
void resetrnd(){
	rndx=0;
	rndy=0;
	return ; 
}
void rndgen(){
	rndx=rand()%len+1;
	rndy=rand()%wid+1;
	return ;
}
bool getrnd(){
	return (m.cx==rndx&&m.cy==rndy);
}
void output(){
	if(roarshow==1){
		roarshow=0;
		red_;
	}
	else if(tpshow==1){
		tpshow=0;
		green_;
	}
	else if(rndshow==1){
		rndshow=0;
		lgreen_;
	}
	movec(0,0);
	for(int i=1;i<=wid*2+2;i++)cout<<'=';
	cout<<endl;
	for(int i=1;i<=len;i++){
		cout<<'#';
		for(int j=1;j<=wid;j++){
			if(i==m.cx&&j==m.cy){
				//if(!frez)green_;
				cout<<"0 ";
			}
			else if(i==rndx&&j==rndy)cout<<"? ";
			else{
				bool vis1=0;
				for(int k=1;k<=n;k++){
					if(!e[k].dead&&i==e[k].cx&&j==e[k].cy){
						//if(!frez)red_;
						cout<<"1 ";
						vis1=1;
						break;
					}
				}
				if(!vis1){
					cout<<"  ";
				}
			}
		}
		cout<<'#'<<endl;
	}
	for(int i=1;i<=wid*2+2;i++)cout<<'=';
	cout<<endl;
	if(frez){
		movec(wid*2+3,22);
		if(lang==0)cout<<"Enemies Frozen!   "<<endl;
		if(lang==1)cout<<"�����Ѷ��ᣡ   "<<endl; 
	} 
	else{
		movec(wid*2+3,22);
		if(lang==0)cout<<"Enemies free     "<<endl;
		if(lang==1)cout<<"���������ɣ�   "<<endl; 
	}
	if(cdown>0){
		lgreen_;
		movec(wid*2+3,23);
		if(lang==0)cout<<rndstr<<" charged to full!"<<endl;
		else{
			if(rndstr=="Freeze")cout<<"�䶳";
			else if(rndstr=="Boost")cout<<"����";
			else if(rndstr=="Roar")cout<<"����";
			else if(rndstr=="Teleport")cout<<"����";
			cout<<" ����������"<<endl; 
		}
		if(frez)blue_;
		else if(bst)purple_;
		else{
			if(smv>=Awk)yellow_;
			else white_;
		}
		cdown--;
	}
	else{
		cout<<endl;
	}
	note();
	if(frez)blue_;
	else if(bst)purple_;
	else white_;
	return ;
}
// Hide Handle
void hidec(bool visi){
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); 
    CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hOut,&cci);
	cci.bVisible=visi;
	SetConsoleCursorInfo(hOut,&cci);
	return ;
}
void hidec(){
	CONSOLE_CURSOR_INFO cs={1,0};
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleCursorInfo(hOut,&cs);
	return ; 
}
void prepos(){
	m.cx=ox,m.cy=oy;
	smv=0;
	Frecnt=0;
	roarcnt=2;
	tpcnt=3;
	bstcnt=0;
	bst=0;
	frez=0;
	cdown=0;
	n=n_;
	resetrnd();
	return ;
}
bool emv(){
	for(int k=1;k<=n;k++){
		e[k].move();
		if(e[k].kill()){
			if(lang==0)cout<<"Game over!"<<endl;
			if(lang==1)cout<<"��Ϸ������"<<endl;
			return 1;
		}
	}
	return 0;
}
string cloc="\\";
void mus_init(){
	ifstream fin("modify_loc_here.txt");
	fin>>locstr;
	fin.close();
	for(int i=0;i<locstr.length();i++){
		if(locstr[i]==cloc[0]){
			string locstr1=locstr.substr(0,i+1)+cloc[0];
			if(i+1<locstr.length())locstr1=locstr1+locstr.substr(i+1,locstr.length()-i-1);
			i++;
			locstr=locstr1;
		}
	}
	cout<<"Music done loading!"<<endl;
	system("cls");
	return ;
}
int main(){
	mus_init();
	str1=locstr+"\\BGM-EZ.wav",str2=locstr+"\\BGM-II.wav";
	str3=locstr+"\\BGM-III.wav",str4=locstr+"\\BGM-IV.wav";
	str5=locstr+"\\BGM-I.wav",str6=locstr+"\\BGM-V.wav",strpau=locstr+"\\BGM-PAUSE.wav";
	srand(time(0));
	PlaySound(str6.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
	ios::sync_with_stdio(0);
	yellow_;
	cout<<"Welcome to little game [HIVE]-v1.1.2!          (By Kogenta)"<<endl;
	cout<<"��ӭ���� [СС�䳲]-1.1.2�棡                  �����ߣ�Kogenta��"<<endl; 
	cout<<endl;
	red_;
	cout<<"[Notice] Pressing Space at any time can shut down the music."<<endl;
	cout<<"[ע��] ��ʱ���¿ո���Խ�������ͣ"<<endl;
	white_;
	cout<<"This is a game inspired by [Dark Deception], as it may contain some elements of the original game, please contact us via following ways if there is any infringement so that we can delete or make a change right away!"<<endl;
	cout<<"����Ϸ�ܵ�[�ڰ���ƭ]�����������ݿ��ܰ���ԭ��Ϸ�Ĳ���Ԫ�أ�������Ȩ�������·�ʽ������֪Ϥ���Ա���Ļ�ɾ�����Ԫ�أ�"<<endl;
	cout<<"Tel : (+86)18070915368"<<endl;
	cout<<"QQ : 2088230443  (Email available)"<<endl; 
	red_;
	cout<<"Play music or not? (E/Q) (remember to turn on Caps-lock)"<<endl;
	cout<<"�Ƿ�����Ϸʱ�䲥�����֣����ǣ�E����Q��"<<endl;
	while(1){
		if(_kbhit()){
			char ch1=_getch();
			if(ch1==32){
				musicchk=not musicchk;
				if(musicchk==1){
					PlaySound(str6.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
				}
				else{
					PlaySound(strpau.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
				}
			}
			if(ch1>='a'&&ch1<='z')ch1-=('a'-'A');
			if(ch1=='E'){
				musicchk=1;
				break;
			}
			else if(ch1=='Q'){
				break;
			}
		}
	}
	white_;
	cout<<"********************"<<endl;
	updatelog();
	cout<<"********************"<<endl;
	thanklist();
	cout<<"********************"<<endl;
	cout<<"Please select your language."<<endl;
	cout<<"��ѡ����Ϸ���ԣ�1-���� 2-Ӣ��"<<endl;
	while(1){
		if(_kbhit()){
			char ch1=_getch();
			if(ch1==32){
				musicchk=not musicchk;
				if(musicchk==1){
					PlaySound(str6.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
				}
				else{
					PlaySound(strpau.c_str(), NULL, SND_FILENAME|SND_ASYNC|SND_LOOP|SND_NODEFAULT);
				}
			}
			if(ch1>='a'&&ch1<='z')ch1-=('a'-'A');
			if(ch1=='1'){
				lang=1;
				break;
			} 
			else if(ch1=='2'){
				lang=0;
				break;
			}
		}
	}
	cout<<"********************"<<endl; 
	rule();
	if(lang==0)cout<<"If you are clear, press E to continue."<<endl;
	cout<<endl;
	if(lang==1)cout<<"�������������������밴 E ����"<<endl;
	while(1){
		if(_kbhit){
			char ch1=_getch();
			if(ch1>='a'&&ch1<='z')ch1-=('a'-'A');
			if(ch1=='E')break;
		}
	}
	cout<<endl;
	lgreen_;
	cout<<"********************"<<endl;
	if(lang==0)cout<<"Step 1 - Define the size of your map with two numbers(single space separated, and no more than 55*65 & no less than 32*32, Please consider fitting the factuals of your screen):"<<endl;
	if(lang==1)cout<<"��һ�� - �����������趨��ͼ�ĳߴ磨����֮���ÿո��������������55*65����С��30*30��ע����Ӧ���Եĸ������أ�"<<endl; 
	if(lang==0)cout<<"For example : 50 50"<<endl;
	if(lang==1)cout<<"������50 50"<<endl;
	cin>>len>>wid;
	len=min(len,55),wid=min(wid,65);
	cout<<"********************"<<endl;
	if(lang==0)cout<<"Step 2- Set down your location with two numbers for your start (up~down : 1~"<<len<<", while left~right : 1~"<<wid<<")(single space separated):"<<endl;
	if(lang==1)cout<<"�ڶ��� - �����������趨�����ʼ���� ����~�£�1~"<<len<<", ��~�ң�1~"<<wid<<"��������֮���ÿո������"<<endl; 
	if(lang==0)cout<<"For example : 1 1"<<endl;
	if(lang==1)cout<<"������1 1"<<endl; 
	cin>>ox>>oy;
	ox=max(1,min(ox,len)),oy=max(1,min(oy,wid));
	cout<<"********************"<<endl;
	if(lang==0)cout<<"Step 3- Define numbers of your enemy(Not more than 1000)"<<endl;
	if(lang==1)cout<<"������ - ���õ��˵�������������1000��"<<endl; 
	if(lang==0)cout<<"For example : 500"<<endl;
    if(lang==1)cout<<"������500"<<endl;
	cin>>n_;
	n_=min(n_,1000);
	cout<<"********************"<<endl;
	if(lang==0)cout<<"Step 4- Select your level (Easy:0 to Hard:7 (If you consider yourself EXPERT enough, please input 8))"<<endl;
	if(lang==1)cout<<"���Ĳ� - �Զ����Ѷȵȼ����򵥣�0 �� ���ѣ�7�������Ϊ�Լ��㹻[ר��]��������8����"<<endl; 
	if(lang==0)cout<<"For example : 3"<<endl;
	if(lang==1)cout<<"������3"<<endl;
	cin>>setp;
	setp=min(setp,8);
	if(musicchk)BGMset();
	white_;
	while(1){
		system("cls");
		hidec();
		white_;
		hist();
		cout<<"********************"<<endl;
		ulti();
		cout<<"********************"<<endl;
		not1();
		prepos();
		char opt;
		bool vis2=0;
		while(1){
			if(_kbhit()){
				opt=_getch();
				if(opt==32){
					musicchk=not musicchk;
					BGMchk();
				}
		    	if(opt>='a'&&opt<='z')opt-=('a'-'A');
		    	if(opt=='E')break;
		    	else if(opt=='Q'){
		    		vis2=1;
		    		break;
		    	}
			}
		}
		if(vis2) break;
		system("cls");
		hidec();
		m.reset();
		for(int i=1;i<=n;i++)e[i].reset();
		int cnt=0;
		bool ed=0;
		while(1){
			tempsetp=setp;
		    cnt=(cnt+1)%lev[setp];
			while(n&&e[n].dead){
				n--;
			}
			int r=m.kbget();
			if(r==1){
				if(getrnd()){
					randmove();
					rndx=0,rndy=0;
				}
				if(!frez){
					smv++;
					if(smv%fre[setp]==0&&Frecnt<=maxf[setp])Frecnt++;
				}
				else{
					Frecnt--;
					if(smv>=Awk){
						int vis1=rand()%3;
						if(vis1>0)Frecnt++;
					}
					if(Frecnt==0){
						frez=0;
						if(smv>=Awk)yellow_;
						else white_;
					}
				}
				if(smv%4==0){
					if(bstcnt<maxbst[setp]&&!bst)bstcnt++;
				}
				if(smv%10==0){
					if(tpcnt<tpc[setp])tpcnt++;
				}
				if(smv%120==0){
					if(roarcnt<roar[setp])roarcnt++;
					if(n<=900){
						creat(n_/10);	
					}
					smv++;
				}
				if(smv>=250&&smv%200==0){
					rndgen();
				}
				int now=rand()%50;
				if(now>=lv2[setp]){
					ed=emv();
				}
				output();
				if(ed) break;
			}
			else if(r==-1)break;
			else if(r==2){
				prepos();
				n=n_;
				for(int k=1;k<=n;k++){
					e[k].reset();
				}
			}
			else if(r==3&&Frecnt>0){
				frez=not frez;
				if(frez)blue_;
				else{
					if(smv>=Awk)yellow_;
					else white_;
				}
			}
			else if(r==4){
				roar_dead();
			}
			else if(r==5){
				if(tmp.dir==0){
					for(int i=1;i<=n;i++){
						if(e[i].cy==tmp.cord)e[i].dead=1;
					}
					if(smv>=Awk){
						for(int i=1;i<=n;i++){
							if(e[i].cx==tmp.cord)e[i].dead=1;
						}
						for(int i=1;i<=n;i++){
							if(e[i].cy==tmp.cord-1)e[i].dead=1;
						}
						for(int i=1;i<=n;i++){
							if(e[i].cy==tmp.cord+1)e[i].dead=1;
						}
					} 
					if(rndy==tmp.cord){
						randmove();
						resetrnd();
					}
				}
				else if(tmp.dir==1){
					for(int i=1;i<=n;i++){
						if(e[i].cx==tmp.cord)e[i].dead=1;
					}
					if(smv>=Awk){
						for(int i=1;i<=n;i++){
							if(e[i].cy==tmp.cord)e[i].dead=1;
						}
						for(int i=1;i<=n;i++){
							if(e[i].cx==tmp.cord-1)e[i].dead=1;
						}
						for(int i=1;i<=n;i++){
							if(e[i].cx==tmp.cord+1)e[i].dead=1;
						}
					}
					if(rndx==tmp.cord){
						randmove();
						resetrnd();
					}
				}
				sort(e+1,e+1+n,cmp2);
				while(n&&e[n].dead)n--;
				if(n<=n_/5){
					creat(n_/4);
				}
			}
			else if(r==6){
				break;
			}
			movec(0,len+5);
			if(cnt==1){
				if(!frez)smv++;
				ed=emv();
				output();
				if(ed) break;
			}
			if(n==0){
				n=20;
				for(int k=1;k<=n;k++){
					e[k].reset();
				}
			}
			BGMchk();
		}
		white_;
		system("cls");
		movec(0,0);
		if(lang==0)cout<<"You made it through "<<smv<<" rounds! "<<endl;
		if(lang==1)cout<<"��Ź��� "<<smv<<" �غϣ�"<<endl; 
		bsc=max(bsc,smv);
		if(lang==0)cout<<"R - Restart    Q - Confirm quit"<<endl;
		if(lang==1)cout<<"�� R �ؿ�      �� Q ȷ���˳�"<<endl;
		vis2=0;
		while(1){
			if(_kbhit()){
				opt=_getch();
				if(opt==32){
					musicchk=not musicchk;
					BGMchk();
				}
			    if(opt>='a'&&opt<='z')opt-=('a'-'A');
			    if(opt=='R')break;
		    	else if(opt=='Q'){
		    		vis2=1;
		    		break;
		    	}
			}    
		}
		chkenm();
		if(vis2) break;
	}
	lgreen_;
	cout<<endl;
	if(lang==0)cout<<"Thanks for playing!"<<endl;
	if(lang==1)cout<<"��л�������棡"<<endl;
	green_;
	cout<<"********************"<<endl;
	contactus();
	cout<<"********************"<<endl;
	white_;
	system("pause");
	return 0;
}
