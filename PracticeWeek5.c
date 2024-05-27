#include<stdio.h>
void my_len(char * zero)
{
    int i;

    for(i=0;zero[i]!='\0';i++);

    printf("%d\n", i);

}

int main()
{ 
    char line[100];
    scanf("%s", line);

    my_len(line);

    return 0;
}
