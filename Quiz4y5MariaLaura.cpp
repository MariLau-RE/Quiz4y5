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
		
		if((x[posX]>=y[posY]) && (posX<(N-1))){ //cortar en x
			//cout<<"posX: "<<x[posX]<<endl;
			costmin=costmin + (x[posX]*(posY+1));//(posY+1) son las piezas en y
			posX++;
		}
		else{ //cortar en y
			//cout<<"posY: "<<y[posY]<<endl;
			costmin=costmin + (y[posY]*(posX+1));//(posX+1) son las piezas en x
			posY++;
		}
	}
	
	cout<<"\nCosto minimo de corte: "<<costmin<<endl;
	return costmin;
		
}

int main(){
	
	/*En las primeras 4 lineas del main se definen 
las variables necesarias para resolver el algoritmo
se pide el valor de N,M,Array x y Array y. 
La cantidad de elementos en X debe ser igual a N-1
La cantidad de elementos en Y debe ser igual a M-1*/

	//int x[]={2};//Horizontales 
    //int y[]={1};//Verticales
	//int x[]={5,2,6,3,8,7};//Horizontales 
    //int y[]={1,3,2,1};//Verticales
    int x[]={2,1,3,1,4};//Horizontales 
    int y[]={4,1,2};//Verticales
    
    int largox = sizeof(x) / sizeof(x[0]);
    int largoy = sizeof(y) / sizeof(y[0]);    
    sort(x, x + largox, greater<int>());
    sort(y, y + largoy, greater<int>());
    
    
    /*
    cout << "Horizontales x: ";
    for (int i = 0; i < largox; i++)
        cout << x[i] << " ";
        
    cout << "\nVerticales y: ";
    for (int i = 0; i < largoy; i++){
	
    	cout << y[i] << " ";
   	} 
	cout <<"Lx: "<<largox<<"  Ly: "<<largoy<<endl;	
	*/
	
	costominimo(6,4,x,y,largox,largoy); 
    
  	return 0;

}
