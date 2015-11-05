#include<iostream>
#include<string>
#include <fstream>
using namespace std;
#define opmax 82
class ops
{
	public:
	string op;
	string code;
	int f;
}optab[100];
class lab
{
	public:
	string label;
	char adr[6];
}labtab[1000];
class TTAB
{
	
	public:
		TTAB()
		{
		chg=0;	
		}
	string obj;
	int chg;
	char adr[6];
}t[1000];
class MTAB
{
	
	public:
	string obj;	
}m[1000];
void setoptab()
{	
	optab[0].op="ADD   ";
	optab[0].code="18";
	optab[0].f=3;
	
	optab[4].op="+ADD  ";
	optab[4].code="18";
	optab[4].f=4;
	
	optab[1].op="AND   ";
	optab[1].code="40";
	optab[1].f=3;
	
	optab[1].op="+AND  ";
	optab[1].code="40";
	optab[1].f=4;
	
	optab[2].op="ADDR  ";
	optab[2].code="90";
	optab[2].f=2;
	
	optab[3].op="CLEAR ";
	optab[3].code="B4";
	optab[3].f=2;
	
	optab[5].op="COMP  ";
	optab[5].code="28";
	optab[5].f=3;

	optab[6].op="+COMP ";
	optab[6].code="28";
	optab[6].f=4;
	
	optab[7].op="COMPR ";
	optab[7].code="A0";
	optab[7].f=2;
	
	optab[8].op="DIV   ";
	optab[8].code="24";
	optab[8].f=3;
	
	optab[9].op="+DIV  ";
	optab[9].code="24";
	optab[9].f=4;
	
	optab[10].op="DIVR  ";
	optab[10].code="9C";
	optab[10].f=2;
	
	optab[11].op="J     ";
	optab[11].code="3C";
	optab[11].f=3;
	
	optab[12].op="+J    ";
	optab[12].code="3C";
	optab[12].f=4;
	
	optab[13].op="JEQ   ";
	optab[13].code="30";
	optab[13].f=3;
	
	optab[14].op="+JEQ  ";
	optab[14].code="30";
	optab[14].f=4;
	
	optab[15].op="JGT   ";
	optab[15].code="34";
	optab[15].f=3;

	optab[16].op="+JGT  ";
	optab[16].code="34";
	optab[16].f=4;
		
	optab[17].op="JLT   ";
	optab[17].code="38";
	optab[17].f=3;
	
	optab[18].op="+JLT  ";
	optab[18].code="38";
	optab[18].f=4;
	
	optab[19].op="JSUB  ";
	optab[19].code="48";
	optab[19].f=3;
	
	optab[20].op="+JSUB ";
	optab[20].code="48";
	optab[20].f=4;
	
	optab[21].op="LDA   ";
	optab[21].code="00";
	optab[21].f=3;
	
	optab[22].op="+LDA  ";
	optab[22].code="00";
	optab[22].f=4;
	
	optab[23].op="LDB   ";
	optab[23].code="68";
	optab[23].f=3;
	
	optab[24].op="+LDB  ";
	optab[24].code="68";
	optab[24].f=4;
	
	optab[25].op="LDCH  ";
	optab[25].code="50";
	optab[25].f=3;
	
	optab[26].op="+LDCH ";
	optab[26].code="50";
	optab[26].f=4;
	
	optab[27].op="LDL   ";
	optab[27].code="08";
	optab[27].f=3;
	
	optab[28].op="+LDL  ";
	optab[28].code="08";
	optab[28].f=4;
	
	optab[29].op="LDS   ";
	optab[29].code="6C";
	optab[29].f=3;
	
	optab[30].op="+LDS  ";
	optab[30].code="6C";
	optab[30].f=4;
	
	optab[31].op="LDT   ";
	optab[31].code="74";
	optab[31].f=3;
	
	optab[32].op="+LDT  ";
	optab[32].code="74";
	optab[32].f=4;
	
	optab[33].op="LDX   ";
	optab[33].code="04";
	optab[33].f=3;
	
	optab[34].op="+LDX  ";
	optab[34].code="04";
	optab[34].f=4;
	
	optab[35].op="LPS   ";
	optab[35].code="D0";
	optab[35].f=3;
	
	optab[36].op="+LPS  ";
	optab[36].code="D0";
	optab[36].f=4;
	
	optab[37].op="MUL   ";
	optab[37].code="20";
	optab[37].f=3;
	
	optab[38].op="+MUL  ";
	optab[38].code="20";
	optab[38].f=4;
	
	optab[39].op="MULR  ";
	optab[39].code="98";
	optab[39].f=2;
	
	optab[40].op="OR    ";
	optab[40].code="44";
	optab[40].f=3;
	
	optab[41].op="+OR   ";
	optab[41].code="44";
	optab[41].f=4;
	
	optab[42].op="RD    ";
	optab[42].code="D8";
	optab[42].f=3;
	
	optab[43].op="+RD   ";
	optab[43].code="D8";
	optab[43].f=4;
	
	optab[44].op="RMO   ";
	optab[44].code="AC";
	optab[44].f=2;
	
	optab[45].op="RSUB  ";
	optab[45].code="4C";
	optab[45].f=3;
	
	optab[46].op="+RSUB ";
	optab[46].code="4C";
	optab[46].f=4;
	
	optab[47].op="SHIFTL";
	optab[47].code="A4";
	optab[47].f=2;
	
	optab[48].op="SHIFTR";
	optab[48].code="A8";
	optab[48].f=2;
	
	optab[49].op="STA   ";
	optab[49].code="0C";
	optab[49].f=3;
	
	optab[50].op="+STA  ";
	optab[50].code="0C";
	optab[50].f=4;
	
	optab[51].op="STB   ";
	optab[51].code="78";
	optab[51].f=3;
	
	optab[52].op="+STB  ";
	optab[52].code="78";
	optab[52].f=4;
	
	optab[53].op="STCH  ";
	optab[53].code="54";
	optab[53].f=3;
	
	optab[54].op="+STCH ";
	optab[54].code="54";
	optab[54].f=4;
	
	optab[55].op="STI   ";
	optab[55].code="D4";
	optab[55].f=3;
	
	optab[56].op="+STI  ";
	optab[56].code="D4";
	optab[56].f=4;
	
	optab[57].op="STL   ";
	optab[57].code="14";
	optab[57].f=3;
	
	optab[58].op="+STL  ";
	optab[58].code="14";
	optab[58].f=4;
	
	optab[59].op="STS   ";
	optab[59].code="7C";
	optab[59].f=3;
	
	optab[60].op="+STS  ";
	optab[60].code="7C";
	optab[60].f=4;
	
	optab[61].op="STSW  ";
	optab[61].code="E8";
	optab[61].f=3;
	
	optab[62].op="+STSW ";
	optab[62].code="E8";
	optab[62].f=4;
	
	optab[63].op="STT   ";
	optab[63].code="84";
	optab[63].f=3;
	
	optab[64].op="+STT  ";
	optab[64].code="84";
	optab[64].f=4;
	
	optab[65].op="STX   ";
	optab[65].code="10";
	optab[65].f=3;
	
	optab[66].op="+STX  ";
	optab[66].code="10";
	optab[66].f=4;
	
	optab[67].op="SUB   ";
	optab[67].code="1C";
	optab[67].f=3;
	
	optab[68].op="+SUB  ";
	optab[68].code="1C";
	optab[68].f=4;
	
	optab[69].op="SUBR  ";
	optab[69].code="94";
	optab[69].f=2;
	
	optab[70].op="TD    ";
	optab[70].code="E0";
	optab[70].f=3;
	
	optab[71].op="+TD   ";
	optab[71].code="E0";
	optab[71].f=4;
	
	optab[72].op="TIX   ";
	optab[72].code="2C";
	optab[72].f=3;
	
	optab[73].op="+TIX  ";
	optab[73].code="2C";
	optab[73].f=4;
	
	optab[74].op="TIXR  ";
	optab[74].code="B8";
	optab[74].f=2;
	
	optab[75].op="WD    ";
	optab[75].code="DC";
	optab[75].f=3;
	
	optab[76].op="+WD   ";
	optab[76].code="DC";
	optab[76].f=4;
	
	optab[76].op="START ";
	optab[76].f=5;
	
	optab[77].op="END   ";
	optab[77].f=6;
	
	optab[78].op="WORD  ";
	optab[78].f=7;
	
	optab[79].op="RESW  ";
	optab[79].f=8;
	
	optab[80].op="RESB  ";
	optab[80].f=9;
	
	
	
	optab[81].op="BYTE  ";
	optab[81].f=10;
	
	optab[82].op="BASE  ";
	optab[82].f=11;
}
FILE *in;
FILE *out;
string filename;
char flag;
int findit;
int errorflag;
int count;
int labcount;
int mcount;
int tcount;

