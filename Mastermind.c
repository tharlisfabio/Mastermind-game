#include<stdio.h>
#include<conio.h>
#include <stdbool.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
void menu();
void ModoDeJogo();
void opcao2();
void opcao3();
void singleplayer();
void multiplayer();
void jogadores();
void instrucoes();
void end();
int music(); 
void master();
void cores();     



int main(){
    int opcao, singleplayer; 
    menu();  
}
void menu(){
    system("cls");                                        
    setlocale(LC_ALL,"Portuguese_Brazil");
    int opcao,singleplayer;
                                                                                                                      
    printf(" _|      _|     _|_|       _|_|_|   _|_|_|_|_|   _|_|_|_|   _|_|_|     _|      _|   _|_|_|   _|      _|   _|_|_|    \n");   
    printf(" _|_|  _|_|   _|    _|   _|             _|       _|         _|    _|   _|_|  _|_|     _|     _|_|    _|   _|    _|  \n");
    printf(" _|  _|  _|   _|_|_|_|     _|_|         _|       _|_|_|     _|_|_|     _|  _|  _|     _|     _|  _|  _|   _|    _|  \n");  
    printf(" _|      _|   _|    _|         _|       _|       _|         _|    _|   _|      _|     _|     _|    _|_|   _|    _|  \n");  
    printf(" _|      _|   _|    _|   _|_|_|         _|       _|_|_|_|   _|    _|   _|      _|   _|_|_|   _|      _|   _|_|_|  \n\n");     
    printf("                                                                                             Por:  Tharlis F?bio  \n\n");       
    printf("                                                                                                       &&         \n\n");
    printf("                                                                                                   Jo?o Vitor       \n");                                                                                                               
    
    printf("##===================================##\n");
    printf("||*                                 *||\n");
    printf("||*     1 - Come?ar jogo.           *||\n");
    printf("||*     2 - Como jogar.             *||\n");
    printf("||*     3 - Fechar jogo.            *||\n");
    printf("||*    escolha a op??o desejada:    *||\n");
    printf("||*                                 *||\n");
    printf("##===================================##\n");
    scanf("%i",&opcao);
    music();
    
    system("cls"); 
   
    while(opcao<1 || opcao>3){
    system("cls");                                     
    printf("\7");
                                                                                                                          
    master(); 
    printf("##===================================##\n");
    printf("||*     !!NUMERO INVALIDO!!         *||\n");
    printf("||*     1 - come?ar jogo            *||\n");
    printf("||*     2 - Como jogar.             *||\n");
    printf("||*     3 - Fechar jogo.            *||\n");
    printf("||*     escolha a op??es desejada:  *||\n");
    printf("##===================================##\n");
    scanf("%i",&opcao);
    music();
    system("cls");
    }

    if(opcao==1){
        ModoDeJogo();
    }
    if(opcao==2){
        opcao2();
    }
     if(opcao==3){
        opcao3();
    }      

}
void ModoDeJogo(){
    master();
    int a;   
    printf("##===========================##\n");
    printf("||*                         *||\n");
    printf("||*    - MODO DE JOGO -     *||\n");
    printf("||*                         *||\n");
    printf("||*  1 -  Single Player     *||\n");
    printf("||*  2 -  Multiplayer       *||\n");
    printf("||*  3 -  Volta ao Menu.    *||\n");
    printf("||*                         *||\n");
    printf("##===========================##\n");
    scanf("%i",&a);   
    music();
    system("cls");
    while(a>3 || a<1){
        master();
        int a;   
        printf("##===========================##\n");
        printf("||*                         *||\n");
        printf("||*    - MODO DE JOGO -     *||\n");
        printf("||*                         *||\n");
        printf("||*  1 -  Single Player     *||\n");
        printf("||*  2 -  Multiplayer       *||\n");
        printf("||*  3 -  Volta ao Menu.    *||\n");
        printf("||*                         *||\n");
        printf("##===========================##\n");
        scanf("%i",&a);   
        music();
        system("cls");

        if(a==1){
            singleplayer();
        }
        else if(a==2){
            
            multiplayer();
        }
        else if(a==3){
            menu();
        }                   
    }
    if(a==1){
        singleplayer();
    }
    else if(a==2){
        
        multiplayer();
    }
    else if(a==3){
        menu();
    }                                                                                                                      
}                             
void opcao2(){
    int a;
    system("cls");                                                                                                                 
    master();
    instrucoes();
   
    printf("\t##===========================##\n");
    printf("\t||*                         *||\n");
    printf("\t||*                         *||\n");
    printf("\t||*  1 -  voltar ao menu.   *||\n");
    printf("\t||*                         *||\n");
    printf("\t||*                         *||\n");
    printf("\t##===========================##\n");
    scanf("%i",&a);   
    music();
   
    while (a!=1){
        master(); 
        printf("\7");
        system("cls");
        master();
        instrucoes();
        printf("\t##===========================##\n");
        printf("\t||*                         *||\n");
        printf("\t||*   !!NUMERO INVALIDO!!   *||\n");
        printf("\t||*                         *||\n");
        printf("\t||*  1 -  voltar ao menu.   *||\n");
        printf("\t||*                         *||\n");
        printf("\t||*                         *||\n");
        printf("\t##===========================##\n");
        scanf("%i",&a);   
        music();

    }
    if(a == 1){
        system("cls");
        menu();
    }
}
void opcao3(){
    end();        
}
void singleplayer(){        
    int contP=0;
    int i=0, j, k, n, igual;
    int linha, coluna, vitoria;
    int singleplayer;
    system("cls");
    master();
                                                                                                                      
    printf("##===========================##\n");
    printf("||*                         *||\n");
    printf("||*   !!!CONFIGURA??ES!!!   *||\n");
    printf("||*                         *||\n");
    printf("||*      -DIFICULDADE-      *||\n");
    printf("||*                         *||\n");
    printf("||*     1 - facil.          *||\n");
    printf("||*     2 - medio.          *||\n");
    printf("||*     3 - Dificil.        *||\n");
    printf("||*     4 - Voltar ao menu. *||\n");                               
    printf("##===========================##\n");

    scanf("%i",&singleplayer);
    music();
        
    if (singleplayer>4 || singleplayer<1){         
        while (singleplayer>4 || singleplayer<1){ 
            printf("\7");
            system("cls");
            master();
            printf("##===========================##\n");
            printf("||*                         *||\n");
            printf("||*   !!!CONFIGURA??ES!!!   *||\n");
            printf("||*                         *||\n");
            printf("||*   !!!N?MERO INVALIDO!!! *||\n");
            printf("||*                         *||\n");
            printf("||*     1 - facil.          *||\n");
            printf("||*     2 - medio.          *||\n");
            printf("||*     3 - Dificil.        *||\n");
            printf("||*     4 - Voltar ao menu. *||\n");                               
            printf("##===========================##\n");
            scanf("%i",&singleplayer);
            music();
        }
    }
    
    system("cls");
    
    if(singleplayer==1){    
        linha=10;
        coluna=4;
        vitoria=4;
    }
    if(singleplayer==2){  
        linha=12;
        coluna=5;
        vitoria=5;
    } 
    if(singleplayer==3){  
        linha=14;
        coluna=6;
        vitoria=6;
    }
    if(singleplayer==4){
        menu();
    }
    int pc[coluna];
    srand(time(NULL));


    system("cls");
    int x;
    printf("##===========================##\n");
    printf("||*   !!!CONFIGURA??ES!!!   *||\n");
    printf("||*                         *||\n");
    printf("||*    REPITI??O DE COR     *||\n");        
    printf("||*                         *||\n");
    printf("||*      1 - Habilitar.     *||\n");
    printf("||*      2 - N?o habilitar. *||\n");                              
    printf("||*                         *||\n");
    printf("##===========================##\n");
    scanf("%i",&x);


     while(x!=1 && x!=2 ){
        system("cls");
        printf("##===========================##\n");
        printf("||*   !!!N?MERO INV?LIDO!!! *||\n");
        printf("||*   !!!CONFIGURA??ES!!!   *||\n");
        printf("||*                         *||\n");
        printf("||*    REPITI??O DE COR     *||\n");        
        printf("||*                         *||\n");
        printf("||*      1 - Habilitar.     *||\n");
        printf("||*      2 - N?o habilitar. *||\n");                              
        printf("||*                         *||\n");
        printf("##===========================##\n");
        scanf("%i",&x);
        music();
            
    }
    

    if(x==1){
        for(i=0;i<coluna;i++){
            pc[i]=rand()%8+1;
        }
    }
    else if (x==2)
    {
        
        do{
                pc[i]=rand()%8+1;
                igual=0;
                for(j=0; j<i; j++){
                    if(pc[j]==pc[i]){
                        igual=1;
                    }
                }
                if(igual==0){
                    i++;
                }        
            }while(i<coluna);

        
    }

    system("cls"); 

    int matriz[linha][coluna];
    memset( matriz, 0, sizeof(matriz) );

    for(int j=0;j<coluna;j++){            
        printf("|  ?  |");
    }

    printf("\n");

    for (int i=0; i<linha; i++ ){ 
        for (int j=0; j<coluna; j++ ){                      
            printf ("|  %i  |", matriz[ i ][ j ]);
        }
        printf("\n"); 
    }

    cores();


    for (int i = linha-1; i >= 0; i--){        
        for (int j=0;j<coluna;j++){              
            scanf("%i",&matriz[i][j]);
            music();

            if(matriz[i][j]>8 || matriz[i][j]<1){
                system("cls");
                printf("\7");
                for(int j=0;j<coluna;j++){            
                    printf("|  ?  |");
                }
                printf("\n");
                for (int i=0; i<linha; i++ ){ 
                    int contP=0,contB=0;       
                    for (int j=0; j<coluna; j++ ){    
                        printf ("|  %i  |", matriz[ i ][ j ]);  
                    }    
                    for (int j = 0; j < coluna; j++){
                        if(matriz[i][j]==pc[j]){                                                        
                            contP++;   
                        }
                        else {
                            for (int k=0; k < coluna; k++){
                                if(matriz[i][k]==pc[j] && j!=k){
                                    contB++;
                                }
                            }
                        }  
                    }

                    if (contP+contB > coluna ){
                        contB -= ((contP + contB) - coluna);
                    }
                        
                    for (int g = 0; g < contP; g++){
                        printf("P ");
                    }
                    for (int g = 0; g < contB; g++){
                        printf("B ");
                    }
                    printf("\n");  
                }
                cores();
                printf("\n##===========================##\n");
                printf("||*                         *||\n");
                printf("||*   !!NUMERO INVALIDO!!   *||\n");             
                printf("||*                         *||\n");
                printf("||*    DIGITE NOVAMENTE.    *||\n");
                printf("##===========================##\n");                  
                j--;
                music();
            }

            for(int m=0;m<=j-1;m++){
                if(matriz[i][j]==matriz[i][m] && x==2){
                    system("cls");
                    printf("\7");
                    for(int j=0;j<coluna;j++){            
                        printf("|  ?  |");
                    }
                    printf("\n");
                    for (int i=0; i<linha; i++ ){ 
                        int contP=0,contB=0;       
                        for (int j=0; j<coluna; j++ ){    
                            printf ("|  %i  |", matriz[ i ][ j ]);  
                        }    
                        for (int j = 0; j < coluna; j++){
                            if(matriz[i][j]==pc[j]){                                                                      
                                contP++;  
                            }
                            else {
                                for (int k=0; k < coluna; k++){
                                    if(matriz[i][k]==pc[j] && j!=k){
                                        contB++;
                                    }
                                }
                            }   
                        }

                        if (contP+contB > coluna ){
                            contB -= ((contP + contB) - coluna);
                        }

                        for (int g = 0; g < contP; g++){
                            printf("P ");
                        }
                        for (int g = 0; g < contB; g++){
                            printf("B ");
                        }
                        printf("\n");  
                    }
                    cores();
                    printf("\n##===========================##\n");
                    printf("||*                         *||\n");
                    printf("||*   !!NUMERO INV?LIDO!!   *||\n");             
                    printf("||*                         *||\n");
                    printf("||*    DIGITE NOVAMENTE.    *||\n");
                    printf("##===========================##\n");                   
                    j--;
                    music();
                }
            }
        }

        system("cls");                     
                 
        for(int j=0;j<coluna;j++){            
            printf("|  ?  |");
        }

        printf("\n");

        for (int i=0; i<linha; i++ ){ 

            int contP=0,contB=0;  

            for (int j=0; j<coluna; j++ ){   

                printf ("|  %i  |", matriz[ i ][ j ]);               
            } 

            for (int j = 0; j < coluna; j++){

                if(matriz[i][j]==pc[j]){                               
                    contP++;  
                } 
                else{
                   
                   for (int k=0; k < coluna; k++){

                        if(matriz[i][k]==pc[j] && j!=k){ 
                            contB++;
                        }
                    }
                }  
                
                if(contP==vitoria){    

                    system("cls");

                    for (int i=0;i<coluna;i++){
                        printf("|  %i  |",pc[i]);
                    }

                    printf("\n");
                    for (int i=0; i<linha; i++ ){ 
                        int contP=0,contB=0;       
                        for (int j=0; j<coluna; j++ ){    
                            printf ("|  %i  |", matriz[ i ][ j ]);  
                        }    
                        for (int j = 0; j < coluna; j++){
                            if(matriz[i][j]==pc[j]){                                                     
                                contP++;   
                            }
                            else {
                                for (int k=0; k < coluna; k++){
                                    if(matriz[i][k]==pc[j] && j!=k){
                                        contB++;
                                    }
                                }
                            }
                            
                        }

                        if (contP+contB > coluna ){ 
                            contB -= ((contP + contB) - coluna);
                        }
                        
                        for (int g = 0; g < contP; g++){
                            printf("P ");
                        }
                        for (int g = 0; g < contB; g++){
                            printf("B ");
                        }
                        printf("\n");  
                    }
                    cores();                      
                    int opcao;
                    printf("\7");
                    printf("##===========================##\n");
                    printf("||*                         *||\n");
                    printf("||*      !!!PARABENS!!!     *||\n");
                    printf("||*           VOC?          *||\n");
                    printf("||*      !!! GANHOU !!!     *||\n");
                    printf("||*            :)           *||\n");
                    printf("||*   1 -  voltar ao menu.  *||\n");
                    printf("||*   2 - Para fechar.      *||\n");
                    printf("||*                         *||\n");
                    printf("##===========================##\n");
                    scanf("%i",&opcao);   
                    music();
                    while(opcao<1 || opcao>2){
                        system("cls");
                        for (int i=0;i<coluna;i++){
                            printf("|  %i  |",pc[i]);
                        }
                        for (int i=0;i<linha; i++ ){
                            for (int j=0; j<coluna; j++ ){      
                                printf ("|  %i  |", matriz[ i ][ j ]);
                            }
                        printf("\n");
                        }
                        printf("\7");
                        system("cls");
                        printf("##===========================##\n");
                        printf("||*                         *||\n");
                        printf("||*    !!OP??O INV?LIDA!!   *||\n");
                        printf("||*   !!DIGITE NOVAMENTE!!  *||\n");
                        printf("||*   1 - voltar ao menu.   *||\n");
                        printf("||*   2 - fechar o jogo.    *||\n");
                        printf("||*                         *||\n");
                        printf("##===========================##\n");
                        scanf("%i",&opcao);
                        music();
                    }
                    if(opcao==1){
                        menu();
                    }
                    if(opcao==2){
                        system("cls");
                        end();                                                 
                    }
                }

            }

            if(contP+contB > coluna ){
                contB -= ((contP + contB) - coluna);
            }

            for (int g = 0; g < contP; g++){                     
                printf("P ");
            }

            for (int g = 0; g < contB; g++){                        
                printf("B ");
            }

            printf("\n");  
        }
        cores();
    }

    system("cls");


    for (int i=0;i<coluna;i++){
        printf("|  %i  |",pc[i]);
    }

    printf("\n");

    for (int i=0;i<linha; i++ ){                                               
        int contP=0, contB=0;
        for (int j=0; j<coluna; j++ ){      
            printf ("|  %i  |", matriz[ i ][ j ]);
        }
        for (int j = 0; j < coluna; j++){
            if(matriz[i][j]==pc[j]){                                                                       
                contP++;   
            }
            else {
                for (int k=0; k < coluna; k++){
                    if(matriz[i][k]==pc[j] && j!=k){
                        contB++;
                    }
                }
            }
        }
        if (contP+contB > coluna ){
            contB -= ((contP + contB) - coluna);
        }
        for (int g = 0; g < contP; g++){
            printf("P ");       
        }
        for (int g = 0; g < contB; g++){        
            printf("B ");
        }
        printf("\n");
    }

    int opcao;
    printf("\7");

    printf("##===========================##\n");
    printf("||*                         *||\n");
    printf("||*      !!!PARABENS!!!     *||\n");
    printf("||*           VOC?          *||\n");
    printf("||*      !!! PERDEU !!!     *||\n");
    printf("||*            :(           *||\n");
    printf("||*   1 -  voltar ao menu.  *||\n");
    printf("||*   2 - Para fechar.      *||\n");
    printf("||*                         *||\n");
    printf("##===========================##\n");
    
    scanf("%i",&opcao);   
    music();
    while(opcao<1 || opcao>2){

        system("cls");

        for (int i=0;i<coluna;i++){
            printf("|  %i  |",pc[i]);
        }

        for (int i=0;i<linha; i++ ){
            int contP=0, contB=0;
            for (int j=0; j<coluna; j++ ){      
                printf ("|  %i  |", matriz[ i ][ j ]);
            }
            for (int j = 0; j < coluna; j++){
                if(matriz[i][j]==pc[j]){                                                                     
                    contP++;   
                }
                else {
                    for (int k=0; k < coluna; k++){
                        
                        if(matriz[i][k]==pc[j] && j!=k){
                            contB++;
                        }
                    }
                }    
            }
            if (contP+contB > coluna ){
                contB -= ((contP + contB) - coluna);
            }
            for (int g = 0; g < contP; g++){
                printf("P ");       
            }
            for (int g = 0; g < contB; g++){        
                printf("B ");
            }
            printf("\n");
        }

        printf("\7");
        system("cls");
        printf("##===========================##\n");
        printf("||*                         *||\n");
        printf("||*    !!OP??O INV?LIDA!!   *||\n");
        printf("||*   !!DIGITE NOVAMENTE!!  *||\n");
        printf("||*   1 - voltar ao menu.   *||\n");
        printf("||*   2 - fechar o jogo.    *||\n");
        printf("||*                         *||\n");
        printf("##===========================##\n");
        scanf("%i",&opcao);
        music();

    }

    if(opcao==1){
        menu();
    }

    if(opcao==2){
        system("cls");
        end();                                                      
    }          

}


