#include <stdio.h>  
   
int main()  
{  
    int rows, cols;  
          
      
    int a[][3] = {  
                    {1, 2, 3},  
                    {4, 5, 6},  
                    {7, 8, 9}  
                };  
      
     
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a)/sizeof(a[0][0]))/rows;  
      
      
    int t[cols][rows];  
      
    for(int i = 0; i < cols; i++){  
        for(int j = 0; j < rows; j++){  
            
            t[i][j] = a[j][i];  
        }  
    }  
      
    printf("Transpose of given matrix: \n");  
    for(int i = 0; i < cols; i++){  
        for(int j = 0; j < rows; j++){  
           printf("%d ", t[i][j]);  
        }  
        printf("\n");  
    }  
   
    return 0;  
}  