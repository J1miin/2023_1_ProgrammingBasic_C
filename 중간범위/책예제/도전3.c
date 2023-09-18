#include <stdio.h>
int main(){
    int cream,shrimp,coke;
    int total;
    for (int i=0;i<3500/500;++i){
        cream=i+1;
        for (int j=0;j<3500/700;++j){
            shrimp=j+1;
            for(int z=0;z<3500/9;++z){
                coke=z+1;
                if(cream>0 && shrimp>0 && coke >0){
                    total=500*cream+ 700*shrimp+400*coke;
                    if(total==3500){
                        printf("cream %d shrimp %d coke %d \n",cream,shrimp,coke);
                    }
                }
            }
        }
    }
    
    return 0;
}
