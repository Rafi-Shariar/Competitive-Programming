#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    int i;
    gets(s);
    int k=0,j=0;
    int ans[30];
    for(i=strlen(s)-1;i>=0;i--)
    {
        if(j==3)
        {
            ans[k++]=',';
            ans[k++]=s[i];
            j=0;
        }
        else
            ans[k++]=s[i];
     j++;

    }

    for(i=k-1;i>=0;i--)
    {
        printf("%c",ans[i]);
    }


}