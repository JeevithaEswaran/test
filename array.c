#include<stdio.h>
void main()
{
int a,b,d[50],c[50],n,t1;
for(a=0;a<n;a++)
{
scanf("%d",&d[a]);
d[a]=c[b];
}
for(b=0;b<n;b++)
{
scanf("%d",&d[b]);
}
for(a=0;a<n;a++)
{
for(b=0;b<n;b++)
{
if(c[a]>d[b])
{
t1=d[a];
d[a]=d[b];
d[b]=t1;
t1=c[a];
d[a]=c[b];
c[b]=t1;
}
else if(c[a]==c[a+1])
{
if(d[a]>d[b])
{
t1=d[a];
d[a]=d[b];
d[b]=t1;
}
}
}

}
for(a=0;a<n;a++)
{
printf("%d",d[a]);
}
}
