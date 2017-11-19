#include<stdio.h>

int main(int argc, char *argv[]) {
   /*
        *argc : es el numero de argumentos que recibe nuestro programa cuando es llamado desde la linea de comandos (y desde cualquier otro lado)

	***
	El primer argumento es el nombre del ejecutable, por lo cual , si no le pasamos argumentos al programa,imprimira 1.	
	*
	* argv : Contiene los valores de los argumentos ingresados por linea de comandos (y desde cualquier otro lado).
        *Los argumentos ingresados son separados por espacios siemore y cuando estos no esten entre comillas o no sean escapados ("\<espacio")
	* Los arguemntos son ordenaods en una lista de la siguiente forma
	*  argv [0] : <el-nombre-del-programa>
	*  argv [1] : argumento -1
	*  argv [2] : argumento -2
	*  argv [3] : argumento -3
	* 
	*
	** NOTAS:
	* Las expresiones como "%d", "%s" son especificadores de formato
	* * Las expresiones como "\t" o "\n" se conocen como secuencia de escape
	*
    * */
	
	for(int i = 1; i< argc; i++){

	printf("%d \t",i);
	printf("%s \n",argv[i]);

    }
	printf("%s\n", "");
}