void multiplayer(){
    
    int contP=0;
    int i=0, j, k, n, igual,v1=0,v2=0,fim;
    int p=0,partidas,jogador;
    int linha, coluna, vitoria;
    int multiplayer;
                                                                                                                              
    master();
                                                                                                                      
    printf("##===========================##\n");
    printf("||*                         *||\n");
    printf("||*   !!!CONFIGURA??ES!!!   *||\n");
    printf("||*                         *||\n");
    printf("||*      -DIFICULDADE-      *||\n");
    printf("||*                         *||\n");
    printf("||*     1 - f?cil.          *||\n");
    printf("||*     2 - m?dio.          *||\n");
    printf("||*     3 - Dif?cil.        *||\n");
    printf("||*     4 - Voltar ao menu. *||\n");                              
    printf("##===========================##\n");

    scanf("%i",&multiplayer);
    music();
    
    if (multiplayer>4 || multiplayer<1){         
        while (multiplayer>4 || multiplayer<1){ 
            printf("\7");
            system("cls");
            master();
            printf("##===========================##\n");
            printf("||*                         *||\n");
            printf("||*   !!!CONFIGURA??ES!!!   *||\n");
            printf("||*                         *||\n");
            printf("||*   !!!N?MERO INV?LIDO!!! *||\n");
            printf("||*                         *||\n");
            printf("||*     1 - f?cil.          *||\n");
            printf("||*     2 - m?dio.          *||\n");
            printf("||*     3 - Dif?cil.        *||\n");
            printf("||*     4 - Voltar ao menu. *||\n");                               
            printf("##===========================##\n");
            scanf("%i",&multiplayer);
            music();
        }
    }
    system("cls");
    
    if(multiplayer==1){    
        linha=10;
        coluna=4;
        vitoria=4;
    }
    if(multiplayer==2){  
        linha=12;
        coluna=5;
        vitoria=5;     
    } 
    if(multiplayer==3){  
        linha=14;
        coluna=6;
        vitoria=6;
    }
    else if(multiplayer==4){
        menu();
    }

    int pc[coluna];
    printf("digite o numero de partidas:");
    scanf("%i",&partidas);
    music();
    system("cls");
   
    while(partidas%2!=0){
        printf("NUMERO INV?LIDO!\n\n");
        printf("Digite o numero de partidas:");
        scanf("%i",&partidas);
        music();
        system("cls");
    }

    system("cls");
    int r;
    printf("##===========================##\n");
    printf("||*   !!!CONFIGURA??ES!!!   *||\n");
    printf("||*                         *||\n");
    printf("||*    REPITI??O DE COR     *||\n");        
    printf("||*                         *||\n");
    printf("||*     1 - Habilitar .     *||\n");
    printf("||*     2 - N?o habilitar.  *||\n");                              
    printf("||*                         *||\n");
    printf("##===========================##\n");
    scanf("%i",&r);

    while(r!=1 && r!=2 ){
        system("cls");
        printf("##===========================##\n");
        printf("||*   !!!N?MERO INV?LIDO!!! *||\n");
        printf("||*   !!!CONFIGURA??ES!!!   *||\n");
        printf("||*                         *||\n");
        printf("||*    REPITI??O DE COR     *||\n");        
        printf("||*                         *||\n");
        printf("||*      1 - Habilitar.     *||\n");
        printf("||*      2 - N?o habilitar. *||\n");                              
        printf("||*                         *||\n");
        printf("##===========================##\n");
        scanf("%i",&r);
        music();
            
    }



    if(r==1){ 

        system("cls");
        printf("Desafiado, vire-se para o desafiante digitar a senha. \n");
        cores();
        printf("DIGITE A SENHA:\n");
        for (int i=0;i<coluna;i++){
            scanf("%i",&pc[i]);
            music();

            if(pc[i]>8 || pc[i]<1){
                system("cls");
                printf("Desafiado, vire-se para o desafiante digitar a senha. \n");
                printf("Sem repeti??es\n");
                cores();
                printf("DIGITE A SENHA:\n");
                for(int n=0;n<i;n++){
                    printf("%i\n",pc[n]);
                }
                printf("\n!!NUMERO INV?LIDO!!\n");             
                printf("Continue Digitando a senha normalmente:\n");
                i--;  
            }
        }
    }

    else if (r==2){
        system("cls");
        printf("Desafiado, vire-se para o desafiante digitar a senha. \n");
        cores();
        printf("DIGITE A SENHA:\n");
        for (int i=0;i<coluna;i++){
            scanf("%i",&pc[i]);
            music();

            if(pc[i]>8 || pc[i]<1){
                system("cls");
                printf("Desafiado, vire-se para o desafiante digitar a senha. \n");
                printf("Sem repeti??es\n");
                cores();
                printf("DIGITE A SENHA:\n");
                for(int n=0;n<i;n++){
                    printf("%i\n",pc[n]);
                }
                printf("\n!!NUMERO INV?LIDO!!\n");             
                printf("Continue Digitando a senha normalmente:\n");
                i--;  
            }
            for(int k=0;k<=i-1;k++){
                if(pc[i]==pc[k]){
                    system("cls");
                    printf("Desafiado, vire-se para o desafiante digitar a senha. \n");
                    printf("Sem repeti??es\n");
                    cores();
                    printf("DIGITE A SENHA:\n");
                    for(int n=0;n<i;n++){
                        printf("%i\n",pc[n]);
                    }
                    printf("\n!!NUMERO J? DIGITADO!!\n");             
                    printf("Continue Digitando a senha normalmente:\n");
                    i--;
                }
            }
        }  
    }
     
    for (int p=0;p<partidas; p++){  
        int l;
        if (p%2==0){
            l=1;
        }
        else{
            l=2;
        }

        if(p!=0){
            system("cls");
            printf("Desafiado, vire-se para o desafiante digitar a senha. \n");
            printf("Sem repeti??es\n");
            cores();
            printf("DIGITE A SENHA:\n");
            for (int i=0;i<coluna;i++){
                scanf("%i",&pc[i]);
                music();
                if(pc[i]>8 || pc[i]<1){
                    system("cls");
                    printf("Desafiado, vire-se para o desafiante digitar a senha. \n");
                    printf("Sem repeti??es\n");
                    cores();
                    printf("DIGITE A SENHA:\n");
                    for(int n=0;n<i;n++){
                        printf("%i\n",pc[n]);
                    }
                    printf("\n!!NUMERO INV?LIDO!!\n");             
                    printf("Continue Digitando a senha normalmente:\n");
                    i--;  
                }
                for(int k=0;k<=i-1;k++){
                    if(pc[i]==pc[k] && r==2){
                        system("cls");
                        printf("Desafiado, vire-se para o desafiante digitar a senha. \n");
                        printf("Sem repeti??es\n");
                        cores();
                        printf("DIGITE A SENHA:\n");
                        for(int n=0;n<i;n++){
                            printf("%i\n",pc[n]);
                        }
                        printf("\n!!N?MERO J? DIGITADO!!\n");             
                        printf("Continue Digitando a senha normalmente:\n");
                        i--;
                    }
                }
            }          
        }   


        system("cls"); 
        int matriz[linha][coluna];
        memset( matriz, 0, sizeof(matriz) );
        for(int j=0;j<coluna;j++){            
            printf("|  ?  |");
        }
        printf("\t\t|%i/%i|\n",p+1,partidas);
        for (int i=0; i<linha; i++ ){ 
            for (int j=0; j<coluna; j++ ){            
                printf ("|  %i  |", matriz[ i ][ j ]);
            }
            printf("\n"); 
        }
        cores();
        for (int i=linha-1; i >= 0; i--){        
            for (int j=0;j<coluna;j++){             
                scanf("%i",&matriz[i][j]);
                music();
                if(matriz[i][j]>8 || matriz[i][j]<1){
                    system("cls");
                    printf("\7");
                    for(int j=0;j<coluna;j++){            
                        printf("|  ?  |");
                    }
                    printf("\n");
                    for (int i=0; i<linha; i++ ){ 
                        int contP=0,contB=0;       
                        for (int j=0; j<coluna; j++ ){    
                            printf ("|  %i  |", matriz[ i ][ j ]);  
                        }    
                        for (int j = 0; j < coluna; j++){
                           
                             if(matriz[i][j]==pc[j]){                                                                   
                               contP++;   
                             }
                             else {
                                for (int k=0; k < coluna; k++){
                                    if(matriz[i][k]==pc[j] && j!=k){
                                        contB++;
                                    }
                                }
                            } 
                            
                        }
                        
                        if (contP+contB > coluna ){
                            contB -= ((contP + contB) - coluna);
                        }   

                        for (int g = 0; g < contP; g++){
                            printf("P ");
                        }
                        for (int g = 0; g < contB; g++){
                            printf("B ");
                        }
                        printf("\n");  
                    }
                    cores();
                    printf("\n##===========================##\n");
                    printf("||*                         *||\n");
                    printf("||*   !!NUMERO INV?LIDO!!   *||\n");           
                    printf("||*                         *||\n");
                    printf("||*    DIGITE NOVAMENTE.    *||\n");
                    printf("##===========================##\n");                  
                    j--;
                    music();
                }

                for(int m=0;m<=j-1;m++){
                    if(matriz[i][j]==matriz[i][m] && r==2){
                        system("cls");
                        printf("\7");
                        for(int j=0;j<coluna;j++){            
                            printf("|  ?  |");
                        }
                        printf("\n");
                        for (int i=0; i<linha; i++ ){ 
                            int contP=0,contB=0;       
                            for (int j=0; j<coluna; j++ ){    
                                printf ("|  %i  |", matriz[ i ][ j ]);  
                            }    
                           
                            for (int j = 0; j < coluna; j++){
                                 if(matriz[i][j]==pc[j]){                                                               
                                    contP++;   
                                }
                                else {
                                    for (int k=0; k < coluna; k++){    
                                        if(matriz[i][k]==pc[j] && j!=k){
                                            contB++;
                                        }
                                    }
                                }   
                            
                            }
                               
                            if (contP+contB > coluna ){
                            
                                contB -= ((contP + contB) - coluna);
                            }


                            for (int g = 0; g < contP; g++){
                                printf("P ");
                            }
                            for (int g = 0; g < contB; g++){
                                printf("B ");
                            }
                            printf("\n");  
                        }
                        cores();
                        printf("\n##===========================##\n");
                        printf("||*                         *||\n");
                        printf("||*   !!NUMERO INV?LIDO!!   *||\n");             
                        printf("||*                         *||\n");
                        printf("||*    DIGITE NOVAMENTE.    *||\n");
                        printf("##===========================##\n");                 
                        j--;
                        music();
                    }
                } 
                
            }

            system("cls");                     

                        
            for(int j=0;j<coluna;j++){            
                printf("|  ?  |");
            }
            printf("\t\t|%i/%i|\n",p+1,partidas);
            for (int i=0; i<linha; i++ ){ 
                int contP=0,contB=0;       
                for (int j=0; j<coluna; j++ ){     
                    printf ("|  %i  |", matriz[ i ][ j ]);  
                }      
                for (int j = 0; j < coluna; j++){
                    if(matriz[i][j]==pc[j]){                                                                       
                    contP++;   
                    }
                    else {
                        for (int k=0; k < coluna; k++){
                            if(matriz[i][k]==pc[j] && j!=k){
                                contB++;
                            }
                        }
                    }    
                    if(contP==vitoria){                                
                        system("cls");
                        for (int i=0;i<coluna;i++){
                            printf("|  %i  |",pc[i]);
                        }
                        printf("\t\t|%i/%i|",p+1,partidas);
                        printf("\n");
                        for (int i=0; i<linha; i++ ){ 
                            int contP=0,contB=0;       
                            for (int j=0; j<coluna; j++ ){    
                                printf ("|  %i  |", matriz[ i ][ j ]);  
                            }    
                            for (int j = 0; j < coluna; j++){
                                if(matriz[i][j]==pc[j]){                                                                      
                                    contP++;   
                                    }
                                else {
                                    for (int k=0; k < coluna; k++){
                                        if(matriz[i][k]==pc[j] && j!=k){
                                            contB++;
                                        }
                                    }
                                }
                            }

                            if (contP+contB > coluna ){   
                                
                                contB -= ((contP + contB) - coluna);
                            }
                             
                            for (int g = 0; g < contP; g++){
                                printf("P ");
                            }
                            for (int g = 0; g < contB; g++){
                                printf("B ");
                            }
                            printf("\n");  
                        }
                        if(l==1){
                            v1++;
                        }if(l==2){
                            v2++;
                        }
                        cores();                      
                        int opcao;
                        printf("\7");
                        printf("##===========================##\n");
                        printf("||*                         *||\n");
                        printf("||*         JOGADOR %i       *||\n",l);
                        printf("||*      !!! GANHOU !!!     *||\n");
                        printf("||*            :)           *||\n");
                        printf("||*   1 - Continuar         *||\n");
                        printf("||*   2 -  voltar ao menu.  *||\n");
                        printf("||*   3 - Para fechar.      *||\n");
                        printf("##===========================##\n");
                        scanf("%i",&opcao);   
                        music();
                        while(opcao<1 || opcao>3){
                            system("cls");
                            for (int i=0;i<coluna;i++){
                                printf("|  %i  |",pc[i]);
                            }
                            printf("\t\t|%i/%i|",p+1,partidas);
                            printf("\n");
                            for (int i=0;i<linha; i++ ){
                                for (int j=0; j<coluna; j++ ){      
                                    printf ("|  %i  |", matriz[ i ][ j ]);
                                }
                            printf("\n");
                            }
                            printf("\7");
                            printf("##===========================##\n");
                            printf("||*                         *||\n");
                            printf("||*    !!OP??O INV?LIDA!!   *||\n");
                            printf("||*   !!DIGITE NOVAMENTE!!  *||\n");
                            printf("||*   1 - Continuar         *||\n");
                            printf("||*   2 -  voltar ao menu.  *||\n");
                            printf("||*   3 - Para fechar.      *||\n");
                            printf("##===========================##\n");
                            scanf("%i",&opcao);
                            music();
                        }
                        if(opcao==1){
                            goto inicio;
                        }
                        if(opcao==2){
                            menu();                                                 
                        }
                        if(opcao==3){
                            system("cls");
                            end();
                            
                        } 
                    }
                }
                if (contP+contB > coluna ){               
                    contB -= ((contP + contB) - coluna);
                }
                for (int g = 0; g < contP; g++){
                    printf("P ");
                }
                for (int g = 0; g < contB; g++){
                    printf("B ");
                }
                printf("\n");  
            }
            cores();
        }

        system("cls");
        for (int i=0;i<coluna;i++){
            printf("|  %i  |",pc[i]);
        }
        printf("\t\t|%i/%i|", p+1,partidas);
        printf("\n");
        for (int i=0;i<linha; i++ ){                                                 
            int contP=0, contB=0;
            for (int j=0; j<coluna; j++ ){      
                printf ("|  %i  |", matriz[ i ][ j ]);
            }
            for (int j = 0; j < coluna; j++){
                if(matriz[i][j]==pc[j]){                                                                     
                    contP++;   
                }
                else{
                    for (int k = 0; k < coluna; k++){
                        if(pc[j]==matriz[i][k] && j!=k){
                            contB++;
                        }
                    }
                }
            }

            if (contP+contB > coluna ){
                
                contB -= ((contP + contB) - coluna);
            }
            for (int g = 0; g < contP; g++){
                printf("P ");
            
            }
            for (int g = 0; g < contB; g++){
            
                printf("B ");


            }

            printf("\n");
        }
        if(l==1){
            v2++;
        }if(l==2){
            v1++;
        }
        int opcao;
        printf("\7");

        printf("##===========================##\n");
        printf("||*                         *||\n");
        printf("||*         JOGADOR %i       *||\n",l);
        printf("||*      !!! PERDEU !!!     *||\n");
        printf("||*            :(           *||\n");
        printf("||*   1 - Continuar jogo    *||\n");
        printf("||*   2 -  voltar ao menu.  *||\n");
        printf("||*   3 - Para fechar.      *||\n");
        printf("##===========================##\n");

        
        
        scanf("%i",&opcao);   
        music();
        while(opcao<1 || opcao>3){
            system("cls");
            for (int i=0;i<coluna;i++){
                printf("|  %i  |",pc[i]);
            }
            printf("\t\t|%i/%i|",p+1,partidas);
            for (int i=0;i<linha; i++ ){
                for (int j=0; j<coluna; j++ ){      
                    printf ("|  %i  |", matriz[ i ][ j ]);
            }
            printf("\n");
            }
            printf("\7");

            printf("##===========================##\n");
            printf("||*                         *||\n");
            printf("||*    !!OP??O INV?LIDA!!   *||\n");
            printf("||*   !!DIGITE NOVAMENTE!!  *||\n");
            printf("||*   1 - continuar jogo    *||\n");
            printf("||*   2 - voltar ao menu.   *||\n");
            printf("||*   3 - para fechar.      *||\n");
            printf("##===========================##\n");
            scanf("%i",&opcao);
            music();

        }
        if(opcao==1){
          goto inicio;
        }
        if(opcao==2){
            menu();                                            
        }
        if(opcao==3){
            end();      
           system("cls");
        } 

        inicio:

        if(p+1==partidas){
            if (v1>v2){
                fim=1;
            }
            else if(v2>v1){
                fim=2;
            }  
            printf("##===========================##\n");
            printf("||*                         *||\n");
            printf("||*    !!! FIM DE JOGO !!!  *||\n");
            printf("||*                         *||\n");
            printf("||*  JOGADOR 1 :%i VIT?RIAS  *||\n",v1);
            printf("||*  JOGADOR 2 :%i VIT?RIAS  *||\n",v2);
            printf("||*                         *||\n");
            if(v1==v2){
                printf("||*     !!!  EMPATE !!!     *||\n");
                printf("||*                         *||\n");
                printf("||*   DESEMPATE NO JOKENP?  *||\n");
                printf("||*          ;)             *||\n");
                printf("||*                         *||\n");
                printf("||*   1 -  voltar ao menu.  *||\n");
                printf("||*   2 - Para fechar.      *||\n");
                printf("##===========================##\n");

                
                
            }
            else if(v1!=v2){
                printf("||*     !!! PARAB?NS !!!    *||\n");
                printf("||*         JOGADOR %i       *||\n",fim);
                printf("||*                         *||\n");
                printf("||*   1 -  voltar ao menu.  *||\n");
                printf("||*   2 - Para fechar.      *||\n");
                printf("##===========================##\n");
            }
            
            scanf("%i",&opcao);
            music();
            if(opcao==1){
                menu();
            }
            if(opcao==2){
                end();                                           
            }
        } 
    }
}

