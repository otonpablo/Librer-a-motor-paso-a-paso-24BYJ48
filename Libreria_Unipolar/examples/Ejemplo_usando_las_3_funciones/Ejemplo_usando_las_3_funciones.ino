// EJEMPLO DE USO DE LA LIBRERIA UNIPOLAR PARA MOTOR STEPPER 28BYJ48

#include <Unipolar.h> 
Unipolar motor (10,11,12,13); // Creamos el objeto 'motor' asociado a 'Unipolar' y asociamos
                            // 4 pines digitales que queramos, siguiendo el siguiente orden;
                            // (naranja, amarillo, rosa, azul) 
                            // En este caso: 
                            //// cable naranja->pin 10
                            //// cable amarillo->pin 11
                            //// cable rosa->pin 12
                            //// cable azul->pin 13
void setup(){
}
void loop(){
  motor.derecha(); //Giramos a la derecha
  delay (1000);
  motor.para(); //Paramos el motor
  delay (1000);
  motor.giraizquierda(); //Giramos a la izquierda
  delay (1000);
}
