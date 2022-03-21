#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
int num;
char rem[20],c;
printf("enter name : ");
scanf("%s",rem);
    
    FILE *fptr,*fs,*f;
    fptr=fopen(("/home/tej/Desktop/%s",rem),"r"); 
    if(fs!=NULL)
    printf("file created\n");
    else
    printf("uqughd");
    num=getw(fptr);
    printf("%d  :  num\n",num);
    fs=fopen("/home/tej/decrypt.c","a");
     if(fs!=NULL)
    printf("file created");
    else
    printf("uqughd");
    f=fopen("/home/tej/Documents/dec.c","r");
    c=fgetc(f);
    while(c!= EOF)
    {fputc(c,fs);
    c=fgetc(f);}
    fclose(fptr);
    fclose(f);
    fprintf(fs,"int s=%d;\n",num);
     f=fopen("/home/tej/Documents/4.c","r");
    c=fgetc(f);
    while(c!= EOF)
    {fputc(c,fs);
    c=fgetc(f);}
    fclose(fs);
    return 0;
}
