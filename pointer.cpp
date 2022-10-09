#include <stdio.h>

void interchange(int *p,int *q){
	int tl;
	tl = *p;
	*p = *q;
	*q = tl;
}

int main()
{
    int a=40,b=90;
    int *p,*q;
    p=&a;
    q=&b;
    interchange(p,q);
    printf("%d %d\n", p,q);
    printf("%d %d\n", a,b);
    printf("%d %d", (*p),(*q));
}

