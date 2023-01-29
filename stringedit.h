#define SETBIT(a,pos) (a|=(1<<pos))
#define CLRBIT(a,pos) (a&=~(1<<pos))
#define TOGBIT(a,pos) (a^=(1<<pos))
#define TESBIT(a,pos) (a&(1<<pos)) 

void string_reverse(char *ptr,int len);
void uplowcase(char *ptr,int len,bool up);
int setbit(int a,int pos,bool b);
void point();
double leibniz(int n);