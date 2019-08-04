#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<math.h>

int main()
{
     int len,current_x;
    char ch,ch_len;


    gotoxy(10,2);
    printf("Input number of words for ur passphrase & press enter:");
    gotoxy(30,3);
    printf(" ============");
    gotoxy(30,4);
    printf("|            |");
     gotoxy(30,5);
    printf(" ============");
    gotoxy(30,4);


    gotoxy(0,9);
    printf("press enter to generate PassPhrase");
    gotoxy(10,10);
    printf(" ============");
    gotoxy(10,11);
    printf("|  GENERATE  |");
     gotoxy(10,12);
    printf(" ============");
    gotoxy(10,11);

    gotoxy(40,9);
    printf("press enter to generate PassPhrase");
    gotoxy(50,10);
    printf(" ============");
    gotoxy(50,11);
    printf("|    EXIT    |");
     gotoxy(50,12);
    printf(" ============");
    gotoxy(50,11);

    gotoxy(10,17);
    printf("Your Password Is: *****************************");

     gotoxy(31,4);
    scanf("%d",&len);

    Selection_Effect(10,10,"GENERATE");
    fflush(stdin);

    current_x=22;
    while(1)
    {
        fflush(stdin);
        ch=getche();
        if(current_x==36)
        {

            if(ch==13||ch==9)
            {
                gotoxy(30,3);
                Selection_Effect_Out(30,3,"        ");
                Selection_Effect(10,10,"GENERATE");
                gotoxy(31,4);
                printf("%d",len);
                gotoxy(22,11);
                current_x=22;

            }

            else if(ch>=48&&ch<=57)
            {
                len=ch-48;
                ch_len=getche();
                while(ch_len!=13&&ch_len!=9)
                {
                   len=len*10+ch_len-48;
                   ch_len=getche();
                }
                if(ch_len==13)
                {
                    gotoxy(31,4);
                    printf("            ");
                    gotoxy(31,4);
                    printf("%d",len);
                    gotoxy(36,4);
                }
                else
                {
                    gotoxy(30,4);
                    printf("       ");
                    gotoxy(30,4);
                    printf("%d ",len);
                    gotoxy(22,11);
                    current_x=23;
                }
            }
            else
            {
                MessageBeep(1);
                MessageBoxA(NULL,"invalid input","ERROR!!!",MB_OK);
                gotoxy(36,4);
            }
        }
      else if(current_x==22)
        {

            if(ch==13)
            {
                Show_PassPhrase(len);
                gotoxy(22,11);
            }
            else if(ch==9)
            {
                Selection_Effect_Out(10,10,"GENERATE");
                Selection_Effect(50,10,"  EXIT  ");
                gotoxy(62,11);
                current_x=62;
            }
            else
            {
               // printf("%d",ch);
                MessageBeep(1);
                MessageBoxA(NULL,"invalid input","ERROR!!!",MB_OK);
                gotoxy(22,11);
            }
        }

        else
        {
            if(ch==13)
            {
                gotoxy(30,20);
                printf("Thank You\n\n\n");
                break;

            }
            else if(ch==9)
            {
                gotoxy(36,4);
                current_x=36;
                Selection_Effect_Out(50,10,"  EXIT  ");
               Selection_Effect(30,3,"        ");
                 gotoxy(31,4);
                 printf("%d",len);
                 gotoxy(36,4);

            }
            else
            {
                MessageBeep(1);
                MessageBoxA(NULL,"invalid input","ERROR!!!",MB_OK);
                gotoxy(36,4);
            }
        }
    }
        return 0;
}
