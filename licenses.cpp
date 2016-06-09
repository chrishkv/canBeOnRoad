//Created by: Ing. Christian Valdivieso
//
//Using object-oriented, tested code in Ruby (optional), please write a "pico y placa" predictor.
//The inputs should be a license plate number (the full number, not the last digit), a date (as a String), and a time, and 
//the program will return whether or not that car can be on the road.


using namespace std;
#include <iostream>
#include "licenses.hpp"

int main (){
licenses user;
std::string variable;
do{
variable="";
std::cout <<"Introduzca la placa del vehiculo: \n";
std::getline (std::cin,variable);
}while(!user.verifyLicense(variable));
do{
variable="";
std::cout <<"Introduzca la fecha en el formato DD-MM-AA \n";
std::getline (std::cin,variable);
}while(!user.verifyDate(variable));
do{
variable="";
std::cout <<"Introduzca la hora en el formato HH:MM \n";
std::getline (std::cin,variable);
}while(!user.verifyTime(variable));
if(user.canBeOnRoad())
	{
		std::cout <<"el vehiculo de la placa: "<<user.getLicense()<<" puede circular \n";
	}else{
		std::cout <<"el vehiculo de la placa: "<<user.getLicense()<<" No puede circular \n";
	}
}