void jogadores(){
    system("cls");
    master();
    int a;
    printf("##===========================##\n");
    printf("||*                         *||\n");
    printf("||*   !!!CONFIGURA??ES!!!   *||\n");
    printf("||*                         *||\n");
    printf("||*     -MODO DE JOGO-      *||\n");
    printf("||*                         *||\n");
    printf("||*  1 -  Single Player.    *||\n");
    printf("||*  2 -  Multiplayer.      *||\n");
    printf("||*  3 -  Volta ao Menu.    *||\n");
    printf("##===========================##\n");
    scanf("%i",&a);   
    music();
    system("cls");
    if(a==1){    
        singleplayer();
    }
    else if(a==2){  
        multiplayer();
    } 
    else if(a==3){  
        menu();
    }      
    while(a<1 || a>3){
        system("cls");                                        
        printf("\7");
        master();
    
        printf("##===========================##\n");
        printf("||*                         *||\n");
        printf("||*   !!N?MERO INV?LIDO!!   *||\n");
        printf("||*    - MODO DE JOGO -     *||\n");
        printf("||*                         *||\n");
        printf("||*  1 -  Single Player     *||\n");
        printf("||*  2 -  Multiplayer       *||\n");
        printf("||*  3 -  Volta ao Menu.    *||\n");
        printf("||*                         *||\n");
        printf("##===========================##\n");
        scanf("%i",&a);   
        music();
        system("cls");
        if(a==1){    
            singleplayer();
        }
        else if(a==2){  
            multiplayer();
        } 
        else if(a==3){  
            menu();
        }                                                                                                                                
    }
}
void instrucoes(){
    printf("\t|-----------------------------------INSTRU??ES-------------------------------------|\n");
    printf("\t|                                                                                  |\n");
    printf("\t|  Antes de jogar, os jogadores decidem o n?mero de partidas que v?o jogar,        |\n");
    printf("\t|  considerando que ? preciso jogar um n?mero par de partidas para que os dois     |\n");
    printf("\t|  jogadores tenham o mesmo n?mero de oportunidade como desafiante e desafiado.    |\n");
    printf("\t|                                                                                  |\n");
    printf("\t|  O primeiro a jogar como desafiante seleciona quatro pinos coloridos, coloca-os  |\n");
    printf("\t|  no tabuleiro e os esconde com a trave, formando assim, uma senha. A senha       |\n");
    printf("\t|  pode ser formada por qualquer combina??o de pinos coloridos.                    |\n");
    printf("\t|                                                                                  |\n");
    printf("\t|  O outro jogador, o desafiado, tem at? X tentativas(dependendo da dificuldade)   |\n");
    printf("\t|  para reproduzir exatamente a senha, sem nunca v?-la. Cada tentativa ? feita     |\n");
    printf("\t|  colocando uma fila de pinos no tabuleiro cada fila colocada deve permanecer     |\n");
    printf("\t|  na mesma posi??o durante todo o jogo.                                           |\n");
    printf("\t|                                                                                  |\n");
    printf("\t|  Depois de cada tentativa, o desafiante 'responde' ao desafiado se ele est?      |\n");
    printf("\t|  no caminho certo, colocando os pinos brancos ou pretos da seguinte forma:       |\n");
    printf("\t|    - pino branco: indica que a cor de um dos pinos colocados pelo desafiado      |\n");
    printf("\t|    coincide com a cor de um dos pinos da senha, mas a sua posi??o n?o est?       |\n");
    printf("\t|    correta;                                                                      |\n");
    printf("\t|    - pino preto: indica que um dos pinos colocados pelo desafiado coincide com   |\n");
    printf("\t|    um dos pinos da senha, em cor e posi??o;                                      |\n");
    printf("\t|    - nenhum pino: significa que nem a cor e nem a posi??o est?o corretas.        |\n");
    printf("\t|                                                                                  |\n");
    printf("\t|  N?o existe ordem para a coloc?o dos pinos brancos e pretos. O desafiante n?o    |\n");
    printf("\t|  informa a cor nem a posi??o correspondente ao pino branco, ao preto             |\n");
    printf("\t|  ou ao espa?o vazio. ? nessa coloca??o aleat?ria dos pinos brancos e pretos      |\n");
    printf("\t|  que est? o verdadeiro desafio do jogo, pois o desafiado tentar? deduzir,        |\n");
    printf("\t|  por suas jogadas anteriores, qual ? a sequ?ncia correta da senha.               |\n");
    printf("\t|                                                                                  |\n");
    printf("\t|  Quando o desafiado reproduzir a sequ?ncia exata da senha, o desafiante          |\n");
    printf("\t|  colocar? um pino preto para cada pino colorido na linha ao lado, revelando,     |\n");
    printf("\t|  neste momento, a senha.                                                         |\n");
    printf("\t|                                                                                  |\n");
    printf("\t|----------------------------------------------------------------------------------|\n\n\n");
}
void end(){    
    system("cls");
    system("cls");
    printf("     _|_|   _|                              _|                    _|                                    \n"); 
    printf("   _|            _|_|_|  _|_|           _|_|_|     _|_|                  _|_|       _|_|_|     _|_|     \n");
    printf(" _|_|_|_|   _|   _|    _|    _|       _|    _|   _|_|_|_|         _|   _|    _|   _|    _|   _|    _|   \n");
    printf("   _|       _|   _|    _|    _|       _|    _|   _|               _|   _|    _|   _|    _|   _|    _|   \n");
    printf("   _|       _|   _|    _|    _|         _|_|_|     _|_|_|         _|     _|_|       _|_|_|     _|_|     \n");   
    printf("                                                                  _|                    _|              \n");
    printf("                                                                  _|                  _|_|              \n");
    printf("         Por:  Tharlis F?bio                                                                          \n\n");       
    printf("                    &&                                                                                \n\n");
    printf("                Jo?o Victor                                                                             \n");
    exit(0); 
}
int music(){
    return Beep(600, 150);   
}                                                                                                                                                                                                                                             
void master(){                                                                                                                     
    printf(" _|      _|     _|_|       _|_|_|   _|_|_|_|_|   _|_|_|_|   _|_|_|     _|      _|   _|_|_|   _|      _|   _|_|_|    \n");   
    printf(" _|_|  _|_|   _|    _|   _|             _|       _|         _|    _|   _|_|  _|_|     _|     _|_|    _|   _|    _|  \n");
    printf(" _|  _|  _|   _|_|_|_|     _|_|         _|       _|_|_|     _|_|_|     _|  _|  _|     _|     _|  _|  _|   _|    _|  \n");  
    printf(" _|      _|   _|    _|         _|       _|       _|         _|    _|   _|      _|     _|     _|    _|_|   _|    _|  \n");  
    printf(" _|      _|   _|    _|   _|_|_|         _|       _|_|_|_|   _|    _|   _|      _|   _|_|_|   _|      _|   _|_|_|\n\n\n");    
}
void cores(){
    printf("##======================================##\n");
    printf("|-----------------CORES------------------|\n");
    printf("|    1-VERMELHO    |       2-AZUL        |\n");
    printf("|    3-MARROM      |       4-VERDE       |\n");
    printf("|    5-ROSA        |       6-PRETO       |\n");
    printf("|    7-BRANCO      |       8-AMARELO     |\n");
    printf("##======================================##\n");
}