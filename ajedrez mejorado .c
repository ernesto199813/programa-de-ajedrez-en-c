// Programa de Ernesto Marchetti para mover Peones ,Alfiles ,Caballos ,Torres ,Reina y Rey //

#include<stdio.h>

#include<stdlib.h>

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);

int validFormat(const char*, void*);

int b=1;

int main (){

/* 

i = para contar la cantidad de filas del tablero

j= para contar la cantidad de columnas del tablero

opc= Opciones que desea realizar en el programa

turno= Variable que indica si le toca jugar a las fichas blancas o negras

*/	


int i,j,opc=0,turno=1;

/*variables cuya funcion es el movimiento de el peon*/

int direccion_peon=0,movimiento,Y1X0=0,Y1X1=0,Y1X2=0,Y1X3=0,Y1X4=0,Y1X5=0,Y1X6=0,Y1X7=0,

Y6X0=0,Y6X1=0,Y6X2=0,Y6X3=0,Y6X4=0,Y6X5=0,Y6X6=0,Y6X7=0,PB=0,PN=0;

/*variables cuya funcion es el movimiento de el alfil*/

int Alfil=0,direccion_alfil=0,movimiento_alfil=0,A4_1=0,A4_2=0,A3_1=0,A3_2=0,A1_1=0,A1_2=0,A2_1=0,A2_2=0,A1=0,A2=0,A3=0,A4=0;

/*variables cuya funcion es el movimiento de el caballo*/

int caballo=0,caballo_movimiento=0,PCBI=0,PCBD=0,PCNI=0,PCND=0,PCBI_2=0,PCBD_2=0,PCNI_2=0,PCND_2=0;

/*variables cuya funcion es el movimiento de  la torre*/

int T1_1=0,T1_2=0,T2_1=0,T2_2=0,T3_1=0,T3_2=0,T4_1=0,T4_2=0,movimiento_torre=0,direccion_torre=0,torre=0,TORRE_A=0,TORRE_B=0,TORRE_C=0,TORRE_D=0;

/*variables cuya funcion es el movimiento de  la reina*/

int direccion_reina=0,movimiento_reina=0,M1_1=0,M1_2=0,M2_1=0,M2_2=0,REINA_A=0,REINA_B=0;

/*variables cuya funcion es el movimiento de  la rey*/

int direccion_rey=0,movimiento_rey=0,R1_1=0,R1_2=0,R2_1=0,R2_2=0,REY_A=0,REY_B=0;


char tablero[9][9];

do{

opc=0;

for(i=0;i<=8; i++){

for(j=0;j<=8;j++){

/*p=peones*/

tablero[1+Y1X0][0]='P';	

tablero[1+Y1X1][1]='P';	

tablero[1+Y1X2][2]='P';	

tablero[1+Y1X3][3]='P';	

tablero[1+Y1X4][4]='P';	

tablero[1+Y1X5][5]='P';	

tablero[1+Y1X6][6]='P';	

tablero[1+Y1X7][7]='P';	

tablero[6-Y6X0][0]='P';	

tablero[6-Y6X1][1]='P';	

tablero[6-Y6X2][2]='P';	

tablero[6-Y6X3][3]='P';	

tablero[6-Y6X4][4]='P';	

tablero[6-Y6X5][5]='P';	

tablero[6-Y6X6][6]='P';	

tablero[6-Y6X7][7]='P';	


/*A=alfil*/

tablero[7+A1_1][2+A1_2]='A';

tablero[7+A2_1][5+A2_2]='A';

tablero[0+A3_1][5+A3_2]='A';

tablero[0+A4_1][2+A4_2]='A';

/*C=Caballos */

tablero[0+PCNI][1+PCNI_2]='C';

tablero[0+PCND][6+PCND_2]='C';

tablero[7+PCBI][1+PCBI_2]='C';

tablero[7+PCBD][6+PCBD_2]='C';


/*T=torres*/

tablero[0+T1_1][0+T1_2]='T';	

tablero[0+T2_1][7+T2_2]='T';	

tablero[7+T3_1][0+T3_2]='T';	

tablero[7+T4_1][7+T4_2]='T';


/*M=reina */

tablero[7+M1_1][3+M1_2]='M';

tablero[0+M2_1][3+M2_2]='M';

/*R=rey*/

tablero[0+R2_1][4+R2_2]='R';

tablero[7+R1_1][4+R1_2]='R';



/*Numeros para guiarse en el tablero y saber en que cordenada se encuentra la pieza , 

unos funcionan para representan la colocacion en x y los otros en y*/

tablero[0][8]='0';

tablero[1][8]='1';

tablero[2][8]='2';

tablero[3][8]='3';

tablero[4][8]='4';

tablero[5][8]='5';

tablero[6][8]='6';

tablero[7][8]='7';

tablero[8][0]='0';

tablero[8][1]='1';

tablero[8][2]='2';

tablero[8][3]='3';

tablero[8][4]='4';

tablero[8][5]='5';

tablero[8][6]='6';

tablero[8][7]='7';

/* imprimir espacios en blanco en el tablero */
	
tablero[i][j]=' ';	

}}

do{

if(turno==3){
	
turno=turno-2;		
}

if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}


for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}


printf("\n\nDesea mover:\n ");

printf("\n1-Un peon");

printf("\n2-Un alfil");

printf("\n3-Un Caballo");

printf("\n4-Una torre");

printf("\n5-La reina");

printf("\n6-El rey");

printf("\n7-Desea salir del programa\n");

if(validFormat("%i", & opc)) continue;

if(opc>=1 && opc<=7){

b=opc<1;

}

}while(b);

switch(opc){

case 1:
	
//////////////////////////////////// ----------------------------caso 1--------------------------- ///////////////////////////////////////////////////


do{
	
if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}
			
for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}

if(turno==1){

printf("\n\nCual peon blanco desea mover escoga un numero entre[0 y 7] :\n ");}

if(turno==2){

printf("\n\nCual peon negro desea mover escoga un numero entre[0 y 7] :\n ");}

printf("\nEscoga el numero del peon que desea mover:\n ");

if(validFormat("%i", & direccion_peon)) continue;

if(direccion_peon>=1 && direccion_peon<=7){

b=direccion_peon<1;

}else if(direccion_peon==0){

b=direccion_peon>1;}

}while(b);

//////////////////////////////////////////////////////////////////////////////////////////////////////

do{

if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}

for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}

printf("\n\nDesea mover: ");

printf("\n1 movimiento  ");

printf("\n2 movimiento\n  ");

if(validFormat("%i", & movimiento)) continue;

if(movimiento>=1 && movimiento<=2){

b=movimiento<1;

}

}while(b);	

/////////////////////////mover peones un paso///////////////////////////////////////////////////////////////////////

PB=0;

PN=0;

for(i=0;i<=movimiento;i++){
	
if(direccion_peon==0 && turno==1){

if(

tablero[6-(Y6X0+i)][0]!=tablero[7+A1_1][2+A1_2] &&

tablero[6-(Y6X0+i)][0]!=tablero[7+A2_1][5+A2_2] &&

tablero[6-(Y6X0+i)][0]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[6-(Y6X0+i)][0]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[6-(Y6X0+i)][0]!=tablero[7+T3_1][0+T3_2]	&&

tablero[6-(Y6X0+i)][0]!=tablero[7+T4_1][7+T4_2] &&

tablero[6-(Y6X0+i)][0]!=tablero[7+M1_1][3+M1_2] &&

tablero[6-(Y6X0+i)][0]!=tablero[7+R1_1][4+R1_2]){    

PB=PB+1;}}	
	
if(direccion_peon==1 && turno==1){

if(

tablero[6-(Y6X1+i)][1]!=tablero[7+A1_1][2+A1_2] &&

tablero[6-(Y6X1+i)][1]!=tablero[7+A2_1][5+A2_2] &&

tablero[6-(Y6X1+i)][1]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[6-(Y6X1+i)][1]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[6-(Y6X1+i)][1]!=tablero[7+T3_1][0+T3_2]	&&

tablero[6-(Y6X1+i)][1]!=tablero[7+T4_1][7+T4_2] &&

tablero[6-(Y6X1+i)][1]!=tablero[7+M1_1][3+M1_2] &&

tablero[6-(Y6X1+i)][1]!=tablero[7+R1_1][4+R1_2]){     


PB=PB+1;}}	
	
if(direccion_peon==2 && turno==1){

if(

tablero[6-(Y6X2+i)][2]!=tablero[7+A1_1][2+A1_2] &&

tablero[6-(Y6X2+i)][2]!=tablero[7+A2_1][5+A2_2] &&

tablero[6-(Y6X2+i)][2]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[6-(Y6X2+i)][2]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[6-(Y6X2+i)][2]!=tablero[7+T3_1][0+T3_2]	&&

tablero[6-(Y6X2+i)][2]!=tablero[7+T4_1][7+T4_2] &&

tablero[6-(Y6X2+i)][2]!=tablero[7+M1_1][3+M1_2] &&

tablero[6-(Y6X2+i)][2]!=tablero[7+R1_1][4+R1_2]){     

PB=PB+1;}}	

if(direccion_peon==3 && turno==1){

if(

tablero[6-(Y6X3+i)][3]!=tablero[7+A1_1][2+A1_2] &&

tablero[6-(Y6X3+i)][3]!=tablero[7+A2_1][5+A2_2] &&

tablero[6-(Y6X3+i)][3]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[6-(Y6X3+i)][3]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[6-(Y6X3+i)][3]!=tablero[7+T3_1][0+T3_2]	&&

tablero[6-(Y6X3+i)][3]!=tablero[7+T4_1][7+T4_2] &&

tablero[6-(Y6X3+i)][3]!=tablero[7+M1_1][3+M1_2] &&

tablero[6-(Y6X3+i)][3]!=tablero[7+R1_1][4+R1_2]){     

PB=PB+1;}}

if(direccion_peon==4 && turno==1){

if(

tablero[6-(Y6X4+i)][4]!=tablero[7+A1_1][2+A1_2] &&

tablero[6-(Y6X4+i)][4]!=tablero[7+A2_1][5+A2_2] &&

tablero[6-(Y6X4+i)][4]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[6-(Y6X4+i)][4]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[6-(Y6X4+i)][4]!=tablero[7+T3_1][0+T3_2]	&&

tablero[6-(Y6X4+i)][4]!=tablero[7+T4_1][7+T4_2] &&

tablero[6-(Y6X4+i)][4]!=tablero[7+M1_1][3+M1_2] &&

tablero[6-(Y6X4+i)][4]!=tablero[7+R1_1][4+R1_2]){     

PB=PB+1;}}

if(direccion_peon==5 && turno==1){

if(

tablero[6-(Y6X5+i)][5]!=tablero[7+A1_1][2+A1_2] &&

tablero[6-(Y6X5+i)][5]!=tablero[7+A2_1][5+A2_2] &&

tablero[6-(Y6X5+i)][5]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[6-(Y6X5+i)][5]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[6-(Y6X5+i)][5]!=tablero[7+T3_1][0+T3_2]	&&

tablero[6-(Y6X5+i)][5]!=tablero[7+T4_1][7+T4_2] &&

tablero[6-(Y6X5+i)][5]!=tablero[7+M1_1][3+M1_2] &&

tablero[6-(Y6X5+i)][5]!=tablero[7+R1_1][4+R1_2]){     

PB=PB+1;}}

if(direccion_peon==6 && turno==1){

if(

tablero[6-(Y6X6+i)][6]!=tablero[7+A1_1][2+A1_2] &&

tablero[6-(Y6X6+i)][6]!=tablero[7+A2_1][5+A2_2] &&

tablero[6-(Y6X6+i)][6]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[6-(Y6X6+i)][6]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[6-(Y6X6+i)][6]!=tablero[7+T3_1][0+T3_2]	&&

tablero[6-(Y6X6+i)][6]!=tablero[7+T4_1][7+T4_2] &&

tablero[6-(Y6X6+i)][6]!=tablero[7+M1_1][3+M1_2] &&

tablero[6-(Y6X6+i)][6]!=tablero[7+R1_1][4+R1_2]){     

PB=PB+1;}}

if(direccion_peon==7 && turno==1){

if(

tablero[6-(Y6X7+i)][7]!=tablero[7+A1_1][2+A1_2] &&

tablero[6-(Y6X7+i)][7]!=tablero[7+A2_1][5+A2_2] &&

tablero[6-(Y6X7+i)][7]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[6-(Y6X7+i)][7]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[6-(Y6X7+i)][7]!=tablero[7+T3_1][0+T3_2]	&&

tablero[6-(Y6X7+i)][7]!=tablero[7+T4_1][7+T4_2] &&

tablero[6-(Y6X7+i)][7]!=tablero[7+M1_1][3+M1_2] &&

tablero[6-(Y6X7+i)][7]!=tablero[7+R1_1][4+R1_2]){     

PB=PB+1;}}

if(direccion_peon==0 && turno==2){

if(

tablero[1+(Y1X0+i)][0]!=tablero[0+A3_1][5+A3_2] &&

tablero[1+(Y1X0+i)][0]!=tablero[0+A4_1][2+A4_2] &&
 
tablero[1+(Y1X0+i)][0]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[1+(Y1X0+i)][0]!=tablero[0+PCND][6+PCND_2] &&

tablero[1+(Y1X0+i)][0]!=tablero[0+T1_1][0+T1_2]	&&

tablero[1+(Y1X0+i)][0]!=tablero[0+T2_1][7+T2_2] &&

tablero[1+(Y1X0+i)][0]!=tablero[0+M2_1][3+M2_2] &&

tablero[1+(Y1X0+i)][0]!=tablero[0+R2_1][4+R2_2] ){
	
PN=PN+1;	
}}

if(direccion_peon==1 && turno==2){

if(

tablero[1+(Y1X1+i)][1]!=tablero[0+A3_1][5+A3_2] &&

tablero[1+(Y1X1+i)][1]!=tablero[0+A4_1][2+A4_2] &&
 
tablero[1+(Y1X1+i)][1]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[1+(Y1X1+i)][1]!=tablero[0+PCND][6+PCND_2] &&

tablero[1+(Y1X1+i)][1]!=tablero[0+T1_1][0+T1_2]	&&

tablero[1+(Y1X1+i)][1]!=tablero[0+T2_1][7+T2_2] &&

tablero[1+(Y1X1+i)][1]!=tablero[0+M2_1][3+M2_2] &&

tablero[1+(Y1X1+i)][1]!=tablero[0+R2_1][4+R2_2] ){
	
	
PN=PN+1;}}

if(direccion_peon==2 && turno==2){

if(

tablero[1+(Y1X2+i)][2]!=tablero[0+A3_1][5+A3_2] &&

tablero[1+(Y1X2+i)][2]!=tablero[0+A4_1][2+A4_2] &&
 
tablero[1+(Y1X2+i)][2]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[1+(Y1X2+i)][2]!=tablero[0+PCND][6+PCND_2] &&

tablero[1+(Y1X2+i)][2]!=tablero[0+T1_1][0+T1_2]	&&

tablero[1+(Y1X2+i)][2]!=tablero[0+T2_1][7+T2_2] &&

tablero[1+(Y1X2+i)][2]!=tablero[0+M2_1][3+M2_2] &&

tablero[1+(Y1X2+i)][2]!=tablero[0+R2_1][4+R2_2] 
){
	
		
PN=PN+1;}}

if(direccion_peon==3 && turno==2){

if(


tablero[1+(Y1X3+i)][3]!=tablero[0+A3_1][5+A3_2] &&

tablero[1+(Y1X3+i)][3]!=tablero[0+A4_1][2+A4_2] &&
 
tablero[1+(Y1X3+i)][3]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[1+(Y1X3+i)][3]!=tablero[0+PCND][6+PCND_2] &&

tablero[1+(Y1X3+i)][3]!=tablero[0+T1_1][0+T1_2]	&&

tablero[1+(Y1X3+i)][3]!=tablero[0+T2_1][7+T2_2] &&

tablero[1+(Y1X3+i)][3]!=tablero[0+M2_1][3+M2_2] &&

tablero[1+(Y1X3+i)][3]!=tablero[0+R2_1][4+R2_2] 

){
		
PN=PN+1;}}

if(direccion_peon==4 && turno==2){

if(	

tablero[1+(Y1X4+i)][4]!=tablero[0+A3_1][5+A3_2] &&

tablero[1+(Y1X4+i)][4]!=tablero[0+A4_1][2+A4_2] &&
 
tablero[1+(Y1X4+i)][4]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[1+(Y1X4+i)][4]!=tablero[0+PCND][6+PCND_2] &&

tablero[1+(Y1X4+i)][4]!=tablero[0+T1_1][0+T1_2]	&&

tablero[1+(Y1X4+i)][4]!=tablero[0+T2_1][7+T2_2] &&

tablero[1+(Y1X4+i)][4]!=tablero[0+M2_1][3+M2_2] &&

tablero[1+(Y1X4+i)][4]!=tablero[0+R2_1][4+R2_2]){
	
	
PN=PN+1;}}

if(direccion_peon==5 && turno==2){

if(
	
tablero[1+(Y1X5+i)][5]!=tablero[0+A3_1][5+A3_2] &&

tablero[1+(Y1X5+i)][5]!=tablero[0+A4_1][2+A4_2] &&
 
tablero[1+(Y1X5+i)][5]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[1+(Y1X5+i)][5]!=tablero[0+PCND][6+PCND_2] &&

tablero[1+(Y1X5+i)][5]!=tablero[0+T1_1][0+T1_2]	&&

tablero[1+(Y1X5+i)][5]!=tablero[0+T2_1][7+T2_2] &&

tablero[1+(Y1X5+i)][5]!=tablero[0+M2_1][3+M2_2] &&

tablero[1+(Y1X5+i)][5]!=tablero[0+R2_1][4+R2_2]){
		
PN=PN+1;}}

if(direccion_peon==6 && turno==2){

if(	

tablero[1+(Y1X6+i)][6]!=tablero[0+A3_1][5+A3_2] &&

tablero[1+(Y1X6+i)][6]!=tablero[0+A4_1][2+A4_2] &&
 
tablero[1+(Y1X6+i)][6]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[1+(Y1X6+i)][6]!=tablero[0+PCND][6+PCND_2] &&

tablero[1+(Y1X6+i)][6]!=tablero[0+T1_1][0+T1_2]	&&

tablero[1+(Y1X6+i)][6]!=tablero[0+T2_1][7+T2_2] &&

tablero[1+(Y1X6+i)][6]!=tablero[0+M2_1][3+M2_2] &&

tablero[1+(Y1X6+i)][6]!=tablero[0+R2_1][4+R2_2]){
		
PN=PN+1;}}

if(direccion_peon==7 && turno==2){

if(

tablero[1+(Y1X7+i)][7]!=tablero[0+A3_1][5+A3_2] &&

tablero[1+(Y1X7+i)][7]!=tablero[0+A4_1][2+A4_2] &&
 
tablero[1+(Y1X7+i)][7]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[1+(Y1X7+i)][7]!=tablero[0+PCND][6+PCND_2] &&

tablero[1+(Y1X7+i)][7]!=tablero[0+T1_1][0+T1_2]	&&

tablero[1+(Y1X7+i)][7]!=tablero[0+T2_1][7+T2_2] &&

tablero[1+(Y1X7+i)][7]!=tablero[0+M2_1][3+M2_2] &&

tablero[1+(Y1X7+i)][7]!=tablero[0+R2_1][4+R2_2] ){
		
PN=PN+1;}}

	
}

