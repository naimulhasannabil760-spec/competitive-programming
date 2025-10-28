#include<stdio.h>
#include<string.h>
int main()
{
    char s[1005];
    scanf("%s",s);
    int n=strlen(s);
    char s2[1005];
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        s2[i]=s[j];
        j--;
    }
    s2[n]='\0';
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(s2[i]!=s[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}
