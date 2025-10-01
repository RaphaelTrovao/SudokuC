#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void geradorNum(){
    int quad[6][6];
    
    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            int cap = 0;
            int cap2 = 0;
            int num = rand() % 6+1;
            
           
            for(int a = 0; a<6; a++){    
                if(num != quad[a][i]){
                    cap++;
                    //printf("%d\n", cap);
                }
            }
            for(int b = 0; b<6; b++){
                if(num != quad[j][b]){
                    cap2++;
                }
            }
            //printf("test");
            if(cap == 6 && cap2 == 6){
                quad[j][i] = num; 
            } else {
               j--;
            }
       }
       
        
        //for(int k = 3; k<6; k++){

        //}
    }
    for(int n = 0; n<6; n++){
       for(int m = 0; m<6; m++){
         printf(" %d ", quad[m][n]);
       }
       printf("\n");
    }
}

void main(){
    srand(time(NULL));
geradorNum();
}