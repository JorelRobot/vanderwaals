#include <cstdio>
#include <math.h>
#define R 0.082

    typedef struct {
        float a, b;
    }gas;

void menuSecond();
void opcSecond();
void calcPresion(float a, float b);
void calcTemperatura(float a, float b);
void calcVolumen();
void calcMoles();

int main(){
    int opc;

    gas argon = {1.345, 0.03219};
    gas cloro = {6.26, 0.05622};
    gas etanol = {12.3957, 0.08407};
    gas helio = {0.03411, 0.0237};
    gas metano = {2.2531, 0.04278};
    gas butano = {13.7083, 0.1164};
    gas dioxDeCar = {3.61015, 0.04267};
    gas fenol = {22.63, 0.1177};
    gas kripton = {2.3182, 0.03978};
    gas nitrogeno = {1.3895, 0.03913};


    printf("ECUACION DE VAN DER WAALS");

    do{
        printf("\n\nElija la opcion del gas con el que desea trabajar\no presione 0 para salir\n\n");

        printf("1. Argon\t\t");             printf("6. Butano\n");
        printf("2. Cloro\t\t");             printf("7. Dioxido de carbono\n");
        printf("3. Etanol\t\t");            printf("8. Fenol\n");
        printf("4. Helio\t\t");             printf("9. Kripton\n");
        printf("5. Metano\t\t");            printf("10.Nitrogeno\n\n");

        printf("Opcion: ");
        scanf("%i", &opc);

        switch (opc){

            case 1:
                menuSecond();
                scanf("%i", &opc);

                switch (opc){
                    case 1:
                        calcPresion(argon.a, argon.b);
                    break;

                    case 2:
                        calcTemperatura(argon.a, argon.b);
                    break;

                    case 3:
                        calcVolumen();
                    break;

                    case 4:
                        calcMoles();
                    break;

                    case 5:
                    break;
                }
            break;

            case 2:
                menuSecond();
                scanf("%i", &opc);

                switch (opc){
                    case 1:
                        calcPresion(cloro.a, cloro.b);
                    break;

                    case 2:
                        calcTemperatura(cloro.a, cloro.b);
                    break;

                    case 3:
                        calcVolumen();
                    break;

                    case 4:
                        calcMoles();
                    break;

                    case 5:
                    break;
                }

            break;

            case 3:
                menuSecond();
                scanf("%i", &opc);

                switch (opc){
                    case 1:
                        calcPresion(etanol.a, etanol.b);
                    break;

                    case 2:
                        calcTemperatura(etanol.a, etanol.b);
                    break;

                    case 3:
                        calcVolumen();
                    break;

                    case 4:
                        calcMoles();
                    break;

                    case 5:
                    break;
                }

            break;

            case 4:
                menuSecond();
                scanf("%i", &opc);

                switch (opc){
                    case 1:
                        calcPresion(helio.a, helio.b);
                    break;

                    case 2:
                        calcTemperatura(helio.a, helio.b);
                    break;

                    case 3:
                        calcVolumen();
                    break;

                    case 4:
                        calcMoles();
                    break;

                    case 5:
                    break;
                }

            break;

            case 5:
                menuSecond();
                scanf("%i", &opc);

                switch (opc){
                    case 1:
                        calcPresion(metano.a, metano.b);
                    break;

                    case 2:
                        calcTemperatura(metano.a, metano.b);
                    break;

                    case 3:
                        calcVolumen();
                    break;

                    case 4:
                        calcMoles();
                    break;

                    case 5:
                    break;
                }

            break;

            case 6:
                menuSecond();
                scanf("%i", &opc);

                switch (opc){
                    case 1:
                        calcPresion(butano.a, butano.b);
                    break;

                    case 2:
                        calcTemperatura(butano.a, butano.b);
                    break;

                    case 3:
                        calcVolumen();
                    break;

                    case 4:
                        calcMoles();
                    break;

                    case 5:
                    break;
                }

            break;

            case 7:
                menuSecond();
                scanf("%i", &opc);

                switch (opc){
                    case 1:
                        calcPresion(dioxDeCar.a, dioxDeCar.b);
                    break;

                    case 2:
                        calcTemperatura(dioxDeCar.a, dioxDeCar.b);
                    break;

                    case 3:
                        calcVolumen();
                    break;

                    case 4:
                        calcMoles();
                    break;

                    case 5:
                    break;
                }

            break;

            case 8:
                menuSecond();
                scanf("%i", &opc);

                switch (opc){
                    case 1:
                        calcPresion(fenol.a, fenol.b);
                    break;

                    case 2:
                        calcTemperatura(fenol.a, fenol.b);
                    break;

                    case 3:
                        calcVolumen();
                    break;

                    case 4:
                        calcMoles();
                    break;

                    case 5:
                    break;
                }

            break;

            case 9:
                menuSecond();
                scanf("%i", &opc);

                switch (opc){
                    case 1:
                        calcPresion(kripton.a, kripton.b);
                    break;

                    case 2:
                        calcTemperatura(kripton.a, kripton.b);
                    break;

                    case 3:
                        calcVolumen();
                    break;

                    case 4:
                        calcMoles();
                    break;

                    case 5:
                    break;
                }

            break;

            case 10:
                menuSecond();
                scanf("%i", &opc);

                switch (opc){
                    case 1:
                        calcPresion(nitrogeno.a, nitrogeno.b);
                    break;

                    case 2:
                        calcTemperatura(nitrogeno.a, nitrogeno.b);
                    break;

                    case 3:
                        calcVolumen();
                    break;

                    case 4:
                        calcMoles();
                    break;

                    case 5:
                    break;
                }

            break;
        }

    }while (opc != 0);

    return 0;
}

