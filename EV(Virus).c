#include<stdio.h>
int main()
{
    printf("This is Encryption\nFirst you put the full name of file below to encrypt\n");
    char x[50];
    FILE *fp;
    printf("Enter the file name = ");
    gets(x);
    char y[5000],m[5000];
    fp=fopen(x,"r");
    if(fp==0)
    {
        printf("\n\nThere is no such file, Check spelling or type syntax\n");
        return 0;
    }
    FILE *lp;
    lp=fopen("roughFile.txt","w");
    int i,p;
    for(i=0;; i++)
    {
        fgets(y,5000,fp);
        strrev(y);
        p=rand();
        fprintf(lp,"%s%d%s%d\n",y,p);
        if(feof(fp))
            break;


    }
    fclose(fp);
    fclose(lp);
    lp=fopen("roughFile.txt","r");
    fp=fopen(x,"w");
    for(i=0;; i++)
    {
        fgets(m,5000,lp);

        if(feof(lp))
            break;
        fprintf(fp,"%s",m);


    }
    fclose(fp);
    fclose(lp);
    //AGAin
    fp=fopen(x,"r");
    if(fp==0)
    {
        printf("\n\nThere is no such file, Check spelling or type syntax\n");
        return 0;
    }
    lp=fopen("roughFile.txt","w");
    for(i=0;; i++)
    {
        fgets(y,5000,fp);
        p=rand();
        fprintf(lp,"%s%d%s%d\n",y,p);
        if(feof(fp))
            break;


    }
    fclose(fp);
    fclose(lp);
    lp=fopen("roughFile.txt","r");
    fp=fopen(x,"w");
    for(i=0;; i++)
    {
        fgets(m,5000,lp);

        if(feof(lp))
            break;
        fprintf(fp,"%s",m);


    }
    fclose(fp);
    fclose(lp);
    int q;
    q=remove("roughFile.txt");
    return 0;
}


