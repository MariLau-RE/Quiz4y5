#include <iostream>
#include <algorithm>
using namespace std;


int costominimo(int N, int M, int x[], int y[],int largox, int largoy){
	
	int posX=0;
	int posY=0;
	int costmin=0;
	
	if(largox!=(N-1) || largoy!=(M-1)){
		cout<<"Input invalido"<<endl;
		cout<<"Las listas superan los limites permitidos."<<endl;
		return 0;
	}
	
	for(int i=0;i<(largox+largoy);i++){
		
		if(x[posX]>=y[posY]){ //cortar en x
			costmin=costmin + (x[posX]*(posY+1));//(posY+1) son las piezas en y
			posX++;
		}
		else{ //cortar en y
			costmin=costmin + (y[posY]*(posX+1));//(posX+1) son las piezas en x
			posY++;
		}
	}
	
	cout<<"\nCosto minimo: "<<costmin<<endl;
	return costmin;
		
}

int main(){
	
	/*En las primeras 4 lineas del main se definen 
las variables necesarias para resolver el algoritmo
se pide el valor de N,M,Array x y Array y. 
La cantidad de elementos en X debe ser igual a N-1
La cantidad de elementos en Y debe ser igual a M-1*/
	
	int N=6;
	int M=4;
	int x[]={2,1,3,1,4};//Horizontales 
    int y[]={4,1,2};//Verticales
    
    int largox = sizeof(x) / sizeof(x[0]);
    int largoy = sizeof(y) / sizeof(y[0]);    
    sort(x, x + largox, greater<int>());
    sort(y, y + largoy, greater<int>());
    
    /*cout<<"N: "<<N<<endl;
    cout<<"M: "<<M<<endl;
    cout << "Horizontales x: ";
    for (int i = 0; i < largo1; i++)
        cout << x[i] << " ";
        
    cout << "\nVerticales y: ";
    for (int i = 0; i < largo2; i++){
	
    	cout << y[i] << " ";
	} */
	
	costominimo(N,M,x,y,largox,largoy); 
    
  	return 0;

}