string findop(string line)
{
	if(line[0]=='.')return 0;
	line[8]=0;
	line[15]=0;
	line[16]=0;
	line[35]='\0';
	
	
	for(int i=0;i<opmax+1;i++)
	{
		
		if(line.find(optab[i].op)!=string::npos)
		{
			
			return optab[i].code;
			
		}
	}
	
	return 0;
	
}
int findopmode(string line)
{
	//for(int k=35;k<80;k++)line[k]=0;
	if(line[0]=='.')return -1;
	line[8]=0;
	line[15]=0;
	line[16]=0;
	line[35]='\0';
	
	
	for(int i=0;i<opmax+1;i++)
	{
		
		if(line.find(optab[i].op)!=string::npos)
		{
			
			return optab[i].f;
			
		}
	}
	
	return -1;
}
int findlabel(string line,char*count)
{
	if(line[0]=='.')return 0;
	char buffer[20];
	int chk=0;
	line.copy(buffer,8,0);
	buffer[8]='\0';
	for(int i=0;i<8;i++)
	{
        if(buffer[i]==' ')chk++;   
    }
    if(chk==8)return 0;
    string tmp=buffer;
    for(int i=0;i<labcount;i++)
    {
        
        if(labtab[i].label==tmp)
        {
            errorflag=1; 
            return 0;
        }   
    }
    int i=0;
    while(tmp[i]!=' ')
    {
		labtab[labcount].label=labtab[labcount].label+tmp[i];
		i++;
	}
    for(int i=0;i<6;i++)
    {
        labtab[labcount].adr[i]=count[i];   
    }
	labcount++;
	return 1;
	
}
int findoffset(char* head,char* c)
{
	for(int j=0;j<6;j++)c[j]='0';
	int k=5;
	for(int i=34;i>=17;i--)
	{
		
		if(head[i]>='0'&&i<='9')
		{
			c[k]=head[i];
			k--;	
		}	
	}
	
}
void addcount(char*count,int x)
{
    int c=1;
    for(int j=0;j<x;j++)
    {
        c=1;
        for(int i=5;i>=0;i--)
        {
            count[i]=count[i]+c;
            c=0;
            if(count[i]>'F')
            {
                c=1;
                count[i]=count[i]-'G'+'0';
            }
            else if(count[i]==':')
            {
                count[i]=count[i]-'0'-10+'A';   
            }
           
        }
         
    }
    //cout<<x<<"hahaha";
}
int findimmediate(char* line)
{
	int x=0;
	int i=17;
	while(i<35 && line[i]>='0'&&line[i]<='9')	
	{
		x=10*x+(line[i]-'0');	
		i++;
	}
	return x;
}
void copyadr(char*adr,char*count)
{
	for(int i=0;i<6;i++)adr[i]=count[i];	
}
string findr(string haha)
{
	string rcode;
	if(haha[17]=='X')rcode=rcode+'1';	
	else if(haha[17]=='A')rcode=rcode+'0';
	else if(haha[17]=='L')rcode=rcode+'2';
	else if(haha[17]=='B')rcode=rcode+'3';
	else if(haha[17]=='S')rcode=rcode+'4';
	else if(haha[17]=='T')rcode=rcode+'5';
	else if(haha[17]=='F')rcode=rcode+'6';
	
	if(haha[19]=='X')rcode=rcode+'1';	
	else if(haha[19]=='A')rcode=rcode+'0';
	else if(haha[19]=='L')rcode=rcode+'2';
	else if(haha[19]=='B')rcode=rcode+'3';
	else if(haha[19]=='S')rcode=rcode+'4';
	else if(haha[19]=='T')rcode=rcode+'5';
	else if(haha[19]=='F')rcode=rcode+'6';
	else rcode=rcode+'0';
	return rcode;
}
string findsym(string tt)
{
	//cout<<tt<<"()";
	
	string tmp;
	int i;
	for( i=17;i<24;i++)
	{
		
		if(tt[i]==' '||tt[i]==0 || tt[i]==10 ||tt[i]=='\0')break;
		tmp=tmp+tt[i];
	}
	
	
	
		tmp=tmp+"    ";


	for(int i=0;i<labcount;i++)
	{
		if(tmp.find(labtab[i].label)!=string::npos || labtab[i].label.find(tmp)!=string::npos)
		{
			
			findit=1;
			//cout<<"###"<<"find!"<<labtab[i].label<<"###";
			
			return labtab[i].adr;	
		}
	}
	
	
	findit=0;
	return tmp;
}
void addflag(int x)
{
	flag=flag+x;
	if(flag>'9'&&flag<'A')flag=flag-'0'-10+'A';	
}
void addop(int tcount,int x)
{
	int carry=0;
	t[tcount].obj[1]=t[tcount].obj[1]+x;
	//cout<<"<<<"<<t[tcount].obj<<">>>";
	if(t[tcount].obj[1]>'F')
	{
		carry=1;
		t[tcount].obj[1]=t[tcount].obj[1]-'G'+'0';
	}
	else if(t[tcount].obj[1]>'9' && t[tcount].obj[1]<'A')
	{
		t[tcount].obj[1]=t[tcount].obj[1]-'0'-10+'A';
	}
	if(carry)
	{
		t[tcount].obj[0]=t[tcount].obj[0]+1;
		if(t[tcount].obj[0]>9&&t[tcount].obj[0]<'A')
		{
			t[tcount].obj[0]=t[tcount].obj[0]-'0'-10+'A';
		}
	}
	
}
int subadr(string& ans,string a,string b,int f)
{
	//cout<<"!!"<<a<<"!!"<<b<<endl;
	
		char tmp[6];
		int chk=0;
		int bo=0;
		while(chk<=5 && a[chk]==b[chk])chk++;
		if(chk==6)
		{
			int i=f;
			while(i!=6)
			{
				ans=ans+"0";
				i++;
			}
			//cout<<ans;
			//system("pause");
			return 1;	
		}
		if(b[chk]>a[chk])return 0;
		
		for(int i=5;i>=0;i--)
		{
			if(a[i]>='A')a[i]=a[i]-'A'+10;
			else a[i]=a[i]-'0';
			if(b[i]>='A')b[i]=b[i]-'A'+10;
			else b[i]=b[i]-'0';
			if((a[i])>=(b[i]+bo))
			{
				tmp[i]=(a[i])-(b[i]+bo)+'0';
				if(tmp[i]>'9')tmp[i]=tmp[i]-'0'-10+'A';
				bo=0;
			}
			else
			{
				
				tmp[i]=(a[i]+16)-(b[i]+bo)+'0';
				if(tmp[i]>'9')tmp[i]=tmp[i]-'0'-10+'A';
				bo=1;
				
			}
		}
		for(int i=f;i<=5;i++)ans=ans+tmp[i];
		return 1;
}
int findx(char* tt)
{
	int x=17;
	while(tt[x]!=',' && x<35)x++;
	if(x>=35)return 0;
	else if(tt[++x]=='X')return 1;	
}
int big(string a,string b)
{
	int i=0;
	while(a[i]==b[i] && i<6)i++;
	if(i==6)return 1;
	if(a[i]>b[i])return 1;
	else return 0;
}

