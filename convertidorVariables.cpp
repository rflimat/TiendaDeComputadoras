#include<iostream>
#include<sstream>
#include<string.h>
using namespace std;

std::string Convert (int number){
    std::ostringstream buff;
    buff<<number;
    return buff.str();
}