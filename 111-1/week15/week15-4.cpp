#include <stdio.h>
char line[3000];
int main()
{
    printf("½Ð¿é¤J¦r¥À: ");
    scanf("%s",line);
    int n=0;
    for (int i=0;line[i]!=0;i++)
    {
        n++;
    }
    for (int i=n-1;i>=0;i--)
    {
        printf("%c",line[i]);
    }
}
