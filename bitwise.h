#define SETBIT(a,pos) (a|=(1<<pos))
#define CLRBIT(a,pos) (a&=~(1<<pos))
#define TOGBIT(a,pos) (a^=(1<<pos))
#define TESBIT(a,pos) (a&(1<<pos)) 

int setbit(int ,int ,bool);/*setbit，目標,位置,set/cln*/
void showbinary(int);