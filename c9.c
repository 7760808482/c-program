#include<stdio.h>
int main()
{
    int a[100],n,data,i,pos=-1;
    printf("Enter the number of element in an arry:");
    scanf("%d",&n);
    printf("Enter the %d elements of sn array:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter the element to be searched:\n");
        scanf("%d",&data);
        for(i=0;i<n;i++)
        {
            if(a[i]==data)
            {
                pos=i;
                break;
            }
        } 
        if(pos>=0)
        printf("Element found at the position :%d\n",pos+1);
        else
        printf("element not found:\n");
}
