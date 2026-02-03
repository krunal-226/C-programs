#include<stdio.h>
void main()
{
   for(int i=1;i<=5;i++){
        for(int k=5;k>i;k--){
            printf("  ");}
                
        
        for(int j=1;j<=i;j++){
            printf("* ");
        }
           
    
        printf("\n");
    }
    for(int i=1;i<=4;i++){
        for(int k=0;k<i;k++){
            printf("  ");}
                
        
        for(int j=4;j>=i;j--){
            printf("* ");
        }
         

    
        printf("\n");
    }
}