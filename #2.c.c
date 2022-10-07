//#2
#include <stdio.h>

int main(){
    int fahren, celcius, kelvin;
    
    printf("Digite a temperatura atual em Fahrenheit: ");
    scanf("%d", &fahren);
    
    celcius = (fahren - 32) * 5/9;
    kelvin = (fahren - 32) * 5/9 +  273,15;
    
    printf("Convertendo para celcius: %d°C\n", celcius);
    printf("Convertendo para kelvin: %dK", kelvin);
}