void menuSecond(){
    printf("\n\nSeleccione la operacion que desea hacer\n\n");

    printf("1. Calcular la Presion del Gas\n");
    printf("2. Calcular la Temperatura del Gas\n");
    printf("3. Calcula el Volumen del Gas\n");
    printf("4. Calcula el Numero de Moles del Gas\n");
    printf("5. Resgresar al Menu de Gases\n");

    printf("\n\nOpcion: ");
}


void calcPresion(float a, float b){
    float n, T, V;
    float presCalcda;

    printf("\n\nIntroduzca los parametros que se le pidan\n\n");
    printf("Numero de moles (n): ");
    scanf("%f", &n);
    printf("Temperatura (T): ");
    scanf("%f", &T);
    printf("Volumen (V): ");
    scanf("%f", &V);

    presCalcda = ((n*R*T)/(V-(n*b)))-((a*(n*n))/(V*V));

    printf("\n\nLa presion de gas es de: %f atm\n\n", presCalcda);
}


void calcTemperatura(float a, float b){
    float n, P, V;
    float tempCalcda;

    printf("\n\nIntroduzca los parametros que se le pidan\n\n");
    printf("Numero de moles (n): ");
    scanf("%f", &n);
    printf("Presion (P): ");
    scanf("%f", &P);
    printf("Volumen (V): ");
    scanf("%f", &V);

    tempCalcda = ((P+(((n*n)*a)/(V*V)))*(V-(n*b)))/(R*n);

    printf("\n\nLa temperatura del gas es de: %f ºC\n\n", tempCalcda);
}

void calcVolumen(){
    float n, P, T;
    float volCalcdo;

    printf("\n\nIntroduzca los parametros que se le pidan\n\n");
    printf("Numero de moles (n): ");
    scanf("%f", &n);
    printf("Temperatura (T): ");
    scanf("%f", &T);
    printf("Presion (P): ");
    scanf("%f", &P);

    volCalcdo = (n*R*T)/(P);

    printf("\n\nLa volumen del gas es de: %f \n\n", volCalcdo);
}

void calcMoles(){
    float V, P, T;
    float volCalcdo;

    printf("\n\nIntroduzca los parametros que se le pidan\n\n");
    printf("Volumen (V): ");
    scanf("%f", &V);
    printf("Temperatura (T): ");
    scanf("%f", &T);
    printf("Presion (P): ");
    scanf("%f", &P);

    volCalcdo = (P*V)/(R*T);

    printf("\n\nEl numero de moles del gas es: %f \n\n", volCalcdo);
}



