#include<stdio.h>

void convert(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-'a'+'A';

        }
        i++;
    }
}
int main()
{
    char str[100];
    printf("Enter a string\n");
    gets(str);
    convert(str);
    printf("Converted string: %s",str);
    return 0;
}