if(turno==2 && movimiento==1){

if(PN>movimiento){

if(direccion_peon==0 && movimiento==1 && tablero[1+Y1X0+movimiento][0]!=tablero[6-Y6X0][0]){ 
 
turno++;
Y1X0++;}

if(direccion_peon==1 && movimiento==1 && tablero[1+Y1X1+movimiento][1]!=tablero[6-Y6X1][1]){   

turno++;
Y1X1++;}

if(direccion_peon==2 && movimiento==1  && tablero[1+Y1X2+movimiento][2]!=tablero[6-Y6X2][2] ){ 

turno++;
Y1X2++;}

if(direccion_peon==3 && movimiento==1 && tablero[1+Y1X3+movimiento][3]!=tablero[6-Y6X3][3]){

turno++;
Y1X3++;}

if(direccion_peon==4 && movimiento==1 && tablero[1+Y1X4+movimiento][4]!=tablero[6-Y6X4][4]){

turno++;
Y1X4++;}

if(direccion_peon==5 && movimiento==1 && tablero[1+Y1X5+movimiento][5]!=tablero[6-Y6X5][5]){

turno++;
Y1X5++;}

if(direccion_peon==6 && movimiento==1 && tablero[1+Y1X6+movimiento][6]!=tablero[6-Y6X6][6]){

turno++;
Y1X6++;}

if(direccion_peon==7 && movimiento==1 && tablero[1+Y1X7+movimiento][7]!=tablero[6-Y6X7][7]){

turno++;
Y1X7++;}

}}
if(turno==1 && movimiento==1){

if(PB>movimiento){


if(direccion_peon==0 && movimiento==1 && tablero[1+Y1X0][0]!=tablero[6-(Y6X0+movimiento)][0]){

turno++;
Y6X0++;}

if(direccion_peon==1 && movimiento==1 && tablero[1+Y1X1][1]!=tablero[6-(Y6X1+movimiento)][1]){

turno++;
Y6X1++;}

if(direccion_peon==2 && movimiento==1 && tablero[1+Y1X2][2]!=tablero[6-(Y6X2+movimiento)][2]){

turno++;
Y6X2++;}

if(direccion_peon==3 && movimiento==1 && tablero[1+Y1X3][3]!=tablero[6-(Y6X3+movimiento)][3]){

turno++;
Y6X3++;}

if(direccion_peon==4 && movimiento==1 && tablero[1+Y1X4][4]!=tablero[6-(Y6X4+movimiento)][4]){

turno++;
Y6X4++;}

if(direccion_peon==5 && movimiento==1 && tablero[1+Y1X5][5]!=tablero[6-(Y6X5+movimiento)][5]){

turno++;
Y6X5++;}

if(direccion_peon==6 && movimiento==1 && tablero[1+Y1X6][6]!=tablero[6-(Y6X6+movimiento)][6]){

turno++;
Y6X6++;}

if(direccion_peon==7 && movimiento==1 && tablero[1+Y1X7][7]!=tablero[6-(Y6X7+movimiento)][7]){

turno++;
Y6X7++;}

}}
/////////////////////////////////// Mover 2 pasos al peon////////////////////////////////////////////////////////////////////////////////////////////////////

if(turno==2 && movimiento==2){

if(PN>movimiento){

if(Y1X0==0 && direccion_peon==0 && movimiento==2 && Y1X0+Y6X0<3){

turno++;
Y1X0=Y1X0+2;}



if(Y1X1==0 &&  direccion_peon==1 && movimiento==2 &&  Y1X1+Y6X1<3 ){

turno++;
Y1X1=Y1X1+2;}


if(Y1X2==0 && direccion_peon==2 && movimiento==2 && Y1X2+Y6X2<3){

turno++;
Y1X2=Y1X2+2;}


if(Y1X3==0 && direccion_peon==3 && movimiento==2 && Y1X3+Y6X3<3){

turno++;
Y1X3=Y1X3+2;}



if(Y1X4==0 && direccion_peon==4 && movimiento==2 && Y1X4+Y6X4<3){

turno++;
Y1X4=Y1X4+2;}



if(Y1X5==0 && direccion_peon==5 && movimiento==2 && Y1X5+Y6X5<3){

turno++;
Y1X5=Y1X5+2;}



if(Y1X6==0 && direccion_peon==6 && movimiento==2 && Y1X6+Y6X6<3){

turno++;
Y1X6=Y1X6+2;}



if(Y1X7==0 && direccion_peon==7 && movimiento==2 && Y1X7+Y6X7<3 ){

turno++;
Y1X7=Y1X7+2;}


}}

if(turno==1 && movimiento==2){

if(PB>movimiento){

if(Y6X0==0 && direccion_peon==0 && movimiento==2 && Y1X0+Y6X0<3){

turno++;
Y6X0=Y6X0+2;}


if(Y6X1==0 && direccion_peon==1 && movimiento==2 &&  Y1X1+Y6X1<3 ){

turno++;
Y6X1=Y6X1+2;}


if(Y6X2==0 && direccion_peon==2 && movimiento==2 && Y1X2+Y6X2<3){

turno++;
Y6X2=Y6X2+2;}



if(Y6X3==0 && direccion_peon==3 && movimiento==2 && Y1X3+Y6X3<3){

turno++;
Y6X3=Y6X3+2;}



if(Y6X4==0 &&direccion_peon==4 && movimiento==2 && Y1X4+Y6X4<3){

turno++;
Y6X4=Y6X4+2;}


if(Y6X5==0 && direccion_peon==5 && movimiento==2 && Y1X5+Y6X5<3){

turno++;
Y6X5=Y6X5+2;}


if(Y6X6==0 &&  direccion_peon==6 && movimiento==2 && Y1X6+Y6X6<3){

turno++;
Y6X6=Y6X6+2;}


if(Y6X7==0 &&  direccion_peon==7 && movimiento==2 && Y1X7+Y6X7<3){

turno++;
Y6X7=Y6X7+2;}



}}

break;

///////////////////////////////////---------------------caso 2-----------------------------------------/////////////////////////////////////////////////
case 2:

do{

if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}


for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}


printf("\n\nCual alfil desea mover:\n ");

printf("\n1-Alfil Izquierdo\n ");

printf("\n2-Alfil Derecho\n ");

if(validFormat("%i", & Alfil)) continue;

if(Alfil>=1 && Alfil<=2){

b=Alfil<1;

}


}while(b);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

do{


if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}


for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}

printf("\n\nDesea moverse:\n");

printf("\n1-A la izquierda arriba");

printf("\n2-A la derecha arriba");

printf("\n3-A la izquierda abajo");

printf("\n4-A la derecha abajo\n");


if(validFormat("%i", & direccion_alfil)) continue;

if(direccion_alfil>=1 && direccion_alfil<=4){

b=direccion_alfil<1;

}


}while(b);


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

do{

if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}


for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}

printf("\n\nCuantos pasos quiere dar:\n ");

