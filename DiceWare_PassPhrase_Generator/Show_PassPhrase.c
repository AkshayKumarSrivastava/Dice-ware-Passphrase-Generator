#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>

void Show_PassPhrase(int len)
{
    int i,j,rand[6];
    char str_file[13];
    FILE *fp;

    fp=fopen("DiceWare_Dictionary.txt","r");
    gotoxy(28,17);
    printf("                                                                       ");
    gotoxy(30,17);
    for(i=1;i<=len;i++)
    {
        for(j=0;j<5;j++)
        {
            rand[j]=1+generate(6);
        }
        delay(13+i);
         while(1)
        {
            memset(str_file,0,13);
            fgets(str_file,12,fp);
            if(str_file[0]-48==rand[0] && str_file[1]-48==rand[1] && str_file[2]-48==rand[2] && str_file[3]-48==rand[3] && str_file[4]-48==rand[4])
            {
                break;
            }
        }
        strcpy(str_file,str_file+6);
       j=strlen(str_file);
        if(str_file[j-1]=='\n')
       {
           str_file[j-1]='\0';
       }

       printf("%s ",str_file);
        rewind(fp);
    }
}
