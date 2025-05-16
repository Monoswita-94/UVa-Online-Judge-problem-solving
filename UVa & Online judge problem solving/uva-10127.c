#include <stdio.h>

int main()
{
    int n,ones,c;

    while(scanf("%d",&n)==1){
        ones = 0;
        c =0;
        do{

            c = (c*10+1)%n;
            ones ++;
        }
        while(c!=0);
        printf("%d\n",ones);
    }
    return 0;
}
