using namespace std;
#include <iostream>
#include <string>
#include <stdlib.h>
class licenses{
public:
licenses(){};
licenses(char usrLicense[]){};
bool verifyLicense(std::string usrLicense)
	{
		if(usrLicense.length() > 9){
			std::cout <<"tamaño de licencia invalido \n";
			return false;
		}
		char lastLicense = usrLicense[usrLicense.length()-1];		
		if(isdigit((int)lastLicense)){
			std::cout <<"licencia invalida \n";
			return false;
		}
		setLicense(usrLicense);
		return true;
	}
bool verifyDate(std::string usrDate){
		if(usrDate.length() > 8 || usrDate.find("-") != 2 || usrDate.find("-",3) != 5){
			std::cout <<"Formato de fecha invalido \n";
			return false;
		}
		setDate(usrDate);
		return true;
	}
bool verifyTime(std::string usrTime){
		if(usrTime.length() > 5 || usrTime.find(":") != 2){
			std::cout <<"Formato de hora invalido \n";
			return false;
		}
		setTime(usrTime);
		return true;
	}
bool canBeOnRoad(){
		if((rand() % 3) == 0){
			return false;
		}
		return true;
	}
std::string getLicense()
	{return license;}
std::string getDate()
	{return date;}
std::string getTime()
	{return time;}
private:
std::string time;
std::string date;
std::string license;
void setLicense(std::string usrLicense)
	{ license = usrLicense;}
void setDate(std::string usrDate)
	{date = usrDate;}
void setTime(std::string usrTime)
	{time = usrTime;}
};
