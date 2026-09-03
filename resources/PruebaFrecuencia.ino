#include <Arduino.h>


void ejecutarPrueba(uint32_t iteraciones) {
   unsigned long inicio, fin;


   // 1. Prueba con Enteros
   volatile int suma_int = 0;
   inicio = micros();
   for (uint32_t i = 0; i < iteraciones; i++) {
       suma_int += 1;
   }
   fin = micros();
   Serial.printf("Tiempo INT: %.4f segundos\n", (fin - inicio) / 1000000.0);


   // 2. Prueba con Float 
   volatile float suma_float = 0.0f;
   inicio = micros();
   for (uint32_t i = 0; i < iteraciones; i++) {
       suma_float += 1.0f;
   }
   fin = micros();
   Serial.printf("Tiempo FLOAT: %.4f segundos\n", (fin - inicio) / 1000000.0);


   // 3. Prueba con Double
   volatile double suma_double = 0.0;
   inicio = micros();
   for (uint32_t i = 0; i < iteraciones; i++) {
       suma_double += 1.0;
   }
   fin = micros();
   Serial.printf("Tiempo DOUBLE: %.4f segundos\n", (fin - inicio) / 1000000.0);
}


void setup() {
   Serial.begin(115200);
   delay(2000);


   // Las iteraciones son ajustables para establecer el tiempo inicial, las ajustamos a 50 millones para obtener un tiempo de 10.7 segundos en la prueba de INT
   uint32_t N = 50000000;


   Serial.println("\n--- PRUEBA A 80 MHz ---");
   setCpuFrequencyMhz(80);
   Serial.printf("Frecuencia actual: %d MHz\n", getCpuFrequencyMhz());
   ejecutarPrueba(N);


   delay(2000);


   Serial.println("\n--- PRUEBA A 160 MHz (Duplicada) ---");
   setCpuFrequencyMhz(160);
   Serial.printf("Frecuencia actual: %d MHz\n", getCpuFrequencyMhz());
   ejecutarPrueba(N);
}


void loop() {
   
}
