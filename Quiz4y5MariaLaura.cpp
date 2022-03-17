#include <iostream>
#include <algorithm>
using namespace std;


int costo(int N, int M, int x[], int y[],int largo1, int largo2){
	
	int banderaX=0;
	int banderaY=0;
	int costmin=0;
	
	if(largo1!=(N-1) || largo2!=(M-1)){
		cout<<"Input invalido"<<endl;
		cout<<"La lista supera el limite permitido."<<endl;
		return 0;
	}

	
	for(int i=0;i<(largo1+largo2);i++){
		
		if(x[banderaX]>y[banderaY]){
			//cortar en x
			
			costmin=costmin + (x[banderaX]*(banderaY+1));
			banderaX++;
			
		}
		else{
			//cortar en y
			
			costmin=costmin + ( y[banderaY]*(banderaX+1));
			banderaY++;
		}
	}
	cout<<"\nCosto minimo: "<<costmin<<endl;
	return costmin;
	

	
}

int main(){
	
	int N=6;
	int M=4;
	int x[]={2,1,3,1,4};//Horizontales 
    int y[]={4,1,2};//Verticales
    
    
    int largo1 = sizeof(x) / sizeof(x[0]);
    int largo2 = sizeof(y) / sizeof(y[0]);    
    sort(x, x + largo1, greater<int>());
    sort(y, y + largo2, greater<int>());
    
    /*cout<<"N: "<<N<<endl;
    cout<<"M: "<<M<<endl;
    cout << "Horizontales x: ";
    for (int i = 0; i < largo1; i++)
        cout << x[i] << " ";
        
    cout << "\nVerticales y: ";
    for (int i = 0; i < largo2; i++){
	
    	cout << y[i] << " ";
	} */
	
	costo(N,M,x,y,largo1,largo2); 
    
  	return 0;

}


