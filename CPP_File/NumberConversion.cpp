#include <iostream>

using namespace std;

void toDecimal(int num){
    char temp[65];
    itoa(num, temp, 10);
    cout<<"Number in Decimal is: "<<temp<<"\n";
}
void toHexaDecimal(int num){
    char temp[65];
    itoa(num, temp, 16);
    cout<<"Number in HexaDecimal is: x"<<temp<<"\n";
}
void toBinary(int num){
    char temp[65];
    itoa(num, temp, 2);
    cout<<"Number in Binary is: b"<<temp<<"\n";
}
void toOctal(int num){
    char temp[65];
    itoa(num, temp, 8);
    cout<<"Number in Octal is: o"<<temp<<"\n";
}

int main(){
    toBinary(20);
    toDecimal(20);
    toHexaDecimal(20);
    toOctal(20);
}