printf("\n1-1 movimiento\n");

printf("\n2-2 movimiento\n ");

printf("\n3-3 movimiento\n ");

printf("\n4-4 movimiento\n ");

printf("\n5-5 movimiento\n ");


if(validFormat("%i", & movimiento_alfil)) continue;

if(movimiento_alfil>=1 && movimiento_alfil<=5){

b=movimiento_alfil<1;

}}while(b);


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
A1=0;

A2=0;

A3=0;

A4=0;

//////////////////////////////////////////////contador para determinar si el alfil puede avanzar ////////////////////////////////////////////////

for(i=0;i<=movimiento_alfil;i++){


if(direccion_alfil==1 && Alfil==1 && turno==2){

if(

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[1+Y1X0][0] &&

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[1+Y1X1][1] &&

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[1+Y1X2][2] &&

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[1+Y1X3][3] &&

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[1+Y1X4][4] &&

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[1+Y1X5][5] &&

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[1+Y1X6][6] &&

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[0+PCND][6+PCND_2] && 

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[0+T2_1][7+T2_2] &&
	
tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(A4_1+i)][2+(A4_2-i)]!=tablero[0+R2_1][4+R2_2] ){ 

A4=A4+1; }}

if(direccion_alfil==2 && Alfil==1 && turno==2){

if(

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[1+Y1X0][0] &&

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[1+Y1X1][1] &&

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[1+Y1X2][2] &&

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[1+Y1X3][3] &&

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[1+Y1X4][4] &&

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[1+Y1X5][5] &&

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[1+Y1X6][6] &&

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[0+PCND][6+PCND_2] && 

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[0+T2_1][7+T2_2] &&
	
tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(A4_1+i)][2+(A4_2+i)]!=tablero[0+R2_1][4+R2_2] ){

A4=A4+1;}}

if(direccion_alfil==3 && Alfil==1 && turno==2){

if(

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[1+Y1X0][0] &&

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[1+Y1X1][1] &&

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[1+Y1X2][2] &&

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[1+Y1X3][3] &&

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[1+Y1X4][4] &&

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[1+Y1X5][5] &&

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[1+Y1X6][6] &&

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[0+PCND][6+PCND_2] && 

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[0+T2_1][7+T2_2] &&
	
tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(A4_1-i)][2+(A4_2-i)]!=tablero[0+R2_1][4+R2_2] ){

A4=A4+1;}}

if(direccion_alfil==4 && Alfil==1 && turno==2){

if(

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[1+Y1X0][0] &&

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[1+Y1X1][1] &&

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[1+Y1X2][2] &&

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[1+Y1X3][3] &&

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[1+Y1X4][4] &&

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[1+Y1X5][5] &&

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[1+Y1X6][6] &&

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[0+PCND][6+PCND_2] && 

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[0+T2_1][7+T2_2] &&
	
tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(A4_1-i)][2+(A4_2+i)]!=tablero[0+R2_1][4+R2_2] ){

A4=A4+1;}}


if(direccion_alfil==1 && Alfil==2 && turno==2){

if(

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[1+Y1X0][0] &&

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[1+Y1X1][1] &&

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[1+Y1X2][2] &&

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[1+Y1X3][3] &&

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[1+Y1X4][4] &&

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[1+Y1X5][5] &&

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[1+Y1X6][6] &&

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[0+PCND][6+PCND_2] && 

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[0+T2_1][7+T2_2] &&
	
tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(A3_1+i)][5+(A3_2-i)]!=tablero[0+R2_1][4+R2_2]){

A3=A3+1;}}

if(direccion_alfil==2 && Alfil==2 && turno==2){

if(

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[1+Y1X0][0] &&

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[1+Y1X1][1] &&

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[1+Y1X2][2] &&

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[1+Y1X3][3] &&

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[1+Y1X4][4] &&

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[1+Y1X5][5] &&

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[1+Y1X6][6] &&

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[0+PCND][6+PCND_2] && 

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[0+T2_1][7+T2_2] &&
	
tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(A3_1+i)][5+(A3_2+i)]!=tablero[0+R2_1][4+R2_2]){

A3=A3+1;}}


if(direccion_alfil==3 && Alfil==2 && turno==2){

if(

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[1+Y1X0][0] &&

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[1+Y1X1][1] &&

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[1+Y1X2][2] &&

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[1+Y1X3][3] &&

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[1+Y1X4][4] &&

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[1+Y1X5][5] &&

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[1+Y1X6][6] &&

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[0+PCND][6+PCND_2] && 

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[0+T2_1][7+T2_2] &&
	
tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(A3_1-i)][5+(A3_2-i)]!=tablero[0+R2_1][4+R2_2]){

A3=A3+1;}}


if(direccion_alfil==4 && Alfil==2 && turno==2){

if(

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[1+Y1X0][0] &&

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[1+Y1X1][1] &&

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[1+Y1X2][2] &&

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[1+Y1X3][3] &&

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[1+Y1X4][4] &&

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[1+Y1X5][5] &&

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[1+Y1X6][6] &&

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[0+PCND][6+PCND_2] && 

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[0+T2_1][7+T2_2] &&
	
tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(A3_1-i)][5+(A3_2+i)]!=tablero[0+R2_1][4+R2_2]){

A3=A3+1;}}



if(direccion_alfil==1 && Alfil==1 && turno==1){

if(

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[6-Y6X0][0] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[6-Y6X1][1] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[6-Y6X2][2] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[6-Y6X3][3] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[6-Y6X4][4] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[6-Y6X5][5] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[6-Y6X6][6] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(A1_1-i)][2+(A1_2-i)]!=tablero[7+R1_1][4+R1_2] ){

A1=A1+1;}}

if(direccion_alfil==2 && Alfil==1 && turno==1){

if(

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[6-Y6X0][0] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[6-Y6X1][1] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[6-Y6X2][2] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[6-Y6X3][3] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[6-Y6X4][4] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[6-Y6X5][5] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[6-Y6X6][6] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(A1_1-i)][2+(A1_2+i)]!=tablero[7+R1_1][4+R1_2]){

A1=A1+1;}}


if(direccion_alfil==3 && Alfil==1 && turno==1){

if(

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[6-Y6X0][0] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[6-Y6X1][1] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[6-Y6X2][2] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[6-Y6X3][3] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[6-Y6X4][4] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[6-Y6X5][5] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[6-Y6X6][6] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(A1_1+i)][2+(A1_2-i)]!=tablero[7+R1_1][4+R1_2]){

A1=A1+1;}}


if(direccion_alfil==4 && Alfil==1 && turno==1){

if(

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[6-Y6X0][0] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[6-Y6X1][1] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[6-Y6X2][2] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[6-Y6X3][3] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[6-Y6X4][4] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[6-Y6X5][5] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[6-Y6X6][6] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(A1_1+i)][2+(A1_2+i)]!=tablero[7+R1_1][4+R1_2]){

A1=A1+1;}}


if(direccion_alfil==1 && Alfil==2 && turno==1){

if(

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[6-Y6X0][0] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[6-Y6X1][1] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[6-Y6X2][2] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[6-Y6X3][3] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[6-Y6X4][4] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[6-Y6X5][5] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[6-Y6X6][6] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(A2_1-i)][5+(A2_2-i)]!=tablero[7+R1_1][4+R1_2] ){

A2=A2+1;}}

if(direccion_alfil==2 && Alfil==2 && turno==1){

if(

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[6-Y6X0][0] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[6-Y6X1][1] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[6-Y6X2][2] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[6-Y6X3][3] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[6-Y6X4][4] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[6-Y6X5][5] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[6-Y6X6][6] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(A2_1-i)][5+(A2_2+i)]!=tablero[7+R1_1][4+R1_2]){

A1=A1+1;}}


if(direccion_alfil==3 && Alfil==2 && turno==1){

if(

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[6-Y6X0][0] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[6-Y6X1][1] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[6-Y6X2][2] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[6-Y6X3][3] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[6-Y6X4][4] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[6-Y6X5][5] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[6-Y6X6][6] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(A2_1+i)][5+(A2_2-i)]!=tablero[7+R1_1][4+R1_2] ){

A2=A2+1;}}


if(direccion_alfil==4 && Alfil==2 && turno==1){

if(

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[6-Y6X0][0] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[6-Y6X1][1] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[6-Y6X2][2] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[6-Y6X3][3] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[6-Y6X4][4] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[6-Y6X5][5] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[6-Y6X6][6] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(A2_1+i)][5+(A2_2+i)]!=tablero[7+R1_1][4+R1_2] ){

A2=A2+1;}}




}

if(turno==2){

///////////mover el alfil izquierdo a la izquierda los negros //////////////////////////////////////////////////////////////////

if(direccion_alfil==1 && Alfil==1){

if(A4>movimiento_alfil){
		
if(A4_2-movimiento_alfil>=-2 && A4_1+movimiento_alfil>=1 && A4_1+movimiento_alfil<=7){

A4_1=A4_1+movimiento_alfil;

A4_2=A4_2-movimiento_alfil;

turno++;}}}

///////////mover el alfil izquierdo a la derecha los negros //////////////////////////////////////////////////////////////////

if(direccion_alfil==2 && Alfil==1){

if(A4>movimiento_alfil){

if(A4_2+movimiento_alfil<=5 && A4_1+movimiento_alfil>=1 && A4_1+movimiento_alfil<=7){

A4_1=A4_1+movimiento_alfil;

A4_2=A4_2+movimiento_alfil;

turno++;
}}}


if(direccion_alfil==3 && Alfil==1){

if(A4>movimiento_alfil){

if(A4_2-movimiento_alfil>=-2 && A4_1-movimiento_alfil>=0 && A4_1-movimiento_alfil<=6){

A4_1=A4_1-movimiento_alfil;

A4_2=A4_2-movimiento_alfil;

turno++;
}}}


if(direccion_alfil==4 && Alfil==1){

if(A4>movimiento_alfil){

if(A4_2+movimiento_alfil<=5 && A4_1-movimiento_alfil>=0 && A4_1-movimiento_alfil<=6){

A4_1=A4_1-movimiento_alfil;

A4_2=A4_2+movimiento_alfil;

turno++;
}}}


///////////mover el alfil derecho a la izquierda los negros //////////////////////////////////////////////////////////////////

if(direccion_alfil==1 && Alfil==2){

if(A3>movimiento_alfil){
	
if(A3_2-movimiento_alfil>=-5 && A3_1+movimiento_alfil>=1 && A3_1+movimiento_alfil<=7 ){

A3_1=A3_1+movimiento_alfil;

A3_2=A3_2-movimiento_alfil;

turno++;
}}}

///////////mover el alfil derecho a la derecha  los negros//////////////////////////////////////////////////////////////////

if(direccion_alfil==2 && Alfil==2){
	
if(A3>movimiento_alfil){

if(A3_2+movimiento_alfil<=2 && A3_1+movimiento_alfil>=1 && A3_1+movimiento_alfil<=7){

A3_1=A3_1+movimiento_alfil;

A3_2=A3_2+movimiento_alfil;

turno++;
}}}

if(direccion_alfil==3 && Alfil==2){

if(A3>movimiento_alfil){

if(A3_2-movimiento_alfil>=-5 && A3_1-movimiento_alfil>=0 && A3_1-movimiento_alfil<=6 ){	

A3_1=A3_1-movimiento_alfil;

A3_2=A3_2-movimiento_alfil;

turno++;
}}}

if(direccion_alfil==4 && Alfil==2){
	
if(A3>movimiento_alfil){

if(A3_2+movimiento_alfil<=2 && A3_1-movimiento_alfil>=0 && A3_1-movimiento_alfil<=6){

A3_1=A3_1-movimiento_alfil;

A3_2=A3_2+movimiento_alfil;

turno++;
}}}


			
}

