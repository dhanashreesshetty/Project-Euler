#include<stdio.h>
#include<math.h>
int isTriangle(int n)
{
    double s=sqrt(n);
    if(s==floor(s))
        return 0;
    int a=(int)floor(s);
    int b=(int)ceil(s);
    if(a*b==n)
        return 1;
    else
        return 0;
}

void main()
{
    char words[100000];
    FILE* fp;
    fp=fopen("words.txt","r");
    fgets(words,100000,fp);
    int i=1,value,count=0;
    while(words[i]!='\0')
    {
        value=0;
        while(words[i]!='"')
            value+=((int)words[i++]-64);
        if(isTriangle(value*2))
            count++;
        i+=3;
    }
    printf("%d",count);
}
