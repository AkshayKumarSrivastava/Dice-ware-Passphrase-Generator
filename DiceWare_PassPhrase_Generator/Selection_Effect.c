void Selection_Effect(int x,int y,char str[])
{
    SetColor(2);
    gotoxy(x,y);
    printf(" ============");
    gotoxy(x,y+1);
    printf("|  %s  |",str);
     gotoxy(x,y+2);
    printf(" ============");
    gotoxy(x+12,y+1);
    SetColor(7);
}
