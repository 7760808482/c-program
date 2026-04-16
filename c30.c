#include<stdio.h>
int main()
{
    int f[10],in=0,out=0,produce,consume,ch=0,bufsize=10;
    while(ch!=3)
    {
        printf("Enter your choice\n1.produce\t2.consume\t3.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                if((in+1)%bufsize==out)
                printf("Buffer is Full");
                else{
                    printf("Ente the value:");
                    scanf("%d",&produce);
                    f[in]=produce;
                    in=(in+1)%bufsize;
            
                }
                break;
            case 2:
                if(in==out)
                printf("Buffer is empty\n");
                else{
                    consume=f[out];
                    printf("The consume value is %d",consume);
                    out=(out+1)%bufsize;
                }
                break;
        }
    }
}