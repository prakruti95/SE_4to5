#include<stdio.h>
#include<conio.h>
int main()
{
    
    int a[3][3],b[3][3],result[3][3]={0};
    int i,j,k;
  
    printf("Enter 1st matrix of 3*3: ");  
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);  
        }
    }
    
    printf("Enter 2nd matrix of 3*3: ");  
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);  
        }
    }
    
    for(i=0;i<3;i++)//row
    {
        for(j=0;j<3;j++)//col
        {
            for(k=0;k<3;k++)
            {
               result[i][j]+= a[i][k]*b[k][j]; 
                
            }
        }
    }
    
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("Resultant Matrix is : %d",result[i][j]);
            
        }
        printf("\n");
    }
    
    
    
    
    
    
    
    
    
    
    //0th Row
    
    // a[0][0]*b[0][0]
    // 1*4
    // 0+4 = 4
   
    // a[0][1]*b[1][0]
    // 2*7
    // 4+14 = 18
    
    // a[0][2]*b[2][0]
    // 3*2
    // 18+6 = 24
    
    
    
    
    
  
    
    
    

    return 0;
}
