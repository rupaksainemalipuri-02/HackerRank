#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int year;
    char branch;
    scanf("%d %c", &year, &branch);
    switch (year==1 || (year>=2 && year<=4 && (branch=='C' || branch=='E' || branch=='M'))){
        case 0: printf("%d", -1);break;
        case 1:
            switch (year){
                case 1: printf("Physics\nChemistry\nMaths");break;
                case 2:
                    switch (branch){
                        case 'C': printf("C Programming\nComputer Organization & Architecture\nWeb Development");break;
                        case 'E': printf("Signal Processing\nLogic Design\nNetwork Analysis");break;
                        case 'M': printf("Thermodynamics\nSolid Mechanics\nHeat Transfer");break;
                    }
                    break;
                case 3:
                    switch (branch){
                        case 'C': printf("Object-oriented Programming\nDBMS\nData Structures & Algorithms");break;
                        case 'E': printf("Analog Electronics\nEmbedded Systems\nMicrocontrollers");break;
                        case 'M': printf("Applied Mechanics\nKinematics\nMechatronics");break;
                    }
                    break;
                case 4:{
                    int internship;
                    scanf("%d", &internship);
                    switch (internship){
                        case 1: printf("Enrolled into Internship Program");break;
                        case 0:
                            switch (branch){
                                case 'C': printf("Operating Systems\nComputer Networks\nCompiler Design");break;
                                case 'E': printf("VLSI Design\nFiber-optic Communication\nDigital Electronics");break;
                                case 'M': printf("Mechanism of Materials (MOM)\nStrength of Materials (SOM)\nMachine Design");break;
                            }
                            break;
                        default: printf("%d", -1);
                    }
                    break;

                }
                break;
            }
    }
    return 0;
}