if(turno==1){
///////////mover el alfil izquierdo a la izquierda los blancos //////////////////////////////////////////////////////////////////

if(direccion_alfil==1 && Alfil==1){

if(A1>movimiento_alfil){

if(A1_2-movimiento_alfil>=-2 && A1_1-movimiento_alfil>=-7 && A1_1-movimiento_alfil<=-1){

A1_1=A1_1-movimiento_alfil;

A1_2=A1_2-movimiento_alfil;

turno++;}}}

///////////mover el alfil izquierdo a la derecha los blancos //////////////////////////////////////////////////////////////////

if(direccion_alfil==2 && Alfil==1){

if(A1>movimiento_alfil){

if(A1_2+movimiento_alfil<=5 && A1_1-movimiento_alfil>=-7 && A1_1-movimiento_alfil<=-1){

A1_1=A1_1-movimiento_alfil;

A1_2=A1_2+movimiento_alfil;

turno++;}}}

if(direccion_alfil==3 && Alfil==1){

if(A1>movimiento_alfil){

if(A1_2-movimiento_alfil>=-2 && A1_1+movimiento_alfil>=-6 && A1_1+movimiento_alfil<=0 ){

A1_1=A1_1+movimiento_alfil;

A1_2=A1_2-movimiento_alfil;

turno++;}}}

if(direccion_alfil==4 && Alfil==1){

if(A1>movimiento_alfil){

if(A1_2+movimiento_alfil<=5 &&  A1_1+movimiento_alfil>=-6 && A1_1+movimiento_alfil<=0){
	
A1_1=A1_1+movimiento_alfil;

A1_2=A1_2+movimiento_alfil;

turno++;}}}



///////////mover el alfil derecho a la izquierda los blancos //////////////////////////////////////////////////////////////////

if(direccion_alfil==1 && Alfil==2){

if(A2>movimiento_alfil){

if(A2_2-movimiento_alfil>=-5){

A2_1=A2_1-movimiento_alfil;

A2_2=A2_2-movimiento_alfil;

turno++;
}}}

///////////mover el alfil derecho a la derecha  los blancos//////////////////////////////////////////////////////////////////

if(direccion_alfil==2 && Alfil==2){

if(A2>movimiento_alfil){
	
if(A2_2+movimiento_alfil<=2){

A2_1=A2_1-movimiento_alfil;

A2_2=A2_2+movimiento_alfil;

turno++;
}}}

if(direccion_alfil==3 && Alfil==2){

if(A2>movimiento_alfil){

if(A2_2-movimiento_alfil>=-5 && A2_1+movimiento_alfil>=-6 && A2_1+movimiento_alfil<=0 ){

A2_1=A2_1+movimiento_alfil;

A2_2=A2_2-movimiento_alfil;

turno++;
}}}

if(direccion_alfil==4 && Alfil==2){

if(A2>movimiento_alfil){

if(A2_2+movimiento_alfil<=2 && A2_1+movimiento_alfil>=-6 && A2_1+movimiento_alfil<=0){

A2_1=A2_1+movimiento_alfil;

A2_2=A2_2+movimiento_alfil;

turno++;
}}}

}
break;	
///////////////////////----------------------------------caso 3--------------------------------------------///////////////////////////////////////////////
case 3: 

///////////////////////////////////////////Movimiento de los caballos//////////////////////////////////////////////////////////////////////
do{

if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}


for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}


printf("\n\nCual caballo desea mover:\n ");

printf("\n1-caballo Izquierdo\n ");

printf("\n2-caballo Derecho\n ");

if(validFormat("%i", & caballo)) continue;

if(caballo>=1 && caballo<=2){

b=caballo<1;

}


}while(b);

do{


if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}


for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}




printf("\n\nDesea moverse:\n");

	
printf("\n1-A la izquierda en forma de L\n ");

printf("\n2-A la derecha en forma de L\n ");

printf("\n3-A la izquierda en forma de L acostada\n ");

printf("\n4-A la derecha en forma de L acostada\n ");

printf("\n5-A la izquierda abajo\n ");

printf("\n6-A la derecha abajo\n\n ");


if(validFormat("%i", & caballo_movimiento)) continue;

if(caballo_movimiento>=1 && caballo_movimiento<=6){

b=caballo_movimiento<1;
}

}while(b);




if(turno==1 && caballo_movimiento>0){

/////////////////////////////////////mover caballo blanco izquierdo a la izquierda arriba///////////////////////////////////////
if(caballo==1 && turno==1 && caballo_movimiento==1 ){

if(

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[6-Y6X0][0] &&

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[6-Y6X1][1] &&

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[6-Y6X2][2] &&

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[6-Y6X3][3] &&

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[6-Y6X4][4] &&

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[6-Y6X5][5] &&

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[6-Y6X6][6] &&

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[6-Y6X7][7] &&

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBI-2][1+PCBI_2-1]!=tablero[7+R1_1][4+R1_2]){

if(PCBI_2>-1 && PCBI_2<6 && PCBI>-7 && PCBI<=0){

PCBI=PCBI-2;

PCBI_2=PCBI_2-1;	

turno++;}}}

/////////////////////////////////////mover caballo blanco izquierdo a la derecha arriba ///////////////////////////////////////
if(caballo==1 && turno==1 && caballo_movimiento==2){

if(

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[6-Y6X0][0] &&

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[6-Y6X1][1] &&

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[6-Y6X2][2] &&

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[6-Y6X3][3] &&

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[6-Y6X4][4] &&

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[6-Y6X5][5] &&

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[6-Y6X6][6] &&

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[6-Y6X7][7] &&

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBI-2][1+PCBI_2+1]!=tablero[7+R1_1][4+R1_2] ){

	
if(PCBI_2>-1 && PCBI_2<6){	
	
PCBI=PCBI-2;

PCBI_2=PCBI_2+1;

turno++;
}}}

/////////////////////////////////////mover caballo blanco izquierdo a la izquierda en forma de L acostada ///////////////////////////////////////
if(caballo==1 && turno==1 && caballo_movimiento==3 ){

if(

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[6-Y6X0][0] &&

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[6-Y6X1][1] &&

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[6-Y6X2][2] &&

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[6-Y6X3][3] &&

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[6-Y6X4][4] &&

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[6-Y6X5][5] &&

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[6-Y6X6][6] &&

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[6-Y6X7][7] &&

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBI-1][1+PCBI_2-2]!=tablero[7+R1_1][4+R1_2] ){


if(PCBI_2-2>=-1 && PCBI_2-2<=6 && PCBI-1>-7 && PCBI-1<=-1){

PCBI=PCBI-1;

PCBI_2=PCBI_2-2;

turno++;
	
}}}

/////////////////////////////////////mover caballo blanco izquierdo a la derecha en forma de L acostada///////////////////////////////////////
if(caballo==1 && turno==1 && caballo_movimiento==4){

if(

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[6-Y6X0][0] &&

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[6-Y6X1][1] &&

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[6-Y6X2][2] &&

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[6-Y6X3][3] &&

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[6-Y6X4][4] &&

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[6-Y6X5][5] &&

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[6-Y6X6][6] &&

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[6-Y6X7][7] &&

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBI-1][1+PCBI_2+2]!=tablero[7+R1_1][4+R1_2] ){
	
if(PCBI_2+2>=-1 && PCBI_2+2<=6 && PCBI>-7 && PCBI<=-1){	
	
PCBI=PCBI-1;

PCBI_2=PCBI_2+2;

turno++;
}}}

/////////////////////////////////////mover caballo blanco izquierdo a la izquierda abajo///////////////////////////////////////

if(caballo==1 && turno==1 && caballo_movimiento==5){ 

if(

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[6-Y6X0][0] &&

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[6-Y6X1][1] &&

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[6-Y6X2][2] &&

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[6-Y6X3][3] &&

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[6-Y6X4][4] &&

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[6-Y6X5][5] &&

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[6-Y6X6][6] &&

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[6-Y6X7][7] &&

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBI+2][1+PCBI_2-1]!=tablero[7+R1_1][4+R1_2]){

if(PCBI_2-1>=-1 && PCBI_2-1<=6 && PCBI>-7 && PCBI<=-1){	
	
PCBI=PCBI+2;

PCBI_2=PCBI_2-1;

turno++;}}}

/////////////////////////////////////mover caballo blanco izquierdo a la derecha abajo///////////////////////////////////////
if(caballo==1 && turno==1 && caballo_movimiento==6){ 

if(

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[6-Y6X0][0] &&

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[6-Y6X1][1] &&

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[6-Y6X2][2] &&

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[6-Y6X3][3] &&

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[6-Y6X4][4] &&

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[6-Y6X5][5] &&

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[6-Y6X6][6] &&

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[6-Y6X7][7] &&

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBI+2][1+PCBI_2+1]!=tablero[7+R1_1][4+R1_2]){

if(PCBI_2+1>=-1 && PCBI_2+1<=6 && PCBI>-7 && PCBI<=-1){	
	
PCBI=PCBI+2;

PCBI_2=PCBI_2+1;

turno++;


}}}

/////////////////////////////////////mover caballo blanco derecho a la izquierda arriba///////////////////////////////////////
if(caballo==2 && turno==1 && caballo_movimiento==1 ){

if(

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[6-Y6X0][0] &&

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[6-Y6X1][1] &&

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[6-Y6X2][2] &&

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[6-Y6X3][3] &&

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[6-Y6X4][4] &&

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[6-Y6X5][5] &&

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[6-Y6X6][6] &&

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[6-Y6X7][7] &&

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBD-2][6+PCBD_2-1]!=tablero[7+R1_1][4+R1_2] ){

if(PCBD_2-1>=-5){

PCBD=PCBD-2;

PCBD_2=PCBD_2-1;	

turno++;
}}}

/////////////////////////////////////mover caballo blanco derecho a la derecha arriba ///////////////////////////////////////
if(caballo==2 && turno==1 && caballo_movimiento==2){

if(

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[6-Y6X0][0] &&

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[6-Y6X1][1] &&

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[6-Y6X2][2] &&

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[6-Y6X3][3] &&

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[6-Y6X4][4] &&

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[6-Y6X5][5] &&

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[6-Y6X6][6] &&

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[6-Y6X7][7] &&

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBD-2][6+PCBD_2+1]!=tablero[7+R1_1][4+R1_2]  ){

	
if(PCBD_2+1>=-6 && PCBD_2+1<=1){	

PCBD=PCBD-2;

PCBD_2=PCBD_2+1;

turno++;
}}}

/////////////////////////////////////mover caballo blanco derecho a la izquierda en forma de L acostada ///////////////////////////////////////
if(caballo==2 && turno==1 && caballo_movimiento==3 ){

if(

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[6-Y6X0][0] &&

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[6-Y6X1][1] &&

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[6-Y6X2][2] &&

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[6-Y6X3][3] &&

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[6-Y6X4][4] &&

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[6-Y6X5][5] &&

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[6-Y6X6][6] &&

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[6-Y6X7][7] &&

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBD-1][6+PCBD_2-2]!=tablero[7+R1_1][4+R1_2] ){

if(PCBD_2-2>=-6 && PCBD_2-2<=1){

PCBD=PCBD-1;

PCBD_2=PCBD_2-2;

turno++;	
}}}

/////////////////////////////////////mover caballo blanco derecho a la derecha en forma de L acostada///////////////////////////////////////
if(caballo==2 && turno==1 && caballo_movimiento==4){

if(

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[6-Y6X0][0] &&

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[6-Y6X1][1] &&

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[6-Y6X2][2] &&

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[6-Y6X3][3] &&

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[6-Y6X4][4] &&

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[6-Y6X5][5] &&

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[6-Y6X6][6] &&

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[6-Y6X7][7] &&

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBD-1][6+PCBD_2+2]!=tablero[7+R1_1][4+R1_2] ){
	
if(PCBD_2-2>=-6 && PCBD_2-2<=1){	
	
PCBD=PCBD-1;

PCBD_2=PCBD_2+2;

turno++;
}}}

if(caballo==2 && turno==1 && caballo_movimiento==5){ 

if(

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[6-Y6X0][0] &&

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[6-Y6X1][1] &&

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[6-Y6X2][2] &&

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[6-Y6X3][3] &&

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[6-Y6X4][4] &&

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[6-Y6X5][5] &&

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[6-Y6X6][6] &&

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[6-Y6X7][7] &&

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBD+2][6+PCBD_2-1]!=tablero[7+R1_1][4+R1_2] ){

if(PCBD>=-7 && PCBD<=-1 && PCBD_2-1>=-6 && PCBD_2-1<=1 ){	
	
PCBD=PCBD+2;

PCBD_2=PCBD_2-1;

turno++;


}}}


if(caballo==2 && turno==1 && caballo_movimiento==6){ 

if(

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[6-Y6X0][0] &&

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[6-Y6X1][1] &&

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[6-Y6X2][2] &&

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[6-Y6X3][3] &&

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[6-Y6X4][4] &&

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[6-Y6X5][5] &&

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[6-Y6X6][6] &&

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[6-Y6X7][7] &&

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[7+A2_1][5+A2_2] && 

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[7+A1_1][2+A1_2] && 

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+PCBD+2][6+PCBD_2+1]!=tablero[7+R1_1][4+R1_2] ){

if(PCBD>=-7 && PCBD<=-1 && PCBD_2+1>=-6 && PCBD_2+1<=1){	
	
PCBD=PCBD+2;

PCBD_2=PCBD_2+1;

turno++;


}}}

caballo_movimiento=0;
}




if(turno==2 && caballo_movimiento>0){

/////////////////////////////////////mover caballo negro izquierdo a la izquierda arriba///////////////////////////////////////
if(caballo==1 && turno==2 && caballo_movimiento==1 ){

if(

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[1+Y1X0][0] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[1+Y1X1][1] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[1+Y1X2][2] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[1+Y1X3][3] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[1+Y1X4][4] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[1+Y1X5][5] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[1+Y1X6][6] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[1+Y1X7][7] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCNI+2][1+PCNI_2-1]!=tablero[0+R2_1][4+R2_2] ){


if(PCNI_2-1>=-1){

PCNI=PCNI+2;

PCNI_2=PCNI_2-1;

turno++;}}}

/////////////////////////////////////mover caballo negro izquierdo a la derecha arriba ///////////////////////////////////////
if(caballo==1 && turno==2 && caballo_movimiento==2){

if(

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[1+Y1X0][0] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[1+Y1X1][1] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[1+Y1X2][2] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[1+Y1X3][3] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[1+Y1X4][4] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[1+Y1X5][5] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[1+Y1X6][6] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[1+Y1X7][7] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCNI+2][1+PCNI_2+1]!=tablero[0+R2_1][4+R2_2] ){
	
if(PCNI_2+1<=5){	
	
PCNI=PCNI+2;

PCNI_2=PCNI_2+1;

turno++;}}}

