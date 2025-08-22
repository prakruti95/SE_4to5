#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    
    printf("\n Data input output");
    
    fp = fopen("abc.txt","w");
    printf("\n Enter Any Character");
    //scanf("%c",&c);
    while((c=getchar())!='0')
    {
        putc(c,fp);
        
    }
    fclose(fp);
    
    printf("\n Read Data");
    fp = fopen("abc.txt","r");
    while((c=getc(fp))!=EOF)
    {	
        printf("%c",c);
    }
    fclose(fp);
     

    return 0;
}
