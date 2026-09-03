# Sistemas de Computación
# Trabajo Práctico 1 - Rendimiento

**Integrantes:**
- Aguilar Bazán, Lautaro Ismael
- Faro, Tomás Martin
- Monaldi, Renata


---


## 📝 Resumen del Trabajo
Aquí puedes pegar una síntesis breve del texto de tu informe, introducción, metodología y conclusiones.

## 1. Lista de Benchmarks

| Tarea | Benchmark |
| :--- | :--- |
| Uso general y productividad diaria | Geekbench 6 |
| Edición de vídeo y renderizado | Cinebench |
| Gaming y rendimiento gráfico | 3DMark |
| Almacenamiento (SSD / HDD) | CrystalDiskMark |
| Velocidad y capacidad de respuesta de los navegadores web | Speedometer 3.0 |

Elegimos el Benchmark Speedometer 3.0 para correr cada uno en nuestras computadoras, 

Speedometer 3.0 simula lo que hace un usuario real navegando por internet.
Evalúa la fluidez con la que el navegador procesa acciones complejas mediante:
Aplicaciones Web Modernas (Frameworks): Ejecuta tareas en simulaciones de apps creadas con React, Angular, Vue, Svelte, etc.
Edición de Texto Rico: Mide la respuesta al cargar y editar documentos en editores web de código o texto.
Renderizado de Gráficos: Evalúa el rendimiento cargando gráficos interactivos en Canvas y SVG.S
Navegación por Portales de Noticias: Simula la interacción en páginas web pesadas creadas con tecnologías de renderizado moderno como Next.js y Nuxt.

Al finalizar la prueba, te devuelve una puntuación numérica: a mayor puntaje, más fluido y rápido responderá ese navegador en tu procesador y sistema operativo. 

Los test realizados en cada una de nuestras computadoras se encuentran subidos en la carpeta [Capturas](./Capturas).

## 2.
![Imagen Punto 2](./resources/punto2.png)

Aceleración (Speedup) del Ryzen 7950X:
Frente al i5, su speedup es 1.5962 (59.6% más rápido).
Frente al Ryzen 5900X, su speedup es 1.8654 (86.5% más rápido).
Eficiencia de procesador (núcleos): El Ryzen 7950X gana en ambas tablas (0.0998 y 0.1166), siendo el que mejor rinde por cada núcleo.

Eficiencia de costo (dinero): El i5-13600K gana en ambas tablas (0.00352 y 0.00411), siendo el que mejor speedup entrega por cada dólar invertido.

## 3.

Para este punto realizamos un código que realiza el calcula de la suma de N iteraciones, realizamos la misma operación para enteros, punto flotante y double, primero con una frecuencia de 80mhz y luego la actualizamos con setCpuFrequencyMhz a 160Mhz, como era de esperar el tiempo de ejecución del cálculo se redujo a la mitad al duplicar la frecuencia ya que, el tiempo de ejecución es inversamente proporcional a la frecuencia del core.

![Imagen Punto 3](./resources/punto3.jpeg)

El código fuente utilizado para las pruebas de frecuencia de la CPU se encuentra disponible en [`./resources/PruebaFrecuencia.ino`](./resources/PruebaFrecuencia.ino).

## 4.

Para este punto realizamos el tutorial descripto en time profiling siguiendo las instrucciones de https://www.thegeekstuff.com/2012/08/gprof-tutorial/ .

Luego asentamos los resultados en la hoja de cálculos de Resultados obteniendo llamativas diferencias entre los distintos integrantes del grupo en sus computadoras.
Las capturas de pantalla de cada uno de los resultados ([Lautaro](./Capturas/Aguilar%20Bazán/), Renata, Tomas)
Según la ia se pueden aplicar flags de optimización en gcc, agregando -02 o -03, por ejemplo gcc -O3 -Wall -pg test_gprof.c test_gprof_new.c -o test_gprof. Identificando así los bucles que no producen ningún efecto útil  y los elimina o simplifica.

## 5.

En la primer parte de este punto realizamos una medición de ancho de banda entre dos máquinas, tomando los datos y llegando a las siguientes conclusiones:

Rendimiento y Ancho de Banda Medido

Ancho de banda promedio de envío (Sender): 771 Mbits/sec.

Ancho de banda promedio de recepción (Receiver): 767 Mbits/sec.

Volumen de datos transferido: 920 MBytes transferidos en aproximadamente 10 segundos.

Al realizar la prueba de ancho de banda LAN entre el equipo cliente (conectado por cable Ethernet al router de Starlink) y el servidor(conectada por Wi-Fi 5 GHz), la prueba dio un promedio de 771 Mbps. Esto demuestra que el router maneja puertos Gigabit por cable y que el Wi-Fi de 5 GHz tiene muy buena cobertura y velocidad, permitiendo enviar tráfico pesado entre ambas máquinas de forma fluida y sin perder datos.

Las capturas que evidencian el procedimiento se encuentran en la carpeta de [Capturas](./Capturas/Punto%205/Tests/).

Para la segunda parte del punto realizamos testeos en distintos proveedores como fast.com, Speedtest.net, Cloudflare Speedtest.

Por último para la tercer parte realizamos una llamada de meet con distintas conexiones como red WiFi y red Celular para medir las distintas latencias y obtuvimos los siguientes [resultados](./Capturas/Punto%205/Latencia%20llamada/), dejando en evidencia que la red WiFi tiene menor latencia y una estabilidad superior a diferencia de la red Celular que tiene una latencia mayor y es bastante inestable.