/////////////////////////////////////mover caballo negro izquierdo a la izquierda en forma de L acostada///////////////////////////////////////
if(caballo==1 && turno==2 && caballo_movimiento==3 ){

if(

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[1+Y1X0][0] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[1+Y1X1][1] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[1+Y1X2][2] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[1+Y1X3][3] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[1+Y1X4][4] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[1+Y1X5][5] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[1+Y1X6][6] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[1+Y1X7][7] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCNI+1][1+PCNI_2-2]!=tablero[0+R2_1][4+R2_2]){


if(PCNI_2-2>=-1 ){

PCNI=PCNI+1;

PCNI_2=PCNI_2-2;

turno++;	
}}}

/////////////////////////////////////mover caballo negro izquierdo a la derecha en forma de L acostada///////////////////////////////////////
if(caballo==1 && turno==2 && caballo_movimiento==4){

if(

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[1+Y1X0][0] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[1+Y1X1][1] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[1+Y1X2][2] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[1+Y1X3][3] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[1+Y1X4][4] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[1+Y1X5][5] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[1+Y1X6][6] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[1+Y1X7][7] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCNI+1][1+PCNI_2+2]!=tablero[0+R2_1][4+R2_2] ){
	
if(PCNI_2+2<=6 ){	
	
PCNI=PCNI+1;

PCNI_2=PCNI_2+2;

turno++;}}}

if(caballo==1 && turno==2 && caballo_movimiento==5 ){

if(

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[1+Y1X0][0] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[1+Y1X1][1] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[1+Y1X2][2] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[1+Y1X3][3] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[1+Y1X4][4] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[1+Y1X5][5] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[1+Y1X6][6] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[1+Y1X7][7] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCNI-2][1+PCNI_2-1]!=tablero[0+R2_1][4+R2_2] ){

if(PCNI-2>=0 && PCNI-2<=7 && PCNI_2-1>=-1 && PCNI_2-1<=6){	
	
PCNI=PCNI-2;

PCNI_2=PCNI_2-1;

turno++;}
	
	
}}

if(caballo==1 && turno==2 && caballo_movimiento==6 ){



if(

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[1+Y1X0][0] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[1+Y1X1][1] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[1+Y1X2][2] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[1+Y1X3][3] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[1+Y1X4][4] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[1+Y1X5][5] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[1+Y1X6][6] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[1+Y1X7][7] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCNI-2][1+PCNI_2+1]!=tablero[0+R2_1][4+R2_2] ){

if(PCNI-2>=0 && PCNI-2<=7 && PCNI_2+1>=-1 && PCNI_2+1<=6){	
	
PCNI=PCNI-2;

PCNI_2=PCNI_2+1;

turno++;}
	
}}


/////////////////////////////////////mover caballo negro derecho a la izquierda arriba///////////////////////////////////////
if(caballo==2 && turno==2 && caballo_movimiento==1 ){

if(

tablero[0+PCND+2][6+PCND_2-1]!=tablero[1+Y1X0][0] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[1+Y1X1][1] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[1+Y1X2][2] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[1+Y1X3][3] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[1+Y1X4][4] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[1+Y1X5][5] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[1+Y1X6][6] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[1+Y1X7][7] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCND+2][6+PCND_2-1]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCND+2][6+PCND_2-1]!=tablero[0+R2_1][4+R2_2]){

if(PCND_2-1>=-5){

PCND=PCND+2;

PCND_2=PCND_2-1;
	
turno++;}}}

/////////////////////////////////////mover caballo negro derecho a la derecha arriba ///////////////////////////////////////
if(caballo==2 && turno==2 && caballo_movimiento==2){

if(

tablero[0+PCND+2][6+PCND_2+1]!=tablero[1+Y1X0][0] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[1+Y1X1][1] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[1+Y1X2][2] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[1+Y1X3][3] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[1+Y1X4][4] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[1+Y1X5][5] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[1+Y1X6][6] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[1+Y1X7][7] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCND+2][6+PCND_2+1]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCND+2][6+PCND_2+1]!=tablero[0+R2_1][4+R2_2] ){	
if(PCND_2+1<=1){	
	
PCND=PCND+2;

PCND_2=PCND_2+1;

turno++;}}}

/////////////////////////////////////mover caballo negro derecho a la izquierda en forma de L acostada ///////////////////////////////////////
if(caballo==2 && turno==2 && caballo_movimiento==3 ){

if(

tablero[0+PCND+1][6+PCND_2-2]!=tablero[1+Y1X0][0] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[1+Y1X1][1] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[1+Y1X2][2] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[1+Y1X3][3] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[1+Y1X4][4] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[1+Y1X5][5] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[1+Y1X6][6] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[1+Y1X7][7] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCND+1][6+PCND_2-2]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCND+1][6+PCND_2-2]!=tablero[0+R2_1][4+R2_2] ){	

if(PCND_2-2>=-6 ){

PCND=PCND+1;

PCND_2=PCND_2-2;

turno++;}}}

/////////////////////////////////////mover caballo negro derecho a la derecha en forma de L acostada///////////////////////////////////////
if(caballo==2 && turno==2 && caballo_movimiento==4){

if(

tablero[0+PCND+1][6+PCND_2+2]!=tablero[1+Y1X0][0] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[1+Y1X1][1] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[1+Y1X2][2] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[1+Y1X3][3] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[1+Y1X4][4] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[1+Y1X5][5] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[1+Y1X6][6] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[1+Y1X7][7] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCND+1][6+PCND_2+2]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCND+1][6+PCND_2+2]!=tablero[0+R2_1][4+R2_2] ){	
	
if(PCND_2+2<=1){	
	
PCND=PCND+1;

PCND_2=PCND_2+2;

turno++;}}}

if(caballo==2 && turno==2 && caballo_movimiento==5){

if(

tablero[0+PCND-2][6+PCND_2-1]!=tablero[1+Y1X0][0] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[1+Y1X1][1] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[1+Y1X2][2] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[1+Y1X3][3] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[1+Y1X4][4] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[1+Y1X5][5] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[1+Y1X6][6] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[1+Y1X7][7] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCND-2][6+PCND_2-1]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCND-2][6+PCND_2-1]!=tablero[0+R2_1][4+R2_2] ){

if(PCND-2>=0 && PCND-2<=7 && PCND_2-1>=-6 && PCND_2-1<=1){	
	
PCND=PCND-2;

PCND_2=PCND_2-1;

turno++;}

}}
	
	
if(caballo==2 && turno==2 && caballo_movimiento==6){

if(

tablero[0+PCND-2][6+PCND_2+1]!=tablero[1+Y1X0][0] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[1+Y1X1][1] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[1+Y1X2][2] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[1+Y1X3][3] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[1+Y1X4][4] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[1+Y1X5][5] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[1+Y1X6][6] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[1+Y1X7][7] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[0+T1_1][0+T1_2] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[0+A3_1][5+A3_2] && 

tablero[0+PCND-2][6+PCND_2+1]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+PCND-2][6+PCND_2+1]!=tablero[0+R2_1][4+R2_2] ){

if(PCND-2>=0 && PCND-2<=7 && PCND_2+1>=-6 && PCND_2+1<=1){	
	
PCND=PCND-2;

PCND_2=PCND_2+1;

turno++;}}}	

caballo_movimiento=0;

}

break;

////////////////////////////////////////////////-----------------------caso 4----------------------------------///////////////////////////////////////

case 4:

/////////////////////////////////////////////////////eleccion de que torre se movera//////////////////////////////////////////////////////////////////

do {
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}

for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

printf("\n\nIngrese que torre desea mover:");
	
printf("\n\n1-Izquierda");

printf("\n2-Derecha\n");	

if(validFormat("%i", & torre)) continue;	
	
if(torre>=1 && torre<=2){
	
b=torre<1;	
	
}	
	
	
}while(b);


///////////////////////////////////////////////////////////direccion de torre//////////////////////////////////////////////////////////////////

do {
	
if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}

for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}

printf("\n\nIngrese en que direccion se desea mover la torre:");
	
printf("\n\n1-Arriba");

printf("\n2-Abajo");

printf("\n3-Izquierda");

printf("\n4-Derecha\n");	
	
if(validFormat("%i", & direccion_torre)) continue;	
	
if(direccion_torre>0 && direccion_torre<=4){
	
b=direccion_torre<1;	
	
}	
	
	
}while(b);

////////////////////////////////////////////////movimientos de la torre/////////////////////////////////////////////////////////////////////////////


do {
	
if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}

for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}

printf("\n\nIngrese cuantos pasos desea avanzar con la torre:");
	
printf("\n\n1- 1 movimiento ");

printf("\n2- 2 movimiento");

printf("\n3- 3 movimiento");

printf("\n4- 4 movimiento");

printf("\n5- 5 movimiento");

printf("\n6- 6 movimiento");

printf("\n7- 7 movimiento\n");
	
	
if(validFormat("%i", & movimiento_torre)) continue;	
	
if(movimiento_torre>=1 && movimiento_torre<=7){
	
b=movimiento_torre<1;	
	
}	
	
	
}while(b);

//////torre ,movimiento_torre,direccion_torre/////////////////////////////////////////////////////

TORRE_A=0;

TORRE_B=0;

TORRE_C=0;

TORRE_D=0;

for(i=0;i<=movimiento_torre;i++){

///////////////////////////////////////////////////////////torre negra -izquierda/////////////////////////////////////////////////////////////////

if(direccion_torre==1 && turno==2 && torre==1){

if(

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[1+Y1X0][0] && 

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[1+Y1X1][1] && 

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[1+Y1X2][2] && 

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[1+Y1X3][3] && 

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[1+Y1X4][4] && 

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[1+Y1X5][5] && 

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[1+Y1X6][6] && 

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[1+Y1X7][7] &&

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(T1_1+i)][0+(T1_2)]!=tablero[0+R2_1][4+R2_2] ){

TORRE_A=TORRE_A+1;	
		
}

}

if(direccion_torre==2 && turno==2 && torre==1){
	
if(

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[1+Y1X0][0] && 

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[1+Y1X1][1] && 

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[1+Y1X2][2] && 

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[1+Y1X3][3] && 

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[1+Y1X4][4] && 

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[1+Y1X5][5] && 

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[1+Y1X6][6] && 

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[1+Y1X7][7] &&

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(T1_1-i)][0+(T1_2)]!=tablero[0+R2_1][4+R2_2] ){

TORRE_A=TORRE_A+1;	
		
}}

if(direccion_torre==3 && turno==2 && torre==1){
	
if(

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[1+Y1X0][0] && 

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[1+Y1X1][1] && 

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[1+Y1X2][2] && 

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[1+Y1X3][3] && 

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[1+Y1X4][4] && 

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[1+Y1X5][5] && 

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[1+Y1X6][6] && 

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[0+M2_1][3+M2_2] && 

tablero[0+(T1_1)][0+(T1_2-i)]!=tablero[0+R2_1][4+R2_2] ){

TORRE_A=TORRE_A+1;	
		
}}

if(direccion_torre==4 && turno==2 && torre==1){
	
if(

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[1+Y1X0][0] && 

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[1+Y1X1][1] && 

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[1+Y1X2][2] && 

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[1+Y1X3][3] && 

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[1+Y1X4][4] && 

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[1+Y1X5][5] && 

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[1+Y1X6][6] && 

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(T1_1)][0+(T1_2+i)]!=tablero[0+R2_1][4+R2_2] ){

TORRE_A=TORRE_A+1;	
		
}}

///////////////////////////////////////////////////////////torre negra -derecha/////////////////////////////////////////////////////////////////

if(direccion_torre==1 && turno==2 && torre==2){
	
if(

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[1+Y1X0][0] && 

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[1+Y1X1][1] && 

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[1+Y1X2][2] && 

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[1+Y1X3][3] && 

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[1+Y1X4][4] && 

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[1+Y1X5][5] && 

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[1+Y1X6][6] && 

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[1+Y1X7][7] &&

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(T2_1+i)][7+(T2_2)]!=tablero[0+R2_1][4+R2_2] ){

TORRE_B=TORRE_B+1;	
		
}}

if(direccion_torre==2 && turno==2 && torre==2){
	
if(

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[1+Y1X0][0] && 

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[1+Y1X1][1] && 

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[1+Y1X2][2] && 

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[1+Y1X3][3] && 

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[1+Y1X4][4] && 

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[1+Y1X5][5] && 

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[1+Y1X6][6] && 

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[1+Y1X7][7] &&

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[0+PCND][6+PCND_2] && 

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(T2_1-i)][7+(T2_2)]!=tablero[0+R2_1][4+R2_2]){

TORRE_B=TORRE_B+1;	
		
}}

if(direccion_torre==3 && turno==2 && torre==2){
	
if(

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[1+Y1X0][0] && 

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[1+Y1X1][1] && 

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[1+Y1X2][2] && 

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[1+Y1X3][3] && 

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[1+Y1X4][4] && 

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[1+Y1X5][5] && 

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[1+Y1X6][6] && 

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(T2_1)][7+(T2_2-i)]!=tablero[0+R2_1][4+R2_2] ){

TORRE_B=TORRE_B+1;	
		
}}

