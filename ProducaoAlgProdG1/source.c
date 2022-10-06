//Github: MajorJones 

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<math.h> //header para auxiliar com operacao de raiz quadrada, fonte: https://www.programiz.com/c-programming/library-function/math.h

int main(){
    
    int op, loop;
    float val1, val2, soma, subt, div, mult, raiz, squareRoot, pot, test;

    printf("\e[1;1H\e[2J"); //clear screen que funcione tanto em windows quanto em linux, fonte: https://www.geeksforgeeks.org/clear-console-c-language/

    printf("Bem vindo!\n\n"); // introducao e identificacao
    sleep(2); 
    printf("Desenvolvido por Joao Pedro Aldrighi Ritter\n");
    sleep(1);
    printf("Aluno de Analise e Desenvolvimento de Sistemas\n"); 
    sleep(1);
    printf("Universidade La Salle Canoas\n");
    sleep(1);
    printf("Matricula 202214469\n\n");
    sleep(1);

    do{ // loop para voltar ao menu
        
        do{
            printf("Selecione a operacao desejada:\n(1) Soma           (2) Subtracao        (3) Divisao\n(4) Multiplicacao  (5) Raiz quadradada  (6) Potenciacao\n\n"); //menu para selecionar operacao, coloquei bastante espaço para alinhar o texto no terminal
            scanf("%d", &op);

            if (op>6){ 
                printf("\e[1;1H\e[2J");
                printf("Operacao invalida, tente novamente\n\n"); //checagem para impedir operacao incorreta
            }

        } while (op>6);

        printf("\e[1;1H\e[2J");

            if (op==1){ //operacao de soma
                do{
                    printf("Insira o primeiro valor:\n\n");
                    scanf("%f", &val1);

                    if (val1>100000000 || val1<-100000000){ //checagem por valor que possa exibir um resultado incorreto
                        printf("\e[1;1H\e[2J");
                        printf("Valor invalido, tente novamente\n\n");                  
                    }
                }
                while (val1>100000000 || val1<-100000000);

                do{
                    printf("\nInsira o segundo valor:\n\n");
                    scanf("%f", &val2);

                    test=val1+val2; //teste por valor que somado com val1 possa exibir um resultado incorreto
                    
                    if (test>100000000 || test<-100000000){
                        printf("\e[1;1H\e[2J");
                        printf("Valor grande demais, tente novamente\n");                  
                    }

                }while (val1+val2>100000000 || val1+val2<-100000000);
                
                soma=val1+val2;

                printf("\nA soma total e: %.2f", soma);
            }

            if (op==2){ //operacao de subtracao
                do{
                    printf("Insira o primeiro valor:\n\n");
                    scanf("%f", &val1);

                    if (val1>100000000 || val1<-100000000){ 
                        printf("\e[1;1H\e[2J");
                        printf("Valor invalido, tente novamente\n\n");                  
                    }
                }
                while (val1>100000000 || val1<-100000000);

                do{
                    printf("\nInsira o segundo valor:\n\n");
                    scanf("%f", &val2);

                    test=val1-val2;
                    
                    if (test>100000000 || test<-100000000){
                        printf("\e[1;1H\e[2J");
                        printf("Valor invalido, tente novamente\n");                  
                    }

                }while (val1+val2>100000000 || val1+val2<-100000000);
                
                subt=val1-val2;

                printf("O resultado e: %.2f", subt);
            }
        
            if (op==3){ //operacao de divisao
                do{
                    printf("Insira o primeiro valor:\n\n");
                    scanf("%f", &val1);

                    if (val1>100000000 || val1<-100000000){ 
                        printf("\e[1;1H\e[2J");
                        printf("Valor invalido, tente novamente\n\n");                  
                    }
                }
                while (val1>100000000 || val1<-100000000);

                do{
                    printf("\nInsira o segundo valor:\n\n");
                    scanf("%f", &val2);

                    test=val1/val2;
                    
                    if (test>100000000 || test<-100000000){
                        printf("\e[1;1H\e[2J");
                        printf("Valor invalido, tente novamente\n");                  
                    }

                }while (val1+val2>100000000 || val1+val2<-100000000);
                
                div=val1/val2;

                printf("\nO resultado e: %.2f", div);            
            }

            if (op==4){ //operacao de multiplicacao
                do{
                    printf("Insira o primeiro valor:\n\n");
                    scanf("%f", &val1);

                    if (val1>100000000 || val1<-100000000){ 
                        printf("\e[1;1H\e[2J");
                        printf("Valor invalido, tente novamente\n\n");                  
                    }
                }
                while (val1>100000000 || val1<-100000000);

                do{
                    printf("\nInsira o segundo valor:\n\n");
                    scanf("%f", &val2);

                    test=val1*val2;
                    
                    if (test>100000000 || test<-100000000){
                        printf("\e[1;1H\e[2J");
                        printf("Valor invalido, tente novamente\n");                  
                    }

                }while (val1+val2>100000000 || val1+val2<-100000000);

                mult=val1*val2;

                printf("\nO resultado e: %.2f", mult);                      
            }

            if (op==5){ // operacao de raiz quadrada
                
                do{
                    printf("Insira o valor para realizar a radiciacao:\n\n");
                    scanf("%f", &val1);

                    if (val1>100000000 || val1<-100000000){ 
                        printf("\e[1;1H\e[2J");
                        printf("Valor invalido, tente novamente\n\n");                  
                    }

                } while (val1>100000000 || val1<-100000000);

                squareRoot = sqrt(val1);
                
                printf("\nA raiz de %.2f e %.2f", val1, squareRoot);
            }

            if (op==6){ //operacao de potencia
                do{
                    printf("Insira o valor da base:\n\n");
                    scanf("%f", &val1);

                    if (val1>1000){ 
                        printf("\e[1;1H\e[2J");
                        printf("Valor invalido, tente novamente\n\n");                  
                    }
                }
                while (val1>10000);

                do{
                    printf("\nInsira o valor da potencia:\n\n");
                    scanf("%f", &val2);

                    test = pow(val1,val2);
                    
                    if (test>1000000000){
                        printf("\e[1;1H\e[2J");
                        printf("Valor invalido, tente novamente\n");                  
                    }

                }while (test>1000000000);
                
                pot = pow(val1,val2);

                printf("\n%.2f na %.2fᵃ potencia e %.2f", val1, val2, pot);
            }        
        
        do {
            printf("\n\nDeseja realizar outra operacao?:\n (1) Sim   (2) Nao\n\n"); // voltar a selecao de operacao ou encerrar
            scanf("%d", &loop);

                if (loop==1)
                {
                    printf("\e[1;1H\e[2J");
                }

                else if (loop > 2 || loop < 1)
                {
                    printf("\e[1;1H\e[2J");
                    printf("Voce digitou algo errado, tente novamente.");
                }
        
        }while (loop > 2 || loop < 1);

    }while (loop==1);    

    return 0;
    
    }
