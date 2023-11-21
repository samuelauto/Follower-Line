#include <Arduino.h>
#line 1 "c:\\Users\\Samuel\\Documents\\Arduino VS\\Follower Line\\sketch.ino"
#line 1 "c:\\Users\\Samuel\\Documents\\Arduino VS\\Follower Line\\sketch.ino"
//Designacion de los motores
int dm1 = 3;
int dm2 = 5;

//Arreglo de IRS

int sensores[3];

void setup()
{
	pinMode(dm1, OUTPUT);
    pinMode(dm2, OUTPUT);
}

void loop()
{
    LeerSensores(sensores);
    //Usar el monitor serie para ver los valores de los sensores
    //Usar analogWrite(pin, value);para la velocidad de los motores

    
}

void LeerSensores(int sensores[]){
	sensores[0] = analogRead(A0);
    sensores[1] = analogRead(A1);
    sensores[2] = analogRead(A2);
    sensores[3] = analogRead(A3);
}
