#include<iostream>
#include<string>
#include<math.h>
#define PI 3.14159265
using namespace std;

void factorizar(){
	int* nums = new int[3];
	cout << "Ingrese el coeficiente de X²: ";
	cin >> nums[0];
	cout << "Ingrese el coeficiente de X: ";
	cin >> nums[1];
	cout << "Ingrese el constante: ";
	cin >> nums[2];
	double f1 = 0, f2 = 0;//factor 1 y 2
	if((nums[1] * nums[1] - 4*nums[0]*nums[2]) >= 0){
		f1 = -(-nums[1] + sqrt(nums[1] * nums[1] - 4*nums[0]*nums[2]))/(2*nums[0]);
		f2 = -(-nums[1] - sqrt(nums[1] * nums[1] - 4*nums[0]*nums[2]))/(2*nums[0]);
		cout <<"("<< nums[0] << ")X²+" <<"("<< nums[1] << ")X+" <<"("<< nums[2] << ") = (X";
		if(f1 >= 0)
			cout << "+";
		cout << f1 << ")(X";
		if(f2 >= 0)
			cout << "+";
		cout << f2 << ")" << endl;
	}else{
		cout << "No se puede factorizar" << endl;
	}	
	delete[] nums;
}

long factorial (int n){
	long f = 1;
	for (int i = 1; i <= n; i++){
		f *= i;
	}
	return f;
}

void sincos(double deg){
	double rad = deg * PI/180;
	double seno = rad, coseno = 1;
	for(int i = 1; i <= 20; i++){
		seno += pow(-1,i)/factorial(2*i+1)*pow(rad,(2*i+1));
	}
	for(int i = 1; i <= 20; i++){
		coseno += pow(-1,i)/factorial(2*i)*pow(rad,(2*i));
	}
	if (seno < 0.00001)
		seno = 0;
	if (coseno < 0.00001)
		coseno = 0;
	cout << "Seno: " <<  seno << endl;
	cout << "Coseno: " << coseno << endl;
}

void fibonacci(int n){

}

main(){
	int op;
	cout << "1. Factorizar" << endl << "2. Seno y Coseno" << endl << "3. Triángulo de Pascal" << endl << "0. Salir" << endl << "Ingrese una opción: ";
	cin >> op;
	switch(op){
		case 1: {
			factorizar();
			}
		case 2: {
			cout << "Ingrese el ángulo: ";
			double deg;
			cin >> deg;
			sincos(deg);
			}
		case 3: {
			int n = 0;
			cout << "Ingrese la cantidad de filas";
			cin >> n;
		        }
	}
}