int main()
{
	int headf=0;
	char base[7];
	char* end;
	char tmp[80];
	char count[7];
	string headhead;
	count[6]='\0';
	base[6]='\0';
	in=fopen("input.asm","r");
	ofstream fout ("output.txt");
	setoptab();
		
	fgets(tmp,79,in);
	tmp[35]='\0';
	for(int i=36;i<79;i++)tmp[i]=0;
	
	int start=findopmode(tmp);
	
//	cout<<start;
	
	if(start==5)
	{
		headf=1;
		string tt=tmp;
		char buffer[20];
		
		tt.copy(buffer,6,0);
		buffer[6]='\0';
		filename="H";
		filename=filename+buffer;
		findoffset(tmp,count);
		headhead=count;
		filename=filename+count;
		end=fgets(tmp,79,in);
		cout<<filename;
		//cout<<count;
	
		
	}
	else filename="H      ";
	while(!(findopmode(tmp)==6&&tmp[0]!='.'))
	{
		int modetmp=findopmode(tmp);
        if(tmp[0]=='.')goto cmd;
		findlabel(tmp,count);
		
		if(modetmp==2)
		{
            addcount(count,2);
        }
        else if(modetmp==3)
        {
			addcount(count,3);
		}
		else if(modetmp==4)
		{
			addcount(count,4);	
		}
		else if(modetmp==7)
		{
			addcount(count,3);
		}
		else if(modetmp==8)
		{
			int imtmp=findimmediate(tmp);
			addcount(count,3*imtmp);
			
		}
		else if(modetmp==9)
		{
			int imtmp=findimmediate(tmp);
			addcount(count,imtmp);
			
		}
		else if(modetmp==10)
		{
			int k=0;
			int i=19;
			while(i<35 && tmp[i]!=39)
			{
				k++;
				i++;
			}
			if(tmp[17]=='X')
			{
				if(k%2)k=k/2+1;
				else k=k/2;	
			}
			else if(tmp[17]!='C')
			{
				errorflag=2;
			}
			addcount(count,k);
		}
		else
		{
			errorflag=3;
		}
		//addcount(count,3);
		cmd:
			cout<<count<<"   "<<tmp<<endl;
			for(int i=0;i<79;i++)tmp[i]=0;
			fgets(tmp,79,in);
			tmp[35]='\0';
			for(int i=36;i<79;i++)tmp[i]=0;
			
		
	}
	//header
	filename=filename+count;
	fout<<filename<<endl;
	
	//
	for(int i=0;i<labcount;i++)
	{
		cout<<labtab[i].label<<"="<<labtab[i].adr<<endl;	
	}
	
	fseek ( in , 0 , SEEK_SET );
	//fgets(tmp,79,in);
	
	
//cout<<"!!"<<tmp<<"!!"<<endl;
	
	///////////////////////////////////////pass2////////////////////////////////
	for(int i=0;i<79;i++)tmp[i]=0;
	fgets(tmp,79,in);
	tmp[35]='\0';
	//cout<<"!!"<<tmp<<"!!"<<endl;
	for(int i=36;i<79;i++)tmp[i]=0;
	for(int i=0;i<6;i++)count[i]='0';	
	//cout<<"!!"<<count<<"!!"<<endl;
	if(headf)
	{
		findoffset(tmp,count);
		//cout<<"!!"<<count<<"!!"<<endl;
		for(int i=0;i<79;i++)tmp[i]=0;
		fgets(tmp,79,in);
		tmp[35]='\0';
		for(int i=36;i<79;i++)tmp[i]=0;
	}
	else
	{
		for(int i=0;i<6;i++)count[i]='0';	
	}
	
	while(!(findopmode(tmp)==6&&tmp[0]!='.'))
	{
		flag='0';
		int modetmp=findopmode(tmp);
        if(tmp[0]=='.')goto p2cmd;
		findlabel(tmp,count);
		if(modetmp==2)
		{
			copyadr(t[tcount].adr,count);
            addcount(count,2);
            t[tcount].obj=findop(tmp);
            t[tcount].obj=t[tcount].obj+findr(tmp);
            cout<<""<<t[tcount].obj<<endl;
			
            tcount++;
        }
        else if(modetmp==3)
        {
			
			string test;
			copyadr(t[tcount].adr,count);
			addcount(count,3);
			t[tcount].obj=findop(tmp);
			
			if(findx(tmp))addflag(8);///////////////addflag
			string direct;/////findsym
			string final;
			string sttmp;
			//direct=findsym(tmp);
			findsym(tmp);
			
			
			if(findit==1)
			{
					
				direct=findsym(tmp);
			
			}
			
			else
			{
				//cout<<"!?";
				//system("pause");
				string haha;
				int i=18;
				while(tmp[i]>='0'&&tmp[i]<='9'&&i<35)
				{
					
					
					haha=haha+tmp[i];
					i++;
				}
				
				if(haha.size()<3)
				{
					while(haha.size()<3)
					{
						haha="0"+haha;	
					}
				}
				
				final=haha;
				
				//system("pause");
				goto flags;
			}
			//cout<<findsym(tmp);
				//cout<<"<<<<<<"<<direct<<">>>>>";
			
		
				if(big(direct,count)) 
				{
					
					 subadr(test,direct,count,0);
					 
				}
				else
				{
				
					
					string tmp;
					string ha="000FFF";
					subadr(tmp,count,direct,0);
					cout<<"@@@"<<tmp<<"  "<<count<<" "<<direct;
					subadr(test,ha,tmp,0);
					
					
					test[5]=test[5]+1;
					if(test[5]>'9'&&test[5]<'A')test[5]=test[5]-'0'-10+'A';
				}
			
			if(test[2]=='0')
			{
				for(int i=3;i<6;i++)final=final+test[i];
				addflag(2);
				//cout<<final;
			}
			else
			{
				cout<<"OK!!"<<direct<<"  "<<base;
				subadr(final,direct,base,3);
				
				addflag(4);
			}
	flags:		
			if(tmp[17]=='@')
			{
				addop(tcount,2);
			}
			else if(tmp[17]=='#')
			{
				addop(tcount,1);
			}
			else
			{
				addop(tcount,3);
			}
			t[tcount].obj=t[tcount].obj+flag+final;
		//cout<<tmp<<t[tcount].obj;
		//system("pause");
			tcount++;
			
			
		}
		else if(modetmp==4)
		{
			string direct;
			string final;
			addflag(1);
			t[tcount].obj=findop(tmp);
			if(findx(tmp))addflag(8);///////////////addflag
			copyadr(t[tcount].adr,count);
			
			findsym(tmp);
			if(findit==1)
			{
				direct=findsym(tmp);
				for(int i=1;i<6;i++)final=final+direct[i];
				
				string hahaha=count;
				hahaha[5]++;
				m[mcount].obj="M"+hahaha+"05";
				mcount++;
			}
			else
			{
				if(tmp[18]=='4')final="01000";
				
					errorflag=10;
			}
			addcount(count,4);
			if(tmp[17]=='@')
			{
				addop(tcount,2);
			}
			else if(tmp[17]=='#')
			{
				addop(tcount,1);
			}
			else
			{
				addop(tcount,3);
			}
			t[tcount].obj=t[tcount].obj+flag+final;
			
			tcount++;
			
			
			
		}
		else if(modetmp==7)
		{
			
			addcount(count,3);
		}
		else if(modetmp==8)
		{
			int imtmp=findimmediate(tmp);
			addcount(count,3*imtmp);
			t[tcount].chg=1;
			tcount++;
		}
		else if(modetmp==9)
		{
			int imtmp=findimmediate(tmp);
			addcount(count,imtmp);
			t[tcount].chg=1;
			tcount++;
		}
		else if(modetmp==10)
		{
			copyadr(t[tcount].adr,count);
			string final;
			int k=0;
			int i=19;
			while(i<35 && tmp[i]!=39)
			{
				k++;
				i++;
			}
			if(tmp[17]=='X')
			{
				for(int i=19;i<19+k;i++)
				{
					final=final+tmp[i];
				}
				if(k%2)k=k/2+1;
				else k=k/2;	
			}
			else if(tmp[17]=='C')
			{
				if(tmp[19]=='E'&&k==3)
				{
					final="454F46"	;
				}
			}
			
			else 
			{
				errorflag=2;
			}
			addcount(count,k);
			t[tcount].obj=final;
			cout<<t[tcount].obj;
			tcount++;
			
		}
		else if(modetmp==11)
		{
			string direct=findsym(tmp);
			for(int i=0;i<6;i++)
			{
				base[i]=direct[i];
			}
		}
		else
		{
			errorflag=3;
		}
		//addcount(count,3);
		p2cmd:
			cout<<tmp<<"  "<<t[tcount-1].obj<<endl;
			for(int i=0;i<79;i++)tmp[i]=0;
			fgets(tmp,79,in);
			tmp[35]='\0';
			for(int i=36;i<79;i++)tmp[i]=0;
			//system("pause");
	}
	int i=0;
	while(i<tcount)
	{
		string line;
		fout<<"T"<<t[i].adr;
		while(line.size()<60 && i<tcount)
		{
			cout<<line.size()<<"  "<<t[i].obj.size()<<"("<<t[i].obj<<")"<<endl;
			//system("pause");
			if(t[i].chg!=1 && line.size()+t[i].obj.size()<60&&i<tcount)
			{
				line=line+t[i].obj;
				i++;	
			}
			else if(t[i].chg==1) 
			{
				while(t[i].chg==1)i++;
				break;
			}
			else
			{
				break;
			}
		}
		if(line.size()/2>15)fout<<hex<<line.size()/2;
		else fout<<"0"<<hex<<line.size()/2;
		fout<<line<<endl;
		
	}
	i=0;
	while(i<mcount)
	{
		fout<<m[i].obj<<endl;
		i++;	
	}
	fout<<"E"<<headhead;
}
