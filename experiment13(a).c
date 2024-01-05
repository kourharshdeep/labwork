#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=open("myfile.txt","r");
    if(fp==NULL)
    {
        printf("Error opening file.\n");
        exit(0);
    }
    char buffer[50]
    while(fgets(buffer,sizeof(buffer),fp)!=NULL)
    {
        printf("%s",buffer);
    }
    fclose(fp);
    fp=fopen("my.file.txt", "w");
    if(fp==NULL)
    {
        printf("Error opening.");
        exit(0);
    }
    fprintf(fp,"This is some text.");
    fclose(fp);
}
