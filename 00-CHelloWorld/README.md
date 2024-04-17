## 00-CHelloworld
* **Compilador:** GCC, dialecto C11

* **Descripción:** El programa "Hello World" devuelve "Hola, mundo!" al ejecutarlo.

Para poder ejecutar el programa se deben seguir los siguientes pasos (UBUNTU):

1. Tener el compilador previamente instalado, siguiendo los pasos:
   
    1.1. Actualizar el paquete Ubuntu
      ```
    sudo apt update
      ```
    1.2. Instalar GCC
      ```
    sudo apt install gcc
      ```
    1.3. Verificar que quedó bien instalado
      ```
    gcc --version
      ```
> [!NOTE]
> *La versión de GCC usada para este TP fue 9.4.0*

   
2. Una vez descargado el repositorio o solamente el archivo hello.c, ejecutarlo con los siguientes comandos:
    2.1. Posicionarse dentro de la carpeta donde se encuentra el archivo hello.c
    2.2. Compilar el programa para obtener un ejecutable
      ```
    gcc -o hello.out hello.c
      ```

    2.3. Ejecutar el archivo hello.out
      ```
    ./hello.out
      ```
      > En el caso de que se requiera guardar la salida en un archivo, se redirige ejecutando el siguiente comando
      > ```
      > ./hello.out > output.txt
      > ```
    2.4. El programa deberá devolver la línea "Hola, mundo!"
