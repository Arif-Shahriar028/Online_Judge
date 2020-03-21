#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,a,i,x4,y4,c,A;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
        x4=x1+x3-x2;
        y4=y1+y3-y2;
        A=(x1*y2+x2*y3+x3*y4+x4*y1-x1*y4-x4*y3-x3*y2-x2*y1)/2;
        printf("Case %d: %d %d %d\n",i+1,x4,y4,abs(A));
    }
}