if(direccion_torre==4 && turno==2 && torre==2){
	
if(

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[1+Y1X0][0] && 

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[1+Y1X1][1] && 

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[1+Y1X2][2] && 

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[1+Y1X3][3] && 

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[1+Y1X4][4] && 

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[1+Y1X5][5] && 

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[1+Y1X6][6] && 

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[0+PCND][6+PCND_2] &&  

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[0+M2_1][3+M2_2] &&

tablero[0+(T2_1)][7+(T2_2+i)]!=tablero[0+R2_1][4+R2_2]){

TORRE_B=TORRE_B+1;	
		
}}

///////////////////////////////////////////////////////////torre blanca -izquierda/////////////////////////////////////////////////////////////////

if(direccion_torre==1 && turno==1 && torre==1){
	
if(

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[6-Y6X0][0] && 

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[6-Y6X1][1] && 

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[6-Y6X2][2] && 

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[6-Y6X3][3] && 

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[6-Y6X4][4] && 

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[6-Y6X5][5] && 

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[6-Y6X6][6] && 

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[6-Y6X7][7] &&

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(T3_1-i)][0+(T3_2)]!=tablero[7+R1_1][4+R1_2] ){

TORRE_C=TORRE_C+1;			
}}

if(direccion_torre==2 && turno==1 && torre==1){
	
if(

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[6-Y6X0][0] && 

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[6-Y6X1][1] && 

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[6-Y6X2][2] && 

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[6-Y6X3][3] && 

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[6-Y6X4][4] && 

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[6-Y6X5][5] && 

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[6-Y6X6][6] && 

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[6-Y6X7][7] &&

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(T3_1+i)][0+(T3_2)]!=tablero[7+R1_1][4+R1_2] ){

TORRE_C=TORRE_C+1;	
		
}}

if(direccion_torre==3 && turno==1 && torre==1){
	
if(

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[6-Y6X0][0] && 

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[6-Y6X1][1] && 

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[6-Y6X2][2] && 

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[6-Y6X3][3] && 

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[6-Y6X4][4] && 

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[6-Y6X5][5] && 

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[6-Y6X6][6] && 

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(T3_1)][0+(T3_2-i)]!=tablero[7+R1_1][4+R1_2] ){

TORRE_C=TORRE_C+1;	
		
}}

if(direccion_torre==4 && turno==1 && torre==1){
	
if(

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[6-Y6X0][0] && 

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[6-Y6X1][1] && 

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[6-Y6X2][2] && 

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[6-Y6X3][3] && 

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[6-Y6X4][4] && 

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[6-Y6X5][5] && 

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[6-Y6X6][6] && 

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[7+PCBD][6+PCBD_2] && 

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(T3_1)][0+(T3_2+i)]!=tablero[7+R1_1][4+R1_2] ){

TORRE_C=TORRE_C+1;	
		
}}

///////////////////////////////////////////////////////////torre blanca -derecha/////////////////////////////////////////////////////////////////

if(direccion_torre==1 && turno==1 && torre==2){
	
if(

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[6-Y6X0][0] && 

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[6-Y6X1][1] && 

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[6-Y6X2][2] && 

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[6-Y6X3][3] && 

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[6-Y6X4][4] && 

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[6-Y6X5][5] && 

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[6-Y6X6][6] && 

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[6-Y6X7][7] &&

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[7+PCBD][6+PCBD_2] && 

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(T4_1-i)][7+(T4_2)]!=tablero[7+R1_1][4+R1_2]){

TORRE_D=TORRE_D+1;			
}}

if(direccion_torre==2 && turno==1 && torre==2){
	
if(

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[6-Y6X0][0] && 

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[6-Y6X1][1] && 

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[6-Y6X2][2] && 

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[6-Y6X3][3] && 

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[6-Y6X4][4] && 

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[6-Y6X5][5] && 

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[6-Y6X6][6] && 

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[6-Y6X7][7] &&

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(T4_1+i)][7+(T4_2)]!=tablero[7+R1_1][4+R1_2] ){

TORRE_D=TORRE_D+1;	
		
}}

if(direccion_torre==3 && turno==1 && torre==2){
	
if(

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[6-Y6X0][0] && 

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[6-Y6X1][1] && 

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[6-Y6X2][2] && 

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[6-Y6X3][3] && 

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[6-Y6X4][4] && 

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[6-Y6X5][5] && 

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[6-Y6X6][6] && 

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(T4_1)][7+(T4_2-i)]!=tablero[7+R1_1][4+R1_2]){

TORRE_D=TORRE_D+1;	
		
}}

if(direccion_torre==4 && turno==1 && torre==2){
	
if(

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[6-Y6X0][0] && 

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[6-Y6X1][1] && 

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[6-Y6X2][2] && 

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[6-Y6X3][3] && 

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[6-Y6X4][4] && 

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[6-Y6X5][5] && 

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[6-Y6X6][6] && 

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[7+PCBD][6+PCBD_2] && 

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[7+M1_1][3+M1_2] &&

tablero[7+(T4_1)][7+(T4_2+i)]!=tablero[7+R1_1][4+R1_2]){

TORRE_D=TORRE_D+1;	
		
}}
///////////////////////////////////////////////////////////////////////////////
}


if(turno==2){


if(TORRE_A>movimiento_torre ){

///////////////////////////////////moverse para arriba torre izquierda//////////////////////////////////////////////////////////		
if(direccion_torre==1 && T1_1+movimiento_torre>=0 && T1_1+movimiento_torre<=7 ){
	
T1_1=T1_1+movimiento_torre;	

turno++;}	
///////////////////////////////////moverse para abajo torre izquierda//////////////////////////////////////////////////////////	
if(direccion_torre==2 && T1_1-movimiento_torre>=0 && T1_1-movimiento_torre<=7){
	
T1_1=T1_1-movimiento_torre;	
	
turno++;}	
///////////////////////////////////moverse para la izquierda torre izquierda//////////////////////////////////////////////////////////	
if(direccion_torre==3 && T1_2-movimiento_torre>=0 && T1_2-movimiento_torre<=7 ){
	
T1_2=T1_2-movimiento_torre;		

turno++;}	
///////////////////////////////////moverse para la derecha torre izquierda//////////////////////////////////////////////////////////	
if(direccion_torre==4 && T1_2+movimiento_torre>=0 && T1_2+movimiento_torre<=7){
	
T1_2=T1_2+movimiento_torre;		

turno++;		
}

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


if(TORRE_B>movimiento_torre){
	
///////////////////////////////////moverse para arriba torre derecha//////////////////////////////////////////////////////////		
if(direccion_torre==1 && T2_1+movimiento_torre>=0 && T2_1+movimiento_torre<=7 ){
	
T2_1=T2_1+movimiento_torre;	

turno++;}	
///////////////////////////////////moverse para abajo torre derecha//////////////////////////////////////////////////////////	
if(direccion_torre==2 && T2_1-movimiento_torre>=0 && T2_1-movimiento_torre<=7){
	
T2_1=T2_1-movimiento_torre;		

turno++;}	
///////////////////////////////////moverse para la izquierda torre derecha//////////////////////////////////////////////////////////
if(direccion_torre==3 && T2_2-movimiento_torre>=-7 && T2_2-movimiento_torre<=0 ){
	
T2_2=T2_2-movimiento_torre;		

turno++;}	

///////////////////////////////////moverse para la derecha torre derecha//////////////////////////////////////////////////////////
if(direccion_torre==4 && T2_2+movimiento_torre>=-7 && T2_2+movimiento_torre<=0){
	
T2_2=T2_2+movimiento_torre;		

turno++;}


}}

if(turno==1){



if(TORRE_C>movimiento_torre){

///////////////////////////////////moverse para arriba torre izquierda//////////////////////////////////////////////////////////		
if(direccion_torre==1 && T3_1-movimiento_torre>=-7 && T3_1-movimiento_torre<=0){
	
T3_1=T3_1-movimiento_torre;	
turno++;		
}	
///////////////////////////////////moverse para abajo torre izquierda//////////////////////////////////////////////////////////	
if(direccion_torre==2 && T3_1+movimiento_torre>=-7 && T3_1+movimiento_torre<=0){
	
T3_1=T3_1+movimiento_torre;		
turno++;		
}	
///////////////////////////////////moverse para la izquierda torre izquierda//////////////////////////////////////////////////////////	
if(direccion_torre==3 && T3_2-movimiento_torre>=0 && T3_2-movimiento_torre<=7 ){
	
T3_2=T3_2-movimiento_torre;		
turno++;		
}	
///////////////////////////////////moverse para la derecha torre izquierda//////////////////////////////////////////////////////////	
if(direccion_torre==4 && T3_2+movimiento_torre>=0 && T3_2+movimiento_torre<=7){
	
T3_2=T3_2+movimiento_torre;		

turno++;		
}


}


if(TORRE_D>movimiento_torre){


///////////////////////////////////moverse para arriba torre derecha//////////////////////////////////////////////////////////		
if(direccion_torre==1 && T4_1-movimiento_torre>=-7 && T4_1-movimiento_torre<=0 ){
	
T4_1=T4_1-movimiento_torre;	
turno++;		
}	
///////////////////////////////////moverse para abajo torre derecha//////////////////////////////////////////////////////////	
if(direccion_torre==2 && T4_1+movimiento_torre>=-7 && T4_1+movimiento_torre<=0){
	
T4_1=T4_1+movimiento_torre;		
turno++;		
}	
///////////////////////////////////moverse para la izquierda torre derecha//////////////////////////////////////////////////////////
if(direccion_torre==3 && T4_2-movimiento_torre<=0 && T4_2-movimiento_torre>=-7 ){
	
T4_2=T4_2-movimiento_torre;		
turno++;		
}	

///////////////////////////////////moverse para la derecha torre derecha//////////////////////////////////////////////////////////
if(direccion_torre==4 && T4_2+movimiento_torre<=0 && T4_2+movimiento_torre>=-7){
	
T4_2=T4_2+movimiento_torre;		
turno++;		
}}
	
}

break;

//////////////////////////////////////////////////// Caso numero 5/////////////////////////////////////////////////////////////////// 

case 5:
	
/* Direccion en la que se desea mover la reina *//////////////////////////////////////////////////////////////////////////////////////////////////////
	
do {
	
if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");			
}	

if(turno==2){	

printf("Turno de jugar para las fichas negras\n\n");			
}

for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);}}

printf("\n\nIngrese la direccion en la que desea mover la reina:");
		
printf("\n\n1-Arriba");
	
printf("\n2-Izquierda");

printf("\n3-Derecha");	
	
printf("\n4-Izquierda arriba");

printf("\n5-Derecha arriba");	

printf("\n6-Abajo");

printf("\n7-Izquierda abajo");

printf("\n8-Derecha abajo\n");


if(validFormat("%i", & direccion_reina)) continue;	
	
if(direccion_reina>=1 && direccion_reina<=8){
	
b=direccion_reina<1;	
	
}}while(b);	


/* Pasos que desea realizar con la reina *//////////////////////////////////////////////////////////////////////////////////////////////////////

do {

if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");	
		
}	

if(turno==2){	
printf("Turno de jugar para las fichas negras\n\n");			
}

for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);	

}}

printf("\n\nIngrese la cantidad de movimientos que desea realizar con la reina:");

printf("\n\n1- 1 movimiento");
	
printf("\n2- 2 movimientos");	

printf("\n3- 3 movimientos");

printf("\n4- 4 movimientos");

printf("\n5- 5 movimientos");

printf("\n6- 6 movimientos");

printf("\n7- 7 movimientos\n");


if(validFormat("%i", & movimiento_reina)) continue;	
	
if(movimiento_reina>=1 && movimiento_reina<=7){
	
b=movimiento_reina<1;	
	
}}while(b);

REINA_A=0;

REINA_B=0;


for(i=0;i<=movimiento_reina;i++){


/*Direccion 1 reina blanca */

if(direccion_reina==1 && turno==1){
	
if(

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[6-Y6X0][0] && 

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[6-Y6X1][1] && 

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[6-Y6X2][2] && 

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[6-Y6X3][3] && 

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[6-Y6X4][4] && 

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[6-Y6X5][5] && 

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[6-Y6X6][6] && 

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[6-Y6X7][7] &&

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[7+T3_1][0+T3_2]	&&

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(M1_1-i)][3+(M1_2)]!=tablero[7+R1_1][4+R1_2]){

REINA_A=REINA_A+1;

}}

/*Direccion 2 reina blanca */

if(direccion_reina==2 && turno==1){
	
if(

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[6-Y6X0][0] && 

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[6-Y6X1][1] && 

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[6-Y6X2][2] && 

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[6-Y6X3][3] && 

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[6-Y6X4][4] && 

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[6-Y6X5][5] && 

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[6-Y6X6][6] && 

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[7+T3_1][0+T3_2]	&&

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(M1_1)][3+(M1_2-i)]!=tablero[7+R1_1][4+R1_2]){

REINA_A=REINA_A+1;

}}

/*Direccion 3 reina blanca */

