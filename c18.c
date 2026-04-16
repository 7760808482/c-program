//worst fit allocation
#include<stdio.h>
int main()
{
    int fragments[10],blocks[10],files[10];
    int m,n,number_of_blocks,number_of_files,temp,top=0;
    static int block_arr[10],file_arr[10];
    printf("Enter the total number of block:");
    scanf("%d",&number_of_blocks);
    printf("Entert the number of files:");
    scanf("%d",&number_of_files);
    printf("Enter the size of the blocks:\n");
    for(m=0;m<number_of_blocks;m++)
    {
        printf("Block number[%d]:\t",m+1);
        scanf("%d",&blocks[m]);


    }
    printf("Enter the size of the files:\n");
    for(m=0;m<number_of_files;m++)
    {
        printf("file number[%d]:\t",m+1);
        scanf("%d",&files[m]);
    }
    for(m=0;m<number_of_files;m++)
    {
        for(n=0;n<number_of_blocks;n++)
        {
            if(block_arr[n]!=1)
            {
                temp=blocks[n]-files[m];
                if(temp>=0)
                {
                    if(top<temp)
                    {
                        file_arr[m]=n;
                        top=temp;


                    }
                }

            }
            fragments[m]=top;
            block_arr[file_arr[m]]=1;
            top=0;
        }
    }
    printf("\n File Number \t File Size \t Block Number \t Block Size \t Fragment");
    for(m=0;m<number_of_files;m++)
    {
        printf("\n%d \t\t %d \t\t %d \t\t %d \t\t %d",m,files[m],file_arr[m],blocks[file_arr[m]],fragments[m]);
    }
    printf("\n");
    return 0;

}