#include <stdio.h>
int strlen_recursiva(char string[], int inicio){
    if (string[inicio] == '\0')
        return 0;
    return 1 + strlen_recursiva(string, inicio + 1);
}

int main (){
    printf("La longitud es %i. \n", strlen_recursiva("hola", 0));
    return 0;
}
