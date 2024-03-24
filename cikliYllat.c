#include <stdio.h>

int main() {
    printf("Vendos numrin e rreshtave: ");
    int n;
    scanf("%i",&n);
    
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
        if(j<n-1-i){
            printf("_ ");
        }else{
            printf("* ");
        }
    }
    printf("\n");
	}
}