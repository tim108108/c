struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE *creatList(int *,int);
void printList(NODE *);
void freeList(NODE *);
NODE *searchNode(NODE *,int);
void insertNode(NODE *,int);
NODE *deleteNode(NODE *,NODE *);