#include<stdio.h>

int findUniqueRows( int M[4][5] )
{
    
    int i,j,k,hash[20][20],flag=0,hindex=0;
    hash[0][0]=0;
    for(i=0;i<4;i++)
    {
        int str=0;
        for(j=0;j<5;j++)
        {
            //here str generates a string of number (by forming a number from digits)
            if(M[i][j]==0)
                str=str*10+0;
            else
                str=str*10+1;
        }
        if(i==0)
        {
            hash[hindex][0]=str;
            hash[hindex][1]=i;
            hindex++;
        }
        else
        {
            flag=0;
            for(k=i-1;k>=0;k--)
            {
                if(hash[k][0]==str)
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                hash[hindex][0]=str;
                hash[hindex][1]=i;
                hindex++;
            }
        }
    }
    for(k=0;k<hindex;k++)
    {
        i=hash[k][1];
        for(j=0;j<5;j++)
            printf(" %d ",M[i][j]);
        printf("\n");
    }
    return 0;
}
int main()
{
    int M[4][5] = {{0,1,1,0,0},
        {0,1,1,0,0},
        {1,0,0,1,1},
        {1,0,0,0,1}
    };
    
    findUniqueRows( M );
    return 0;
}
