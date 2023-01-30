#define SETBIT(a,pos) (a|=(1<<pos))
#define CLRBIT(a,pos) (a&=~(1<<pos))
#define TOGBIT(a,pos) (a^=(1<<pos))
#define TESBIT(a,pos) (a&(1<<pos)) 

void string_reverse(char *,int);/*反轉目標,目標長度*/
void uplowcase(char *,int ,bool);/*目標,目標長度,大寫/小寫*/
int setbit(int ,int ,bool);/*setbit，目標,位置,set/cln*/
void point();/*指標相關實驗*/
double leibniz(int);/*利用萊布尼茲法計算pi*/