#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int checkaddr(char var[],int arr[],int n)
{
    int m=atoi(var);
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(m==arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int line=0,i=0,j,s,result;
    FILE *f1,*f2,*f3;
    char str[40],var1[4][10];
    f1=fopen("C:/Users/cse/Desktop/relocat-input1.txt","r");
    f2=fopen("C:/Users/cse/Desktop/relocat-input.txt","r");
    f3=fopen("C:/Users/cse/Desktop/relocat-output.txt","w");
    while(!feof(f1))
    {
        fgets(str,40,f1);
        line++;
    }
    fclose(f1);
    int arr1[line];
    f1=fopen("C:/Users/cse/Desktop/relocat-input1.txt","r");
    while(!feof(f1))
    {
        fgets(str,40,f1);
        strtok(str,"\n");
        char *ptr=strtok(str," ");
        while(ptr!=NULL)
        {
            static int m=0;
            arr1[m]=atoi(str);
            ptr=strtok(NULL," ");
            m++;
            s=m;
        }
    }
    fclose(f1);
    while(!feof(f2))
    {
        fgets(str,40,f2);
        strtok(str,"\n");

        char *ptr=strtok(str," ");
        while(ptr!=NULL)
        {
            strcpy(var1[i],ptr
             i++;
            ptr=strtok(NULL," ");
        }
            result=checkaddr(var1[0],arr1,s);
            if(result==1)
            {
                int x,c;
                for(x=0;x<i;x++)
                {
                    c=atoi(var1[x]);
                    if(x==0||x==3)
                    {
                        c=c+500;
                    }
                    fprintf(f3,"%d ",c);
                }
                fprintf(f3,"\n");
            }
            if(result==0)
            {
                int x,c;
                for(x=0;x<i;x++)
                {
                    c=atoi(var1[x]);
                    if(x==0)
                    {
                        c=c+500;
                    }
                    fprintf(f3,"%d ",c);
                }
                fprintf(f3,"\n");
            }

        i=0;
    }
}
