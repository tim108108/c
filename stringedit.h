#define SETBIT(a,pos) (a|=(1<<pos))
#define CLRBIT(a,pos) (a&=~(1<<pos))
#define TOGBIT(a,pos) (a^=(1<<pos))
#define TESBIT(a,pos) (a&(1<<pos)) 

void string_reverse(char *,int);
void uplowcase(char *,int ,bool);
int setbit(int ,int ,bool);
void point();
double leibniz(int);