if(direccion_reina==3 && turno==1){
	
if(

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[6-Y6X0][0] && 

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[6-Y6X1][1] && 

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[6-Y6X2][2] && 

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[6-Y6X3][3] && 

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[6-Y6X4][4] && 

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[6-Y6X5][5] && 

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[6-Y6X6][6] && 

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(M1_1)][3+(M1_2+i)]!=tablero[7+R1_1][4+R1_2]){

REINA_A=REINA_A+1;

}}

/*Direccion 4 reina blanca */

if(direccion_reina==4 && turno==1){
	
if(

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[6-Y6X0][0] && 

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[6-Y6X1][1] && 

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[6-Y6X2][2] && 

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[6-Y6X3][3] && 

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[6-Y6X4][4] && 

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[6-Y6X5][5] && 

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[6-Y6X6][6] && 

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(M1_1-i)][3+(M1_2-i)]!=tablero[7+R1_1][4+R1_2]){

REINA_A=REINA_A+1;

}}


/*Direccion 5 reina blanca */

if(direccion_reina==5 && turno==1){
	
if(

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[6-Y6X0][0] && 

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[6-Y6X1][1] && 

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[6-Y6X2][2] && 

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[6-Y6X3][3] && 

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[6-Y6X4][4] && 

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[6-Y6X5][5] && 

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[6-Y6X6][6] && 

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(M1_1-i)][3+(M1_2+i)]!=tablero[7+R1_1][4+R1_2]){

REINA_A=REINA_A+1;

}}


/*Direccion 6 reina blanca */

if(direccion_reina==6 && turno==1){
	
if(

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[6-Y6X0][0] && 

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[6-Y6X1][1] && 

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[6-Y6X2][2] && 

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[6-Y6X3][3] && 

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[6-Y6X4][4] && 

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[6-Y6X5][5] && 

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[6-Y6X6][6] && 

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[6-Y6X7][7] &&

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(M1_1+i)][3+(M1_2)]!=tablero[7+R1_1][4+R1_2]){

REINA_A=REINA_A+1;

}}


/*Direccion 7 reina blanca */

if(direccion_reina==7 && turno==1){
	
if(

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[6-Y6X0][0] && 

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[6-Y6X1][1] && 

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[6-Y6X2][2] && 

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[6-Y6X3][3] && 

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[6-Y6X4][4] && 

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[6-Y6X5][5] && 

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[6-Y6X6][6] && 

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(M1_1+i)][3+(M1_2-i)]!=tablero[7+R1_1][4+R1_2]){

REINA_A=REINA_A+1;

}}


/*Direccion 8 reina blanca */

if(direccion_reina==8 && turno==1){
	
if(

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[6-Y6X0][0] && 

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[6-Y6X1][1] && 

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[6-Y6X2][2] && 

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[6-Y6X3][3] && 

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[6-Y6X4][4] && 

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[6-Y6X5][5] && 

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[6-Y6X6][6] && 

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(M1_1+i)][3+(M1_2+i)]!=tablero[7+R1_1][4+R1_2]){

REINA_A=REINA_A+1;

}}

/*Direccion 1 reina negra */

if(direccion_reina==1 && turno==2){
	
if(

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[1+Y1X0][0] && 

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[1+Y1X1][1] && 

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[1+Y1X2][2] && 

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[1+Y1X3][3] && 

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[1+Y1X4][4] && 

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[1+Y1X5][5] && 

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[1+Y1X6][6] && 

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[1+Y1X7][7] &&

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(M2_1+i)][3+(M2_2)]!=tablero[0+R2_1][4+R2_2]){

REINA_B=REINA_B+1;	
		
}}


/*Direccion 2 reina negra */

if(direccion_reina==2 && turno==2){
	
if(

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[1+Y1X0][0] && 

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[1+Y1X1][1] && 

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[1+Y1X2][2] && 

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[1+Y1X3][3] && 

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[1+Y1X4][4] && 

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[1+Y1X5][5] && 

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[1+Y1X6][6] && 

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(M2_1)][3+(M2_2-i)]!=tablero[0+R2_1][4+R2_2]){

REINA_B=REINA_B+1;	
		
}}


/*Direccion 3 reina negra */

if(direccion_reina==3 && turno==2){
	
if(

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[1+Y1X0][0] && 

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[1+Y1X1][1] && 

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[1+Y1X2][2] && 

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[1+Y1X3][3] && 

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[1+Y1X4][4] && 

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[1+Y1X5][5] && 

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[1+Y1X6][6] && 

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(M2_1)][3+(M2_2+i)]!=tablero[0+R2_1][4+R2_2]){

REINA_B=REINA_B+1;	
		
}}


/*Direccion 4 reina negra */

if(direccion_reina==4 && turno==2){
	
if(

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[1+Y1X0][0] && 

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[1+Y1X1][1] && 

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[1+Y1X2][2] && 

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[1+Y1X3][3] && 

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[1+Y1X4][4] && 

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[1+Y1X5][5] && 

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[1+Y1X6][6] && 

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[0+T2_1][7+T2_2]&&

tablero[0+(M2_1+i)][3+(M2_2-i)]!=tablero[0+R2_1][4+R2_2]){

REINA_B=REINA_B+1;	
		
}}


/*Direccion 5 reina negra */

if(direccion_reina==5 && turno==2){
	
if(

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[1+Y1X0][0] && 

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[1+Y1X1][1] && 

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[1+Y1X2][2] && 

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[1+Y1X3][3] && 

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[1+Y1X4][4] && 

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[1+Y1X5][5] && 

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[1+Y1X6][6] && 

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(M2_1+i)][3+(M2_2+i)]!=tablero[0+R2_1][4+R2_2]){

REINA_B=REINA_B+1;	
		
}}


/*Direccion 6 reina negra */

if(direccion_reina==6 && turno==2){
	
if(

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[1+Y1X0][0] && 

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[1+Y1X1][1] && 

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[1+Y1X2][2] && 

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[1+Y1X3][3] && 

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[1+Y1X4][4] && 

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[1+Y1X5][5] && 

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[1+Y1X6][6] && 

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[1+Y1X7][7] &&

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(M2_1-i)][3+(M2_2)]!=tablero[0+R2_1][4+R2_2]){

REINA_B=REINA_B+1;	
		
}}


/*Direccion 7 reina negra */

if(direccion_reina==7 && turno==2){
	
if(

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[1+Y1X0][0] && 

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[1+Y1X1][1] && 

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[1+Y1X2][2] && 

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[1+Y1X3][3] && 

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[1+Y1X4][4] && 

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[1+Y1X5][5] && 

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[1+Y1X6][6] && 

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(M2_1-i)][3+(M2_2-i)]!=tablero[0+R2_1][4+R2_2]){

REINA_B=REINA_B+1;	
		
}}


/*Direccion 8 reina negra */

if(direccion_reina==8 && turno==2){
	
if(

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[1+Y1X0][0] && 

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[1+Y1X1][1] && 

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[1+Y1X2][2] && 

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[1+Y1X3][3] && 

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[1+Y1X4][4] && 

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[1+Y1X5][5] && 

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[1+Y1X6][6] && 

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[0+T2_1][7+T2_2] && 

tablero[0+(M2_1-i)][3+(M2_2+i)]!=tablero[0+R2_1][4+R2_2]){

REINA_B=REINA_B+1;	
		
}}


}

/* Movimiento de la reina blanca */

if(turno==1){

if(REINA_A>movimiento_reina){


if (direccion_reina==1){
	
if(M1_1-movimiento_reina>=-7 && M1_1-movimiento_reina<0){

	
M1_1=M1_1-movimiento_reina;	
	
}}

if (direccion_reina==2){
	
if(M1_2-movimiento_reina>=-3 && M1_2-movimiento_reina<=4){

	
M1_2=M1_2-movimiento_reina;	
	
}}

if (direccion_reina==3){
	
if(M1_2+movimiento_reina>=-3 && M1_2+movimiento_reina<=4){

	
M1_2=M1_2+movimiento_reina;	
	
}}

if (direccion_reina==4){
	
if(M1_2-movimiento_reina>=-3 && M1_2-movimiento_reina<=4 && M1_1-movimiento_reina>=-7 && M1_1-movimiento_reina<0){

M1_1=M1_1-movimiento_reina;	
	
M1_2=M1_2-movimiento_reina;	
	
}}

if (direccion_reina==5){
	
if(M1_2+movimiento_reina>=-3 && M1_2+movimiento_reina<=4 && M1_1-movimiento_reina>=-7 && M1_1-movimiento_reina<0){

M1_1=M1_1-movimiento_reina;
	
M1_2=M1_2+movimiento_reina;	
	
}}

if (direccion_reina==6){
	
if(M1_1+movimiento_reina>=-7 && M1_1+movimiento_reina<=0 ){

	
M1_1=M1_1+movimiento_reina;	
	
}}

if (direccion_reina==7){

	
if(M1_2-movimiento_reina>=-3 && M1_2-movimiento_reina<=4 && M1_1+movimiento_reina>=-7 && M1_1+movimiento_reina<=0){

M1_1=M1_1+movimiento_reina;	
	
M1_2=M1_2-movimiento_reina;	
	
}}

if (direccion_reina==8){
	
if(M1_2+movimiento_reina>=-3 && M1_2+movimiento_reina<=4 && M1_1-movimiento_reina>=-7 && M1_1-movimiento_reina<=0){

M1_1=M1_1+movimiento_reina;
	
M1_2=M1_2+movimiento_reina;	
	
}}
turno++;
}}

/* Movimiento de la reina negra*/

if(turno==2){

if(REINA_B>movimiento_reina){

if (direccion_reina==1){
	
if(M2_1+movimiento_reina>=0 && M2_1+movimiento_reina<=7){

	
M2_1=M2_1+movimiento_reina;	
	
}}

if (direccion_reina==2){
	
if(M2_2-movimiento_reina>=-3 && M2_2-movimiento_reina<=4){

	
M2_2=M2_2-movimiento_reina;	
	
}}

if (direccion_reina==3){
	
if(M2_2+movimiento_reina>=-3 && M2_2+movimiento_reina<=4){

	
M2_2=M2_2+movimiento_reina;	
	
}}

if (direccion_reina==4){
	
if(M2_2-movimiento_reina>=-3 && M2_2-movimiento_reina<=4 && M2_1+movimiento_reina>=0 && M2_1+movimiento_reina<=7){

M2_1=M2_1+movimiento_reina;	
	
M2_2=M2_2-movimiento_reina;	
	
}}

if (direccion_reina==5){
	
if(M2_2+movimiento_reina>=-3 && M2_2+movimiento_reina<=4 && M2_1+movimiento_reina>=0 && M2_1+movimiento_reina<=7){

M2_1=M2_1+movimiento_reina;
	
M2_2=M2_2+movimiento_reina;	
	
}}

if (direccion_reina==6){
	
if(M2_1-movimiento_reina>=0 && M2_1-movimiento_reina<=7 ){
	
M2_1=M2_1-movimiento_reina;		
}}


if (direccion_reina==7){
	
if(M2_2-movimiento_reina>=-3 && M2_2-movimiento_reina<=4 && M2_1-movimiento_reina>=0 && M2_1-movimiento_reina<=7){

M2_1=M2_1-movimiento_reina;	
	
M2_2=M2_2-movimiento_reina;	
	
}}

if (direccion_reina==8){
	
if(M2_2+movimiento_reina>=-3 && M2_2+movimiento_reina<=4 && M2_1-movimiento_reina>=0 && M2_1-movimiento_reina<=7){

M2_1=M2_1-movimiento_reina;
	
M2_2=M2_2+movimiento_reina;	
	
}}

turno++;
}}


break;
/////////////////////////////////-----------------------------------caso 6----------------------------------------------////////////////////////////////
case 6:

do {
	
if(turno==1){
	
printf("Turno de jugar para las fichas blancas\n\n");			
}	

if(turno==2){	

printf("Turno de jugar para las fichas negras\n\n");			
}

for(i=0;i<=8;i++){
	
printf("\n");	
	
for(j=0; j<=8; j++){
	
printf("[%c]",tablero[i][j]);}}

printf("\n\nIngrese la direccion en la que desea mover la reina:");
		
printf("\n\n1-Arriba");
	
printf("\n2-Izquierda");

printf("\n3-Derecha");	
	
printf("\n4-Izquierda arriba");

printf("\n5-Derecha arriba");	

printf("\n6-Abajo");

printf("\n7-Izquierda abajo");

printf("\n8-Derecha abajo\n");


if(validFormat("%i", & direccion_rey)) continue;	
	
if(direccion_rey>=1 && direccion_rey<=8){
	
b=direccion_rey<1;	

movimiento_rey=1;
	
}}while(b);	



REY_A=0;

REY_B=0;

for(i=0;i<=movimiento_rey;i++){


/*Direccion 1 rey blanca */

if(direccion_rey==1 && turno==1){
	
if(

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[6-Y6X0][0] && 

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[6-Y6X1][1] && 

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[6-Y6X2][2] && 

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[6-Y6X3][3] && 

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[6-Y6X4][4] && 

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[6-Y6X5][5] && 

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[6-Y6X6][6] && 

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[6-Y6X7][7] &&

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(R1_1-i)][4+(R1_2)]!=tablero[7+M1_1][3+M1_2]

){

REY_A=REY_A+1;
}}


/*Direccion 2 rey blanca */

