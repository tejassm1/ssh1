#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<sys/stat.h>
int main(void)
{
int num;
srand(time(NULL));
int s=(rand()%(100));
printf("%d\n",s);
char rem[20],c;
printf("enter name : ");
scanf("%s",rem);
    
    FILE *fptr,*fs,*f,*fd;
    fptr=fopen(("/home/tej/%s.txt",rem),"w");
    if(fptr!=NULL)
    printf("file created");
    else
    printf("trsf"); 
    putw(s,fptr);
    fclose(fptr);
    fptr=fopen(("/home/tej/%s.txt",rem),"r");
    num=getw(fptr);
    printf("%d  :  num\n",num);
    fs=fopen("/home/tej/encrypt.c","a");
     if(fs!=NULL)
    printf("file created");
    else
    printf("uqughd");
    f=fopen("/home/tej/Documents/enc.c","r");
    c=fgetc(f);
    while(c!= EOF)
    {fputc(c,fs);
    c=fgetc(f);}
    fclose(f);
    fprintf(fs,"int s=%d;\n",s);
     fd=fopen("/home/tej/Documents/4.c","r");
     c=fgetc(fd);
    while(c!= EOF)
    {fputc(c,fs);
    c=fgetc(fd);}
    fclose(fs);
     fclose(fptr);
    return 0;
}
