#include <iostream>
const float PI = 3.14;
int factoriel (unsigned int n);
float puissance (float x , unsigned int p);
float radian (float angle);
unsigned int i;
float sinus,x,fx,cosinus,tangente;
int main(int argc , char** argv) {
	std::cout<<"Nom du programme:Trigonometrie"<<std::endl;
	std::cout<<"Entrer le nombre : ";
	std::cin>>fx;
	x = radian (fx);
	//SINUS
		sinus = 0;
		for (i = 0 ; i < 10 ; i++) {
			sinus = sinus + puissance ( -1 , i ) * (puissance (x , 2 * i + 1)) / factoriel (2 * i + 1);
		}
		std::cout<<"Le sinus de "<<fx<<" est : "<<sinus<<std::endl;
	//COSINUS
		cosinus = 0;
		for (i = 0 ; i < 10 ; i++) {
			cosinus = cosinus + puissance (-1 , i) * (puissance (x , 2 * i)) / factoriel (2 * i);
		}
		std::cout<<"Le cosinus de "<<fx<<" est : "<<cosinus<<std::endl;
	//TANGENTE
		if (fx == 90 || fx == -90){
			std::cout<<"La tangente de "<<fx<<" est une valeur indeterminee"<<std::endl;
		}
		else{
			tangente = sinus / cosinus;
			std::cout<<"La tangente de "<<fx<<" est : "<<tangente<<std::endl;
		}
	return 0;
}
int factoriel (unsigned int n) {
	if (n == 0)return 1;
	else{
		return n*factoriel(n-1);
	}
}
float puissance (float x , unsigned int p) {
	unsigned int i;
	float result = 1;
	if (p == 0)return 1;
	else{
		for(i = 1 ; i <= p ; i++){
			result = result * x;
		}
		return result; 
	}
}
float radian (float angle) {
	float sortie = 1;
	return angle * (PI/180);
}