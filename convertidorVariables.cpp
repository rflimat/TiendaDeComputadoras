#include<iostream>
#include<sstream>
#include<string.h>
using namespace std;

std::string IntToString (int number){
    std::ostringstream buff;
    buff<<number;
    return buff.str();
}

string CharToString(char* a){  
    string s(a);
    return s; 
}

int StringToInt(string cadena){  
    stringstream geek(cadena);
    int x; 
    geek>>x;
    return x; 
}