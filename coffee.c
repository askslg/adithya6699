#include <stdio.h>

void main()
{
    int p,cp,tcp=0;
    scanf("%d %d",&cp,&p);
    if(p<=100&&p>=1&&cp<=10000&cp>=0)
    {
        p=100-p;
        tcp=cp;
        while(cp>1)
        {
            cp=(p*cp)/100;
            tcp=tcp+cp;
        }
        printf("%d\n",tcp);
    }
}