if(direccion_rey==2 && turno==1){
	
if(

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[6-Y6X0][0] && 

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[6-Y6X1][1] && 

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[6-Y6X2][2] && 

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[6-Y6X3][3] && 

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[6-Y6X4][4] && 

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[6-Y6X5][5] && 

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[6-Y6X6][6] && 

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(R1_1)][4+(R1_2-i)]!=tablero[7+M1_1][3+M1_2]

){

REY_A=REY_A+1;
}}

/*Direccion 3 rey blanca */

if(direccion_rey==3 && turno==1){
	
if(

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[6-Y6X0][0] && 

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[6-Y6X1][1] && 

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[6-Y6X2][2] && 

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[6-Y6X3][3] && 

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[6-Y6X4][4] && 

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[6-Y6X5][5] && 

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[6-Y6X6][6] && 

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(R1_1)][4+(R1_2+i)]!=tablero[7+M1_1][3+M1_2]

){

REY_A=REY_A+1;
}}

/*Direccion 4 rey blanca */

if(direccion_rey==4 && turno==1){
	
if(

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[6-Y6X0][0] && 

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[6-Y6X1][1] && 

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[6-Y6X2][2] && 

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[6-Y6X3][3] && 

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[6-Y6X4][4] && 

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[6-Y6X5][5] && 

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[6-Y6X6][6] && 

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(R1_1-i)][4+(R1_2-i)]!=tablero[7+M1_1][3+M1_2]

){

REY_A=REY_A+1;
}}

/*Direccion 5 rey blanca */

if(direccion_rey==5 && turno==1){
	
if(

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[6-Y6X0][0] && 

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[6-Y6X1][1] && 

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[6-Y6X2][2] && 

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[6-Y6X3][3] && 

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[6-Y6X4][4] && 

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[6-Y6X5][5] && 

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[6-Y6X6][6] && 

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(R1_1-i)][4+(R1_2+i)]!=tablero[7+M1_1][3+M1_2]

){

REY_A=REY_A+1;
}}


/*Direccion 6 rey blanca */

if(direccion_rey==6 && turno==1){
	
if(

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[6-Y6X0][0] && 

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[6-Y6X1][1] && 

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[6-Y6X2][2] && 

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[6-Y6X3][3] && 

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[6-Y6X4][4] && 

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[6-Y6X5][5] && 

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[6-Y6X6][6] && 

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[6-Y6X7][7] &&

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(R1_1+i)][4+(R1_2)]!=tablero[7+M1_1][3+M1_2]

){

REY_A=REY_A+1;
}}


/*Direccion 7 rey blanca */

if(direccion_rey==7 && turno==1){
	
if(

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[6-Y6X0][0] && 

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[6-Y6X1][1] && 

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[6-Y6X2][2] && 

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[6-Y6X3][3] && 

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[6-Y6X4][4] && 

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[6-Y6X5][5] && 

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[6-Y6X6][6] && 

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[6-Y6X7][7] &&

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(R1_1+i)][4+(R1_2-i)]!=tablero[7+M1_1][3+M1_2]

){

REY_A=REY_A+1;
}}


/*Direccion 8 rey blanca */

if(direccion_rey==8 && turno==1){
	
if(

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[6-Y6X0][0] && 

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[6-Y6X1][1] && 

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[6-Y6X2][2] && 

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[6-Y6X3][3] && 

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[6-Y6X4][4] && 

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[6-Y6X5][5] && 

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[6-Y6X6][6] && 

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[6-Y6X7][7] &&

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[7+A1_1][2+A1_2] &&

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[7+A2_1][5+A2_2] &&

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[7+PCBI][1+PCBI_2] &&

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[7+PCBD][6+PCBD_2] &&

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[7+T3_1][0+T3_2] &&

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[7+T4_1][7+T4_2] &&

tablero[7+(R1_1+i)][4+(R1_2+i)]!=tablero[7+M1_1][3+M1_2]

){

REY_A=REY_A+1;
}}


/*Direccion 1 rey negra */

if(direccion_rey==1 && turno==2){
	
if(

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[1+Y1X0][0] && 

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[1+Y1X1][1] && 

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[1+Y1X2][2] && 

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[1+Y1X3][3] && 

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[1+Y1X4][4] && 

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[1+Y1X5][5] && 

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[1+Y1X6][6] && 

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[1+Y1X7][7] &&

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(R2_1+i)][4+(R2_2)]!=tablero[0+M2_1][3+M2_2]
){

REY_B=REY_B+1;}}


/*Direccion 2 rey negra */

if(direccion_rey==2 && turno==2){
	
if(

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[1+Y1X0][0] && 

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[1+Y1X1][1] && 

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[1+Y1X2][2] && 

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[1+Y1X3][3] && 

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[1+Y1X4][4] && 

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[1+Y1X5][5] && 

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[1+Y1X6][6] && 

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(R2_1)][4+(R2_2-i)]!=tablero[0+M2_1][3+M2_2]
){

REY_B=REY_B+1;}}


/*Direccion 3 rey negra */

if(direccion_rey==3 && turno==2){
	
if(

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[1+Y1X0][0] && 

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[1+Y1X1][1] && 

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[1+Y1X2][2] && 

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[1+Y1X3][3] && 

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[1+Y1X4][4] && 

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[1+Y1X5][5] && 

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[1+Y1X6][6] && 

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(R2_1)][4+(R2_2+i)]!=tablero[0+M2_1][3+M2_2]
){

REY_B=REY_B+1;}}


/*Direccion 4 rey negra */

if(direccion_rey==4 && turno==2){
	
if(

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[1+Y1X0][0] && 

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[1+Y1X1][1] && 

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[1+Y1X2][2] && 

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[1+Y1X3][3] && 

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[1+Y1X4][4] && 

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[1+Y1X5][5] && 

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[1+Y1X6][6] && 

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(R2_1+i)][4+(R2_2-i)]!=tablero[0+M2_1][3+M2_2]
){

REY_B=REY_B+1;}}


/*Direccion 5 rey negra */

if(direccion_rey==5 && turno==2){
	
if(

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[1+Y1X0][0] && 

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[1+Y1X1][1] && 

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[1+Y1X2][2] && 

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[1+Y1X3][3] && 

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[1+Y1X4][4] && 

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[1+Y1X5][5] && 

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[1+Y1X6][6] && 

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(R2_1+i)][4+(R2_2+i)]!=tablero[0+M2_1][3+M2_2]
){

REY_B=REY_B+1;}}



/*Direccion 6 rey negra */

if(direccion_rey==6 && turno==2){
	
if(

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[1+Y1X0][0] && 

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[1+Y1X1][1] && 

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[1+Y1X2][2] && 

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[1+Y1X3][3] && 

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[1+Y1X4][4] && 

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[1+Y1X5][5] && 

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[1+Y1X6][6] && 

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[1+Y1X7][7] &&

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(R2_1-i)][4+(R2_2)]!=tablero[0+M2_1][3+M2_2]
){

REY_B=REY_B+1;}}


/*Direccion 7 rey negra */

if(direccion_rey==7 && turno==2){
	
if(

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[1+Y1X0][0] && 

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[1+Y1X1][1] && 

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[1+Y1X2][2] && 

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[1+Y1X3][3] && 

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[1+Y1X4][4] && 

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[1+Y1X5][5] && 

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[1+Y1X6][6] && 

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[1+Y1X7][7] &&

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(R2_1-i)][4+(R2_2-i)]!=tablero[0+M2_1][3+M2_2]
){

REY_B=REY_B+1;}}


/*Direccion 8 rey negra */

if(direccion_rey==8 && turno==2){
	
if(

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[1+Y1X0][0] && 

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[1+Y1X1][1] && 

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[1+Y1X2][2] && 

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[1+Y1X3][3] && 

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[1+Y1X4][4] && 

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[1+Y1X5][5] && 

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[1+Y1X6][6] && 

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[1+Y1X7][7] &&

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[0+A4_1][2+A4_2] &&

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[0+A3_1][5+A3_2] &&

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[0+PCNI][1+PCNI_2] &&

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[0+PCND][6+PCND_2] &&

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[0+T1_1][0+T1_2] &&	

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[0+T2_1][7+T2_2] &&

tablero[0+(R2_1-i)][4+(R2_2+i)]!=tablero[0+M2_1][3+M2_2]
){

REY_B=REY_B+1;}}

}


if(turno==1){
	
if(REY_A>movimiento_rey){

	
if(direccion_rey==1){

if(R1_1-movimiento_rey>=-7 && R1_1-movimiento_rey<=0 ){

R1_1=R1_1-movimiento_rey;}}


if(direccion_rey==2){

if(R1_2-movimiento_rey>=-4 && R1_2-movimiento_rey<=3){

R1_2=R1_2-movimiento_rey;}}


if(direccion_rey==3){
	
if(R1_2+movimiento_rey>=-4 && R1_2+movimiento_rey<=3){	

R1_2=R1_2+movimiento_rey;}}


if(direccion_rey==4){

if(R1_2-movimiento_rey>=-4 && R1_2-movimiento_rey<=3 && R1_1-movimiento_rey>=-7 && R1_1-movimiento_rey<=0){
	
R1_1=R1_1-movimiento_rey;

R1_2=R1_2-movimiento_rey;}}


if(direccion_rey==5){

if(R1_2+movimiento_rey>=-4 && R1_2+movimiento_rey<=3 && R1_1-movimiento_rey>=-7 && R1_1-movimiento_rey<=0){
	
R1_1=R1_1-movimiento_rey;

R1_2=R1_2+movimiento_rey;}}


if(direccion_rey==6){

if(R1_1+movimiento_rey>=-7 && R1_1+movimiento_rey<=0 ){

R1_1=R1_1+movimiento_rey;}}


if(direccion_rey==7){

if(R1_2-movimiento_rey>=-4 && R1_2-movimiento_rey<=3 && R1_1-movimiento_rey>=-7 && R1_1-movimiento_rey<=0){
	
R1_1=R1_1+movimiento_rey;

R1_2=R1_2-movimiento_rey;}}


if(direccion_rey==8){

if(R1_2+movimiento_rey>=-4 && R1_2+movimiento_rey<=3 && R1_1+movimiento_rey>=-7 && R1_1+movimiento_rey<=0){
	
R1_1=R1_1+movimiento_rey;

R1_2=R1_2+movimiento_rey;}}

turno++;
}}

if(turno==2){

if(REY_B>movimiento_rey){
	
if(direccion_rey==1){

if(R2_1+movimiento_rey>=0 && R2_1+movimiento_rey<=7 ){

R2_1=R2_1+movimiento_rey;}}


if(direccion_rey==2){

if(R2_2-movimiento_rey>=-4 && R2_2-movimiento_rey<=3){

R2_2=R2_2-movimiento_rey;}}


if(direccion_rey==3){
	
if(R2_2+movimiento_rey>=-4 && R2_2+movimiento_rey<=3){	

R2_2=R2_2+movimiento_rey;}}


if(direccion_rey==4){

if(R2_1+movimiento_rey>=0 && R2_1+movimiento_rey<=7 && R2_2-movimiento_rey>=-4 && R2_2-movimiento_rey<=3){
	
R2_1=R2_1+movimiento_rey;

R2_2=R2_2-movimiento_rey;}}


if(direccion_rey==5){

if(R2_1+movimiento_rey>=0 && R2_1+movimiento_rey<=7 && R2_2+movimiento_rey>=-4 && R2_2+movimiento_rey<=3){
	
R2_1=R2_1+movimiento_rey;

R2_2=R2_2+movimiento_rey;}}


if(direccion_rey==6){

if(R2_1-movimiento_rey>=0 && R2_1-movimiento_rey<=7 ){

R2_1=R2_1-movimiento_rey;}}


if(direccion_rey==7){

if(R2_1-movimiento_rey>=0 && R2_1-movimiento_rey<=7 && R2_2-movimiento_rey>=-4 && R2_2-movimiento_rey<=3){
	
R2_1=R2_1-movimiento_rey;

R2_2=R2_2-movimiento_rey;}}

if(direccion_rey==8){

if(R2_1-movimiento_rey>=0 && R2_1-movimiento_rey<=7 && R2_2+movimiento_rey>=-4 && R2_2+movimiento_rey<=3){
	
R2_1=R2_1-movimiento_rey;

R2_2=R2_2+movimiento_rey;}}	

turno++;	
}}
break;

}

system("cls");

}while(opc!=7);

return 0; 
}   

int validFormat(const char* tipo, void* validar)
{
b=1;//reseteamos la comprobacion de la opcion
//Si la función scanf retorna 0, fue porque hubo una falla en la lectura..
if(!scanf(tipo, validar))
{
//Limpiamos el búfer del teclado para que la próxima lectura se lleve a cabo.
clearBuf();
system("cls");
return 1;
}
//Si no encontramos un salto de línea en el búfer, es porque el usuario no cumplió con el formato.
if(getchar() != '\n')
{
//Volvemos a limpiar el búfer para la próxima lectura.
clearBuf();
system("cls");
return 1;
}
system("cls");
return 0;
}

void clearBuf()
{
    int ch;
    //Limpia el búfer del teclado hasta encontrar un salto de línea o fin del archivo
    while((ch = getchar()) != '\n' && ch != EOF);}
