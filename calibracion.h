# include <stdio.h>
#include <stdlib.h>

//int main () {
void CAL (void){ 
FILE *fp; //Descriptor de archivo.
char buffer_lectura[100];
//apertura del archivo
fp = fopen("/dev/usbtmc0", "w+");
if (fp == NULL){
printf("El archivo no abre\n");
exit(1);
}
// Escribiendo en el archivo
fprintf(fp, "*CAL?\n");
rewind(fp);
// Leyendo en el archivo
fscanf(fp, "%s", &buffer_lectura[100]);
fclose(fp);
printf("Se recibio %s\n", buffer_lectura);
//return 0;
}
void abortar (void){ 
FILE *fp; //Descriptor de archivo.
char buffer_lectura[100];
//apertura del archivo
fp = fopen("/dev/usbtmc0", "w+");
if (fp == NULL){
printf("El archivo no abre\n");
exit(1);
}
// Escribiendo en el archivo
fprintf(fp, "CALibrate:ABOrt\n");
rewind(fp);
// Leyendo en el archivo
fscanf(fp, "%s", &buffer_lectura[100]);
fclose(fp);
printf("Se recibio %s\n", buffer_lectura);

}

void interna (void){ 
FILE *fp; //Descriptor de archivo.
char buffer_lectura[100];
//apertura del archivo
fp = fopen("/dev/usbtmc0", "w+");
if (fp == NULL){
printf("El archivo no abre\n");
exit(1);
}
// Escribiendo en el archivo
fprintf(fp, "CALibrate:INTERNAL \n");
rewind(fp);
// Leyendo en el archivo
fscanf(fp, "%s", &buffer_lectura[100]);
fclose(fp);
printf("Se recibio %s\n", buffer_lectura);

}
void FACtory(void){ 
FILE *fp; //Descriptor de archivo.
char buffer_lectura[100];
//apertura del archivo
fp = fopen("/dev/usbtmc0", "w+");
if (fp == NULL){
printf("El archivo no abre\n");
exit(1);
}
// Escribiendo en el archivo
fprintf(fp, "CALibrate:FACtory \n");
rewind(fp);
// Leyendo en el archivo
fscanf(fp, "%s", &buffer_lectura[100]);
fclose(fp);
printf("Se recibio %s\n", buffer_lectura);

}
void CONTINUE(void){ 
FILE *fp; //Descriptor de archivo.
char buffer_lectura[100];
//apertura del archivo
fp = fopen("/dev/usbtmc0", "w+");
if (fp == NULL){
printf("El archivo no abre\n");
exit(1);
}
// Escribiendo en el archivo
fprintf(fp, "CALibrate:CONTINUE \n");
rewind(fp);
// Leyendo en el archivo
fscanf(fp, "%s", &buffer_lectura[100]);
fclose(fp);
printf("Se recibio %s\n", buffer_lectura);

}
void STATUS(void){ 
FILE *fp; //Descriptor de archivo.
char buffer_lectura[100];
//apertura del archivo
fp = fopen("/dev/usbtmc0", "w+");
if (fp == NULL){
printf("El archivo no abre\n");
exit(1);
}
// Escribiendo en el archivo
fprintf(fp, "CALibrate:STATUS?  \n");
rewind(fp);
// Leyendo en el archivo
fscanf(fp, "%s", &buffer_lectura[1]);
fclose(fp);
printf("Se recibio %s\n", buffer_lectura);

}
void RESUltFLAG(void){ 
FILE *fp; //Descriptor de archivo.
char buffer_lectura[100];
//apertura del archivo
fp = fopen("/dev/usbtmc0", "w+");
if (fp == NULL){
printf("El archivo no abre\n");
exit(1);
}
// Escribiendo en el archivo
fprintf(fp, "DIAg:RESUlt:FLAg?  \n");
rewind(fp);
// Leyendo en el archivo
fscanf(fp, "%s", &buffer_lectura[1]);
fclose(fp);
printf("Se recibio %s\n", buffer_lectura);

}
void RESUltLOG(void){ 
FILE *fp; //Descriptor de archivo.
char buffer_lectura[100];
//apertura del archivo
fp = fopen("/dev/usbtmc0", "w+");
if (fp == NULL){
printf("El archivo no abre\n");
exit(1);
}
// Escribiendo en el archivo
fprintf(fp, "DIAg:RESUlt:LOG? \n");
rewind(fp);
// Leyendo en el archivo
fscanf(fp, "%s", &buffer_lectura[1]);
fclose(fp);
printf("Se recibio %s\n", buffer_lectura);

}
void FIRST(void){ 
FILE *fp; //Descriptor de archivo.
char buffer_lectura[100];
//apertura del archivo
fp = fopen("/dev/usbtmc0", "w+");
if (fp == NULL){
printf("El archivo no abre\n");
exit(1);
}
// Escribiendo en el archivo
fprintf(fp, "ERRLOG:FIRST?  \n");
rewind(fp);
// Leyendo en el archivo
fscanf(fp, "%s", &buffer_lectura[1]);
fclose(fp);
printf("Se recibio %s\n", buffer_lectura);

}
void NEXT(void){ 
FILE *fp; //Descriptor de archivo.
char buffer_lectura[100];
//apertura del archivo
fp = fopen("/dev/usbtmc0", "w+");
if (fp == NULL){
printf("El archivo no abre\n");
exit(1);
}
// Escribiendo en el archivo
fprintf(fp, "ERRLOG:NEXT?   \n");
rewind(fp);
// Leyendo en el archivo
fscanf(fp, "%s", &buffer_lectura[1]);
fclose(fp);
printf("Se recibio %s\n", buffer_lectura);

}


