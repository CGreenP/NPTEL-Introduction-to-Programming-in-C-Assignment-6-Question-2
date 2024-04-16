#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int size=0,i=0,count=0,cur_count=1;
    fgets(s,100,stdin);
    char res=s[0];
    while(s[i]!=0)
    {
        size++;
        i++;
    }
    for(i=0;i<size;i++)
    {
        if((i<size-1) && (s[i]==s[i+1]))
        {
            cur_count++;
        }
        else
        {
            if(cur_count>count)
            {
                count=cur_count;
                res=s[i];
            }
            cur_count=1;
        }
    }
    printf("%d",count);
    return 0;
}
