###############
# Modus Novus #
###############

Modus Novus es un programa de terminal hecho en C++ que genera intervalos aleatorios de acuerdo a una categoria seleccionada y los imprime en consola.

## i/o

El programa debe mostrar las opciones al comienzo del programa.

Segundas
Terceras
Cuarta, Tritono y Quinta
Sextas
Septimas
Todas

*Inputs*

El usuario debe ingresar la categoria de intervalos que desea estudiar.

*Outputs*

El programa debe devolver 10 intervalos generados aleatoriamente de acuerdo a la opcion seleccionada por el usuario.

## Tipos de datos

Los intervalos deben estar almacenados en arrays.

seconds = {"2", "2M"}
thirds = {"3m", "3M"}
fourthTritoneFifth = {"4p", "t", "5p"}
sixths = {"6m", "6M"}
sevenths {"7m", "7M"}

### Algoritmo

1. El programa muestra las opciones y pregunta al usuario que categoria de intervalos desea estudiar.

2. El usuario debe ingresar la opcion, si el input no es valido debe mostrar un mensaje de error.

3. El programa debe generar aleatoriamente 10 intervalos seleccionando aleatoriamente del array escogido e imprimirlos en consola.

4. Preguntar al usuario si desea volver a generar otra serie de intervalos.