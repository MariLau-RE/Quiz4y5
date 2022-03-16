#include <iostream>
#include <stdio.h>
using namespace std;

int sort(int array[]){
	
	int aux;
	
	for(int i=0; i<sizeof(array);i++){
		for(int j=0; j<sizeof(array);j++){
			
			if (array[j]>array[j+1]){
				
				aux=array[j+1];
				array[j+1]= array[j];
				array[j]=aux;
			}
		}
	}
	
	for(int i= sizeof(array)-1; i>=0;i--){
		printf("%d\t",array[i]);
	}
	
	//return 0;
	
}


int costo(int N, int M, int x[], int y[]){

	
	
}

int main(){

	int x[]={3,8,6,0,1};
	sort(x);

  	return 0;

}


