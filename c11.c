#include<stdio.h>
int main()
{
    int a[100],n,data,i,start=0,mid,end,pos=-1;
    printf("Enter the number of element :");
    scanf("%d",&n);
    printf("Enter the %d elements ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element to be searched :");
    scanf("%d",&data);
    start=0;
    end=n-1;
    while(start<=end)
    mid=(start+end)/2;
    {
        if(a[mid]==data)
        {
            pos=mid;
            
        }
        else if(a[mid]<data)
        start=mid+1;
        else
        end=mid-1;
    }
    if(pos!=-1)
    printf("Element found at position %d",pos+1);
    else
    printf("Element not found");
    
}