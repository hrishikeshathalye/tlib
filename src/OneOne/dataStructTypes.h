typedef struct node{
    unsigned long int tid;
    unsigned long int tidCpy;
    void* retVal;
    struct node* next;
} node;

typedef struct singlyLL{
    node *head;
    node *tail;
} singlyLL;

typedef unsigned long thread;
typedef struct funcargs{
    void (*f)(void *);
    void* arg;
    node* insertedNode;
} funcargs;

int singlyLLInit(singlyLL*);

node* singlyLLInsert(singlyLL*, unsigned long int);

int singlyLLDelete(singlyLL*, unsigned long int);

unsigned long int* returnTailTidAddress(singlyLL*);

unsigned long int* returnCustomTidAddress(singlyLL*, unsigned long int);

void persistTid(singlyLL *, unsigned long int);

int killAllThreads(singlyLL*, int signum);

void* getReturnValue(singlyLL *, thread);