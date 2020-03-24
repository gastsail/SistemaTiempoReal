#include <iostream>
#include <math.h>
using namespace std;

void myFunction();

class Motor { 
private: 
    double vm, s; 
  
public: 
    // Constructor
    Motor(double velMaxima, double sencibilidad){ 
        vm = velMaxima; 
        s = sencibilidad; 
    } 

   double getVelMax(){ 
        return vm; 
    } 

    double getSensibilidad(){
        return s;
    }
}; 


class SimulatedMotor{

    public:
    double velocidadMaxima,sensibilidad;

    public:
    double getVelWithTorque(double torque) {
      double velocidad = velocidadMaxima * (1 - exp(-torque * sensibilidad));
      return velocidad;
    }

};

int main(){
     
     
    

}

void myFunction() {
   double velMax,sens,torque;
     cout << "Velocidad Máxima del motor: ";
     cin >> velMax;
     cout << "Sensibilidad: ";
     cin >> sens;
     cout << "Torque: ";
     cin >> torque;

    Motor motor = Motor(velMax,sens);
    SimulatedMotor sm = SimulatedMotor();
    sm.velocidadMaxima = motor.getVelMax();
    sm.sensibilidad = motor.getSensibilidad();

    cout << "La velocidad es de: " << sm.getVelWithTorque(torque);
}