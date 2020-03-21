#include<stdio.h>
#include<math.h>
int main()
{
    int ox,oy,ax,ay,bx,by,n,p,i;
    double r,d,angle,distance,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d %d %d",&ox,&oy,&ax,&ay,&bx,&by);
        r=(ox-ax)*(ox-ax)+(oy-ay)*(oy-ay);
        d=(bx-ax)*(bx-ax)+(by-ay)*(by-ay);
        sum=(2*r-d)/(2*r);
        angle=acos(sum);
        //printf("%lf\n",angle);
        distance=sqrt(r)*angle;
        printf("Case %d: %.8lf\n",i,distance);
    }
}
