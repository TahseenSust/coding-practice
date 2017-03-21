#include<stdio.h>
void transfer(int n,char from,char to,char temp);
int main()
{
int n;
printf("Welcome to the TOWER OF HANOI\n\n");
printf("How many disks? ");
scanf("%d",&n);
printf("\n");
transfer(n,'L','R','C');
return 0;
}

void transfer(int n,char from,char to,char temp)
{
    if(n>0)
    {
        transfer(n-1,from,temp,to);
        printf("Move disk %d from %c to %c\n",n,from,to);
        transfer(n-1,temp,to,from);
    }
}

