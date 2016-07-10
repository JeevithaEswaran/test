#include <stdio.h>
int main()
{
char c;
int i,j,n,no,nod,a=97,d;
char name[100];
printf("Enter the value n ");
scanf("%d",&n);
no=2*n;
nod=no-1;
for(i=0;i<no;i++)
  {
    name[i]=a;
    a++;
  }
d=nod;
j=2*n-1;
while(d!=0)
  {
    printf("\n The children pairs for day %d",d);
    for(i=0;i<2*n;i++)
  {
printf("\n %c %c",name[i],name[j]);
j--;
}
for(i=0;i<2*n;i++)
  {
    char temp;
    if(i==0)
  {
  temp=name[i];
  }
name[i]=name[i+1];
if(i==(2*n)-1)
  {
    name[i]=temp;
  }
}
d--;
}
return 0;
}


