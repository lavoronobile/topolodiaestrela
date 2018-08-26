#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	
	int r, maquina;
	int i , j, t, pi, matriz[i][j];
	
			printf("Quantidade de maquinas: \n"); 
			scanf("%d", &maquina);
			
						
				for(i = 0; i < maquina; i++){
					for(j = 0; j < maquina; j++){
							if(matriz[i][j]){ 
								if(matriz[i][j]){ 
									matriz[i][j] = 1;  
								}
								else{
									matriz[i][j] = 0;
								}
							}
							else{
								matriz[i][j] = 0; 
							}	
				}														

	}
		
			for(i = 0; i<maquina; ++i){
				for(j = 0; j<maquina; ++j){
					printf("%3d", matriz[i][j]);
				}
				printf("\n");
		}
			

	
	getch();
	return 0;
}
