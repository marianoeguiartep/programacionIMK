#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char celdas[10][10];

    for(int j=0;j<10;j++)
    {
    for(int i=0;i<10;i++)
    {
        celdas[i][j]=' ';
    }
    }

    for(int j=0;j<10;j++)
    {
        for(int i=0;i<10;i++)
            {
                int num = rand() % 2;
                if(num==0)
            {
            celdas[i][j]='*';
            }else{
            celdas[i][j]=' ';
            }
        printf("[%c]",celdas[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    int evo=1;
    char celdas2[10][10];
    
    while(evo<5)
    {
        int v=0;
        for(int j=0;j<10;j++)
        {
        for(int i=0;i<10;i++)
        {
        celdas2[i][j]=celdas[i][j];
        if(celdas2[i][j]=='*')
        {
            if(celdas[i-1][j-1]=='*')
            {
                v++;
            }
            if(celdas[i][j-1]=='*')
            {
                v++;
            }
            if(celdas[i+1][j-1]=='*')
            {
                v++;
            }
            if(celdas[i-1][j]=='*')
            {
                v++;
            }
            if(celdas[i+1][j]=='*')
            {
                v++;
            }
            if(celdas[i-1][j+1]=='*')
            {
                v++;
            }
            if(celdas[i][j+1]=='*')
            {
                v++;
            }
            if(celdas[i+1][j+1]=='*')
            {
                v++;
            }
            if(v==2 || v==3)
            {
                celdas[i][j]='*';
            }
            if(v<2 || v>3)
            {
                celdas[i][j]=' ';
            }
            v=0;
            
        }else if(celdas[i][j]==' '){
            if(celdas[i-1][j-1]=='*')
            {
                v++;
            }
            if(celdas[i][j-1]=='*')
            {
                v++;
            }
            if(celdas[i+1][j-1]=='*')
            {
                v++;
            }
            if(celdas[i-1][j]=='*')
            {
                v++;
            }
            if(celdas[i+1][j]=='*')
            {
                v++;
            }
            if(celdas[i-1][j+1]=='*')
            {
                v++;
            }
            if(celdas[i][j+1]=='*')
            {
                v++;
            }
            if(celdas[i+1][j+1]=='*')
            {
                v++;
            }
            if(v==3)
            {
                celdas2[i][j]='*';
            }
            v=0;
        }
        
    }
    
    }
    printf("\n");

    for(int j=0;j<10;j++)
    {
    for(int i=0;i<10;i++)
    {
        printf("[%c]",celdas2[i][j]);
    }
    printf("\n");
    }

    for(int j=0;j<10;j++)
    {
    for(int i=0;i<10;i++)
    {
        celdas[i][j]=celdas2[i][j];
    }
    }
    evo++;
    printf("\n");
    }
}
