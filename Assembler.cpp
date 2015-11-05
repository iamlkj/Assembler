#include<iostream>
#include<string>
using namespace std;
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
	
}
FILE *in;
FILE *out;
string filename;
int errorflag;
int count;
int labcount;
int findopmode(string line)
{
	//for(int k=35;k<80;k++)line[k]=0;
	if(line[0]=='.')return -1;
	line[8]=0;
	line[15]=0;
	line[16]=0;
	line[35]='\0';
	
	
	for(int i=0;i<82;i++)
	{
		
		if(line.find(optab[i].op)!=string::npos)
		{
			
			return optab[i].f;
			//system("pause");
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
    labtab[labcount].label=tmp;
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
    for(int i=0;i<x;i++)
    {
        c=1;
        for(int j=5;j>=0;j--)
        {
            count[i]=count[i]+c;
            c=0;
            if(count[i]>'F')
            {
                c=1;
                count[i]=count[i]-'G'+'0';
            }
            else if(count[i]>'9')
            {
                count[i]=count[i]-'0'-10+'A';   
            }
        }
    }
}
int main()
{
	char* end;
	char tmp[80];
	char count[7];
	count[6]='\0';
	in=fopen("input.asm","r");
	out=fopen("output.txt","w");
	setoptab();
		//system("pause");
	fgets(tmp,79,in);
	
	int start=findopmode(tmp);
	
//	cout<<start;
	
	if(start==5)
	{
		
		string tt=tmp;
		char buffer[20];
		
		tt.copy(buffer,6,0);
		buffer[6]='\0';
		filename="H";
		filename=filename+buffer;
		findoffset(tmp,count);
		
		end=fgets(tmp,79,in);
		cout<<filename;
		cout<<count;
		system("pause");
		
	}
	else filename="H      ";
	while(end!=NULL)
	{
        if(tmp[0]=='.')goto cmd;
		findlabel(tmp,count);
		if(findopmode(tmp)==)
		{
               
        }
                
		addcount(count,3);
		cmd:
	}
	
	
	
	
	
	
}
