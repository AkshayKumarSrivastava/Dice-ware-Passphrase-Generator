void Selection_Effect_Out(int x,int y,char str[])
{
    SetColor(7);
    gotoxy(x,y);
    printf(" ============");
    gotoxy(x,y+1);
    printf("|  %s  |     ",str);
     gotoxy(x,y+2);
    printf(" ============");
}
