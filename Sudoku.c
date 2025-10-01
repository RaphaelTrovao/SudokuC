#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int geradorNum(){
    int quad[6][6];
    
    for(int i = 0; i<6; i++){
       // int h1 = 6;
        for(int j = 0; j<6; j++){
            int cap = 0;
            
            
            int num = rand() % 9+1;
            
       
            for(int a = 0; a<6; a++){    
                if(num == quad[a][i]){
                    cap++;
                    //printf("%d\n", cap);
                }
            }
            for(int b = 0; b<6; b++){
                if(num == quad[j][b]){
                    cap++;
                }
            }
            if(i<3){
                for(int c = 0; c<3; c++){
                    for(int d = 0; d<3; d++){
                    if(num == quad[c][d]){
                        cap++;
                    }
                    }
                }
            }
            //printf("test");
            
            if(cap == 0){
                quad[j][i] = num; 
                
            } else {
               j--;
               //printf("travou aqui");
            }
       }
       
        
        //for(int k = 3; k<6; k++){

        //}
    
    
    }for(int n = 0; n<6; n++){
       for(int m = 0; m<6; m++){
        if(m==3){
            printf("|");
        }
         printf(" %d ", quad[m][n]);
       }
       printf("\n");
    }
     
}

void main(){
    srand(time(NULL));
geradorNum();
}