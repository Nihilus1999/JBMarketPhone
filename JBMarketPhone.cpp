/*JB Marketphone (Tienda Virtual) Integrantes: Jose El Asmar y Branyeli Villasmil*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <windows.h>

FILE *user;

int apple(int x){//catalogo de celulares de apple
	int iphone, precio = 0, total = 0, acum=0, dispon = 1, compra;//definicion de variables enteras
	char color[20], almac[20];//definicion de variables con caracteres
	do{
	menu://decision de celulares de apple
	printf("\n\nUsted desea comprar un celular de Apple, escoge el modelo o version del iphone:\n\n");
	printf("1. Iphone SE:\n");
	printf("2. Iphone 6:\n");
	printf("3. Iphone 7:\n");
	printf("4. Iphone 8:\n ");
	printf("5. Iphone X:\n ");
	printf("6. Regresar al menu principal\n\n");
	printf("Escoga el Iphone que desea: ");
	scanf("%i",&iphone);
	system("cls");
	switch(iphone){
		case 1:
			printf("\nUsted ha escogido el iphone SE, que color desea?(oro,blanco,negro,rosa): ");
			scanf("%s",&color);
			fflush(stdin);
			printf("\nQue almacenamiento desea comprar?(32GB o 64GB): ");
			scanf("%s",&almac);
			fflush(stdin);
			printf("\n\nSu iphone es: iphone SE, de color %s, con almacenamiento de %s, en total es: 399$.\n\n",color,almac);
			precio = 399;
			printf("Desea comprar algo mas?\n\n");
			printf("1. Si\n");
			printf("2. No\n\n");
			printf("Introduzca una opcion: ");
			scanf("%i",&compra);
			system("cls");
			switch(compra){
				case 1://opcion de comprar otro celular dentro del mismo catalogo
				acum = precio + acum;
				goto menu;
				case 2:	//regresa a la funcion principal, retornando el precio de celular escogido
				total = precio + acum;
				printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
				return total;		 
				}
		case 2:
			printf("\nUsted ha escogido el iphone 6, que color desea?(oro,plata,rosa): ");
			scanf("%s",&color);
			fflush(stdin);
			printf("\nQue almacenamiento desea comprar?(32GB o 128GB): ");
			scanf("%s",&almac);
			fflush(stdin);
			printf("\n\nSu iphone es: iphone 6, de color %s, con almacenamiento de %s, en total es: 459$.\n\n",color,almac);
			precio = 459;
			printf("Desea comprar algo mas?\n\n");
			printf("1. Si\n");
			printf("2. No\n\n");
			printf("Introduzca una opcion: ");
			scanf("%i",&compra);
			system("cls");
			switch(compra){
				case 1:
				acum = acum + precio;
				goto menu;
				case 2:	
				total = precio + acum;
				printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
				return total;			 
				}
		case 3:
			printf("\nUsted ha escogido el iphone 7, que color desea?(oro,blanco,negro,rosa): ");
			scanf("%s",&color);
			fflush(stdin);
			printf("\nQue almacenamiento desea comprar?(32GB o 64GB): ");
			scanf("%s",&almac);
			fflush(stdin);
			printf("\n\nSu iphone es: iphone 7, de color %s, con almacenamiento de %s, en total es: 699$.\n\n",color,almac);
			precio = 699;
			printf("Desea comprar algo mas?\n\n");
			printf("1. Si\n");
			printf("2. No\n\n");
			printf("Introduzca una opcion: ");
			scanf("%i",&compra);
			system("cls");
			switch(compra){
				case 1:
				acum= precio + acum;
				goto menu;
				case 2:	
				total = precio+ acum;
				printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
				return total;			 
				}
		case 4:
			printf("\nUsted ha escogido el iphone 8, que color desea?(oro,plata,negro,rosa): ");
			scanf("%s",&color);
			fflush(stdin);
			printf("\nQue almacenamiento desea comprar?(64GB o 128GB): ");
			scanf("%s",&almac);
			fflush(stdin);
			printf("\n\nSu iphone es: iphone 8, de color %s, con almacenamiento de %s, en total es: 799$.\n\n",color,almac);
			precio = 799;
			printf("Desea comprar algo mas?\n\n");
			printf("1. Si\n");
			printf("2. No\n\n");
			printf("Introduzca una opcion: ");
			scanf("%i",&compra);
			system("cls");
			switch(compra){
				case 1:
				acum= precio + acum;
				goto menu;
				case 2:	
				total = precio + acum;
				printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
				return total;			 
				}
		case 5:
			printf("\nUsted ha escogido el iphone X, que color desea?(negro,plata): ");
			scanf("%s",&color);
			fflush(stdin);
			printf("\nQue almacenamiento desea comprar?(64GB o 256GB): ");
			scanf("%s",&almac);
			fflush(stdin);
			printf("\n\nSu iphone es: iphone X, de color %s, con almacenamiento de %s, en total es: 999$.\n\n",color,almac);
			precio = 999;
			printf("Desea comprar algo mas?\n\n");
			printf("1. Si\n");
			printf("2. No\n\n");
			printf("Introduzca una opcion:");
			scanf("%i",&compra);
			system("cls");
			switch(compra){
				case 1:
				acum = precio + acum;
				goto menu;
				case 2:	
				total = precio + acum;
				printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
				return total;			 
				}
		case 6:
			break;	
	}	
} while(compra == 1);
}

int samsung(int y){//catalogo de los celulares de samsung
	int samsung, gamaS, gamaJ, gamaA, precio, total, acum = 0, compra;// definicion de variables enteras
	char color[20];//definicion de variables con caracteres
	do{
	menu://decision de los celulares de samsung
	printf("\n\nUsted desea comprar un celular de la marca Samsung, escoga la gama:\n\n");
	printf("1. Gama S:\n");
	printf("2. Gama J:\n");
	printf("3. Gama A:\n");
	printf("4. Regresar al menu principal:\n");
	printf("Introduzca una opcion:");
	scanf("%i",&samsung);
	system("cls");
	switch(samsung){
		case 1:/// parte de la gama S
			printf("\n\nUsted desea comprar un celular de Samsung de la gama S, escoga los productos que desea:\n\n");
			printf("1. Samsung S4:\n");
			printf("2. Samsung S5:\n");
			printf("3. Samsung S6:\n");
			printf("4. Samsung S7:\n");
			printf("5. Samsung S8:\n");
			printf("6. Regresar a la menu principal:\n");
			printf("\nIntroduzca una opcion:");
			scanf("%i",&gamaS);
			system("cls");
			switch(gamaS){
				case 1:
					printf("\nUsted ha escogido el Samsung S4, que color desea?(blanco,negro,azul): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung S4, de color %s, el total es: 138$.\n\n",color);
					precio = 138;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1://regresar al catalogo de samsung
						acum = precio + acum;
						goto menu;
						case 2:	//regresar a la funcion principal retornando un valor
						total = precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;		 
						}
					case 2:
					printf("\nUsted ha escogido el Samsung S5, que color desea?(blanco,negro,oro): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung S5, de color %s, el total es: 204$.\n\n",color);
					precio = 204;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum= precio + acum;
						goto menu;
						case 2:	
						total= precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}
					case 3:
					printf("\nUsted ha escogido el Samsung S6, que color desea?(blanco,negro,oro): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung S6, de color %s, el total es: 279$.\n\n",color);
					precio = 279;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum= precio + acum;
						goto menu;
						case 2:	
						total = precio + acum;
					    printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}
					case 4:
					printf("\nUsted ha escogido el Samsung S7, que color desea?(plata,negro,oro): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung S7, de color %s, el total es: 460$.\n\n",color);
					precio = 460;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum= precio + acum;
						goto menu;
						case 2:	
						total = precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}
					case 5:
					printf("\nUsted ha escogido el Samsung S8, que color desea?(negro): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung S8, de color %s, el total es: 809$.\n\n",color);
					precio = 809;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum= precio + acum;
						goto menu;
						case 2:	
						total = precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}
					case 6:
						return total;
			}	
		case 2://catalogo de la Gama J
			printf("\n\nUsted desea comprar un celular de Samsungn de la gama J, escoga los productos que desea:\n\n");
			printf("1. Samsung J3:\n");
			printf("2. Samsung J5:\n");
			printf("3. Samsung J7:\n");
			printf("4. Regresar a la menu principal:\n");
			printf("Introduzca una opcion:");
			scanf("%i",&samsung);
			system("cls");
			switch(samsung){
				case 1:
					printf("\nUsted ha escogido el Samsung J3, que color desea?(blanco,negro,oro): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung J3, de color %s, el total es: 130$.\n\n",color);
					precio = 130;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum = precio + acum;
						goto menu;
						case 2:	
						total = precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}
					case 2:
					printf("\nUsted ha escogido el Samsung J5, que color desea?(blanco,negro,oro): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung J5, de color %s, el total es: 220$.\n\n",color);
					precio = 220;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum= precio + acum;
						goto menu;
						case 2:	
						total = precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}
					case 3:
					printf("\nUsted ha escogido el Samsung J7, que color desea?(blanco,negro,oro): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung J7, de color %s, el total es: 260$.\n\n",color);
					precio = 260;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum= precio + acum;
						goto menu;
						case 2:	
						total = precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}	
		           case 4:
						return total;
			}
		case 3://catalogo de la gama A
			printf("\n\nUsted desea comprar un celular de Samsung de la gama A, escoga los productos que desea:\n\n");
			printf("1. Samsung A3:\n");
			printf("2. Samsung A5:\n");
			printf("3. Samsung A7:\n");
			printf("4. Samsung A8:\n");
			printf("5. Samsung A9:\n");
			printf("6. Regresar a la menu principal:\n");
			printf("Introduzca una opcion:");
			scanf("%i",&gamaA);
			system("cls");
			switch(gamaA){
				case 1:
					printf("\nUsted ha escogido el Samsung A3, que color desea?(blanco,negro,azul): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung A3, de color %s, el total es: 138$.\n\n",color);
					precio = 138;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum = precio + acum;
						goto menu;
						case 2:	
						total= precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}
					case 2:
					printf("\nUsted ha escogido el Samsung A5, que color desea?(blanco,negro,oro): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung A5, de color %s, el total es: 204$.\n\n",color);
					precio = 204;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum = precio + acum;
						goto menu;
						case 2:	
						total = precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}
					case 3:
					printf("\nUsted ha escogido el Samsung A7, que color desea?(blanco,negro,oro): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung A7, de color %s, el total es: 279$.\n\n",color);
					precio = 279;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum= precio + acum;
						goto menu;
						case 2:	
						total = precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}
					case 4:
					printf("\nUsted ha escogido el Samsung A8, que color desea?(plata,negro,oro): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung A8, de color %s, el total es: 460$.\n\n",color);
					precio = 460;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum= precio + acum;
						goto menu;
						case 2:	
						total = precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}
					case 5:
					printf("\nUsted ha escogido el Samsung A9, que color desea?(negro): ");
					scanf("%s",&color);
					fflush(stdin);
					printf("\n\nSu samsung es: Samsung A9, de color %s, el total es: 809$.\n\n",color);
					precio = 809;
					printf("Desea comprar algo mas de la gama de samsung?\n\n");
					printf("1. Si\n");
					printf("2. No\n\n");
					printf("Introduzca una opcion:");
					scanf("%i",&compra);
					system("cls");
					switch(compra){
						case 1:
						acum= precio + acum;
						goto menu;
						case 2:	
						total = precio + acum;
						printf("El pedido se ha hecho satifactoriamente, vaya a la opcion `pagar` para terminar el proceso, en total es: %i$\n", total);
						return total;			 
						}
					case 6:
						return total;
			  }
			case 4:
				return total;
			} 
		} while(compra == 1);
}

int depositar(int z1){//funcion para depositar dinero a la cuenta
	int op, money,total;
	char name[20], bank[20], CI[20];
			printf("\nResponda el siguiente cuestionario para seguir:\n\n" );
			printf("Nombre de la persona: ");
			scanf("%s",&name);
			printf("Cedula de identificacion: ");
			scanf("%s",&CI);
			printf("Banco en donde proviene el dinero: ");
			scanf("%s",&bank);
			system("cls");
			printf("***********DATOS*********\n\n");
			printf("Nombre: %s\n",name);
			printf("Cedula de identidad: %s\n",CI);
			printf("Banco: %s\n\n",bank);
			printf("Introduzca el monto que desea agregar: ");
			scanf("%i",&money);
			total = money;
			return total;//retorna el dinero depositado
}

int retirar(int z2){//funcion para retirar dinero de la cuenta
	int op, money,total;
	char name[20], bank[20], CI[20];
			printf("\nResponda el siguiente cuestionario para proseguir:\n\n" );
			printf("Nombre de la persona: ");
			scanf("%s",&name);
			printf("Cedula de identificacion: ");
			scanf("%s",&CI);
			printf("Banco en donde proviene el dinero: ");
			scanf("%s",&bank);
			system("cls");
			printf("***********DATOS*********\n\n");
			printf("Nombre: %s\n",name);
			printf("Cedula de identidad: %s\n",CI);
			printf("Banco: %s\n\n",bank);
			printf("Introduzca el monto que desea retirar: ");
			scanf("%i",&total);
			return total;//retorna el dinero sacado de la cuenta
}

void nuevo(int x){

int clave,dinero; //definicion de variables enteras
char archivo[1000],correo[100],nombre[100],apellido[100],pais[100],estado[100],municipio[100],sexo[100],tele[100];//definicion de variables con caracteeres
printf("Introduzca el nombre o indentificador del archivo:\n\n ");
scanf("%s",&archivo);
printf("\nNOTA: Recuerde su identificacion para iniciar sesion....");
Sleep(2000);
user = fopen(("%s",archivo),"w");// Abrir un nuevo archivo con sus datos correspondientes

	printf("\n\nIntroduzca su clave(solo se puede numeros e iniciar diferente de cero): ");//impresion en la pantalla negra
	scanf("%i",&clave);
	printf("\nIntroduzca su dinero inicial: ");
	scanf("%i",&dinero);
	system("cls");
	printf("*********DATOS ADICIONALES***********\n\n");
	printf("Introduzca su correo: ");
	scanf("%s",&correo);
	printf("\nIntroduzca su nombre y apellido: ");
	scanf("%s""%s",&nombre,&apellido);
	printf("\nDireccion:\n\n");
	printf("Pais (una palabra): ");
	scanf("%s",&pais);
	printf("Estado (una palabra): " );
	scanf("%s",&estado);
	printf("Municipio (una palabra): ");
	scanf("%s",&municipio);
	printf("\nSexo(M/F): "),
	scanf("%s",&sexo);
	printf("\nTelefono: ");
	scanf("%s",&tele);
	Sleep(2000);
	system("cls");
	printf("\n\nSe ha realizado el proceso de forma exitosa\n\n");
	Sleep(3000);
	system("cls");
	
	fprintf(user,"Dinero: "); // Impresion de los datos en el documento escrito
	fprintf(user,"%i$\n\n",dinero);
	fprintf(user,"***********DATOS DEL USUARIO*************\n\n");
	fprintf(user,"Clave: ");
	fprintf(user,"%i\n",clave);
	fprintf(user,"Correo: ");
	fprintf(user,"%s\n",correo);
	fprintf(user,"Nombre y apellido: ");
	fprintf(user,"%s %s\n",nombre,apellido);
	fprintf(user,"\nDireccion:\n\n");
	fprintf(user,"Pais: ");
	fprintf(user,"%s\n",pais);
	fprintf(user,"Estado: ");
	fprintf(user,"%s\n",estado);
	fprintf(user,"Municipio: ");
	fprintf(user,"%s\n\n",municipio);
	fprintf(user,"Sexo: ");
	fprintf(user,"%s\n",sexo);
	fprintf(user,"Telefono: ");
	fprintf(user,"%s\n\n",tele);
	fprintf(user,"**********MOVIMIENTO***********\n\n");
	fclose(user);
}

void remov(int y){
	char archivo[1000],a[100],k[100],dinero[100],titulo1[100],titulo2[100],titulo3[100],clave[100];//definicion de variables con caracteres
	char *c; //variables para el uso del atoi
	int eliminacion,delet;//definicion de variables enteras
	printf("Introduzca el nombre o identificador que desea eliminar:\n\n ");
	scanf("%s",&archivo);
	user = fopen(("%s",archivo),"r");//abrir el archivo en modo lectura(r)
	if(user == NULL){
		system("cls");
		printf("No se pudo encontrar el archivo\n\n");
		system("pause");
		system("cls");
	}else{
	fscanf(user,"%s""%s",k,dinero);
	fscanf(user,"%s""%s""%s",titulo1,titulo2,titulo3);
	fscanf(user, "%s""%s",a,clave);
	c = ("%s",clave);
	delet = atoi(c);
	system("cls");
	printf("Introduzca la contrase%ca del archivo: ",164);
	scanf("%i",&eliminacion);
	if(eliminacion == delet){//comparacion de contrase�a
		fclose(user);
		remove(("%s",archivo)); //funcion de eliminar
		system("cls");
		printf("El archivo se elimino correctamente\n\n");
		system("pause");
		system("cls");
	}else{
		system("cls");
		printf("La contrase%ca es invalida, volvera al menu\n\n",164);
		Sleep(2000);
		system("cls");
	}
}
}

void edit(int z){
	
	int edit,clave;//definicion de variables enteras
	char archivo[1000],correo[100],nombre[100],apellido[100],pais[100],estado[100],municipio[100],sexo[100],tele[100];//definicion de variables con caracteres
			printf("\n\nIntroduzca su nueva clave (solo se puede numeros e iniciar diferente de cero): ");//cambio de datos a paritr de la clave
			scanf("%i",&clave);
			printf("\n\n*********DATOS ADICIONALES***********\n\n");
			printf("Introduzca su correo: ");
			scanf("%s",&correo);
			printf("\nIntroduzca su nombre y apellido: ");
			scanf("%s""%s",&nombre,&apellido);
			printf("\nDireccion:\n\n");
			printf("Pais: ");
			scanf("%s",&pais);
			printf("Estado: " );
			scanf("%s",&estado);
			printf("Municipio: ");
			scanf("%s",&municipio);
			printf("\nSexo(M/F): "),
			scanf("%s",&sexo);
			printf("\nTelefono: ");
			scanf("%s",tele);
			Sleep(2000);
			system("cls");
			printf("\n\nSe ha realizado el proceso de forma exitosa\n\n");
			Sleep(3000);
			system("cls");
			
			fprintf(user,"***********DATOS DEL USUARIO*************\n\n");//impresion de los nuevos datos
			fprintf(user,"Clave: ");
			fprintf(user,"%i\n",clave);
			fprintf(user,"Correo: ");
			fprintf(user,"%s\n",correo);
			fprintf(user,"Nombre y apellido: ");
			fprintf(user,"%s %s\n",nombre,apellido);
			fprintf(user,"\nDireccion:\n\n");
			fprintf(user,"Pais: ");
			fprintf(user,"%s\n",pais);
			fprintf(user,"Estado: ");
			fprintf(user,"%s\n",estado);
			fprintf(user,"Municipio: ");
			fprintf(user,"%s\n\n",municipio);
			fprintf(user,"Sexo: ");
			fprintf(user,"%s\n",sexo);
			fprintf(user,"Telefono: ");
			fprintf(user,"%s\n\n",tele);
			fprintf(user,"**********MOVIMIENTO***********\n\n");
			fclose(user);
		    system("cls");
	}
	
int main(){
	int lg,op,x,y,z,inicio,money,money1,passwork,editar,celular,precioA=0,precioS=0,a,b,e,f,sal = 1000,final,totalP,total;//variables enteras
	char archivo[1000],usuar[100],clave[100],j[100],k[100],titulo1[100],titulo2[100],titulo3[100],dinero[100];//variable de inicio de sesion y lector de datos
	char *c,*d,*tiempo;
	char name[20], lastname[20], calle1[20], calle2[20], municipio[20], estado[20], pais[20];//variables de la compra(case3)
	int contador=2, ingresa, fals;//variables del contador
	do{
	menu:
	printf("**********JBMARKETPHONE**********\n");//menu principal
	printf("VERSION 1.1\n\n");
	printf("1. Iniciar sesion\n");
	printf("2. Crear nueva cuenta\n");
	printf("3. Eliminar una cuenta\n");
	printf("4. Salir del programa\n");
	printf("\n\n\nSi quieres saber informacion sobre la version 1.1 pulse la opcion 0");
	printf("\n\nIntroduzca una opcion: ");
	scanf("%i",&op);
	system("cls");
	switch(op){	
		case 0:
			printf("***********INFORMACION DE LA VERSION 1.1************\n\n");
			printf("1. Se ha cambiando algunos textos inecesarios en el programa, especificamente en el apartado de 'pagar celulares'\n");
			printf("2. Se ha agregado la funcion de visualizar la informacion de cada version de nuestro programa en el menu principal\n");
			printf("3. Se agrego en el movimiento la fecha exacta de los movimientos, para los casos de 'pagar celulares','retiro' y 'depositar'\n");
			printf("4. Se arreglaron algunos bugs a la hora de imprimir los caracteres en un archivo comun\n\n");
			system("pause");
			system("cls");
			goto menu;
		case 1://inicio de sesion, comparando clave y leyendo datos del documento existente
		do{
		login:
		printf("**************LOGIN**************\n\n");
	 	printf("1. Introduzca el nombre o identificador del archivo: \n");
        printf("2. salir\n\n");
        printf("Seleccione una Opcion: ");
        scanf("%i",&lg);
        switch (lg){
            case 1:
            goto archivo;
            case 2:
            system("cls");
            goto menu;
           
        }
        archivo:
	 	scanf("%s",&archivo);
	 	user = fopen(("%s",archivo), "r" );
	 	if(user == NULL){
	 		system("cls");
	 		printf("\n\nNo existe el identificador\n");
	 		Sleep(2000);
	 		system("cls");
	 		goto login;
	 	}
		 else{
		fscanf(user,"%s""%s",k,dinero);
		fscanf(user,"%s""%s""%s",titulo1,titulo2,titulo3);
	 	fscanf(user, "%s""%s",j,clave);
	 	c = ("%s",clave);
	 	inicio = atoi(c);
	 	
		printf("\nClave: ");
		scanf("%i",&passwork);
		
		if(passwork==inicio){
			system("cls");//Menu principal de la tienda
			    menu1:
				printf("\n\nBienvenido %s a nuestra tienda virtual de celulares moviles, nuestro catalogo es el siguiente:\n\n ",archivo);	
				printf("Nuestra tienda ofrece estos dos tipos de marca: \n\n");
				printf("1. Apple Iphone\n");
				printf("2. Samsung Galaxys\n");
				printf("3. Pagar celulares\n");
				printf("4. Consulta de saldo\n");
				printf("5. Ver y editar usuario\n");
				printf("6. Cerrar sesion\n\n");
				printf("�Que opcion desea seleccionar?:");
				scanf("%i",&celular);
				system("cls");
				switch(celular){
					case 1://opcion que permite comprar y escoger celulares de apple y contador de precio
						precioA = precioA + apple(a);
						goto menu1;
						break;		
					case 2://opcion que permite comprar y escoger celulares de apple y contador de precio
						precioS = precioS + samsung(b);
						goto menu1;
						break;
					case 3://opcion que permite pagar celulares y registrar su movimiento
						do{
						user = fopen(("%s",archivo),"r+");
	 					fscanf(user,"%s""%s",k,dinero);
	 					d = ("%s",dinero);
	 					money1 = atoi(d);
						printf("******Registro de compra********\n\n");
						printf("El precio de los celulares de Apple acumulado es: %i$\n", precioA);
						printf("El precio de los celulares de Samsung acumulado es: %i$\n\n", precioS);
						totalP = precioA + precioS;
						printf("En total a pagar por el/los celulares es: %i$\n\n",totalP);
						printf("Usted tiene en la cuenta %i$, desea continuar?\n\n",money1);
						printf("1. Si\n");
						printf("2. No\n\n");
						printf("Introduzca una opcion: ");
						scanf("%i",&op);
						system("cls");
						switch(op){
							case 1:
						if(money1>=totalP){
							user = fopen(("%s",archivo),"r+");
							time_t   t,i;
							i = time(&t);
							tiempo = ctime (&i);
							printf("Introduzca los datos de entrega del producto:\n\n ");
							printf("Introduzca su nombre y apellido: ");
							scanf("%s" "%s",&name, &lastname);
							printf("Introduzca el Pais (una sola palabra): ");
							scanf("%s",&pais);
							printf("Introduzca el Estado (una sola palabra): ");
							scanf("%s",&estado);
							printf("Introduzca el Municipio (una sola palabra): ");
							scanf("%s",&municipio);
							printf("Introduzca la Calle (dos palabras): ");
							scanf("%s" "%s",&calle1, &calle2);
							money = money1 - totalP;
							printf("\n\nLa compra se ha hecho satisfacoriamente, usted le queda en la cuenta %i$, presione ENTER para ver facutra\n\n",money);
							system("pause");
							system("cls");
							printf("***********FACTURA Y DATOS***********\n\n");
							printf("Compra hecha en la tienda JBmarketphone\n");
							printf("Direccion: Universidad Catolica Andres Bello\n");
							printf("fecha: %s",tiempo);
							printf("Tipo de pago: virtual\n");
							printf("Nombre completo de la persona: %s %s\n ",name,lastname);
							printf("Direccion: Calle %s %s,Municipio %s, Estado %s, Pais %s\n\n",calle1,calle2,municipio,estado,pais);
							printf("Total de la compra: %i$\n",totalP);
							printf("Gasto de la cuenta: %i - %i\n",money1,totalP);
							printf("Total en la cuenta: %i$\n\n",money);
							printf("Que disfrute su compra\n\n");
							system("pause");
							system("cls");
							fprintf(user,"Dinero: ");
							fprintf(user,"%i$\n\n",money);
							fclose(user);
							user = fopen(("%s",archivo),"a");
							fprintf(user,"Usted ha comprado celulares por: %i$   %s\n",totalP,tiempo);
							fclose(user);
							precioA = 0;
							precioS = 0;
							goto menu1;
							break;
						}else{
							printf("********ERROR********\n\n");
							printf("Monto insuficiente, vuelva a realizar la compra.\n\n");
							system("pause");
							system("cls");
							goto menu1;
						}
						break;
						case 2:
							printf("Cancelando el pedido....");
							Sleep(2000);
							system("cls");
							goto menu1;
							break;
					}
				}while(op != 2);
				break;
					case 4://opcion para retirar y depositar dinero a la cuenta
						do{
						user = fopen(("%s",archivo),"r");
						fscanf(user,"%s""%s",k,dinero);
	 				    d = ("%s",dinero);
	 					money = atoi(d);
	 					menu2:
						printf("********REGISTRO DE DINERO**********\n\n");
						printf("Usted tiene en la cuenta %i$, que desea hacer?\n\n ",money);
						printf("1. Depositar dinero\n");
						printf("2. Retirar dinero de la cuenta\n");
						printf("3. Regresar al menu principal\n\n");
						printf("Introduzca una opcion: ");
						scanf("%i",&op);
						system("cls");
						switch(op){
							case 1://opcion depositar
								user = fopen(("%s",archivo),"r+");
								total = depositar(e);
								money = money + total;
								printf("\n\n Su proceso se ha hecho satisfactoriamente, usted tiene: %i$\n\n",money);
								system("pause");
								fprintf(user,"Dinero: ");
							    fprintf(user,"%i$\n\n",money);
							    fclose(user);
							    user = fopen(("%s",archivo),"a");
							    time_t   t,i;
							    i = time(&t);
								tiempo = ctime (&i);
							    fprintf(user,"Usted ha depositado %i$, tiene en total %i$   %s\n",total,money,tiempo);
							    fclose(user);
							    system("cls");
								break;
							case 2://opcion retirar
								user = fopen(("%s",archivo),"r+");
								total = retirar(f);
								money = money - total;
								if(money<total){
									printf("Monto invalido");
									Sleep(3000);
									goto menu2;
									system("cls");
								}else{
								printf("\n\n Su proceso se ha hecho satisfactoriamente, usted tiene: %i$\n\n",money);
								system("pause");
								fprintf(user,"Dinero: ");
							    fprintf(user,"%i\n\n",money);
							    fclose(user);
							    user = fopen(("%s",archivo),"a");
							    time_t   t,i;
							    i = time(&t);
								tiempo = ctime (&i);
							    fprintf(user,"Usted ha retirado %i$, tiene en total %i$   %s\n",total,money,tiempo);
							    fclose(user);
							    system("cls");
							    }
							    break;
							case 3:
								break;
									}
							} while(op =! 3);
							 goto menu1;
							break;
					case 5://opcion que permite visualizar los datos completos del documento
						user = fopen(("%s",archivo),"r");
						while ((editar = fgetc(user)) != EOF){
							putchar(editar);
						}
						system("pause");
						printf("\n\nQue desea hacer?:\n\n ");
						printf("1. Editar cuenta\n");
						printf("2. Ir al menu\n\n");
						printf("NOTA: El registro de compra se borrara si edita el usuario, debido a cuestiones de seguridad.\n\n");
						printf("Introduzca una opcion:\n\n ");
						scanf("%i",&op);
						system("cls");
						switch(op){
							case 1://edicion de la cuenta, utiliza la funcion "edit"
							fscanf(user,"%s""%s",k,dinero);
	 				     	d = ("%s",dinero);
	 					    money = atoi(d);
							user = fopen(("%s",archivo),"w");
							fprintf(user,"Dinero: %i$\n\n",money);
							fclose(user);
							user = fopen(("%s",archivo),"a");
							edit(z);
							fclose(user);
							goto menu1;
							break;
							case 2:	
							goto menu1;
							break;	
						}
						goto menu1;
						break;
					case 6:
						goto menu;
						fclose(user);
					break;
				}
		}else{
			system("cls");
			if(contador == 0){
				break;
			}else{
			printf("\nClave incorrecta. A usted le quedan %i\n\n",contador);//contador que permite visualizar la cantidad de oportunidades para iniciar sesion
			system("pause");
			system("cls");
			ingresa = fals;
			contador--;
				}
			}
		}
	} while(ingresa == fals || contador == 0);
		printf("Por cuestiones de seguridad, su cuenta ha sido cerrada, volvera al menu principal\n\n");
		Sleep(5000);
		system("cls");
	 	break;
		case 2:
			nuevo(x);
			goto menu;
			break;
		case 3:
			remov(y);
			break;
		case 4:
			break;
	}
} while(op != 4);
printf("\nGracias por visitarnos\n\n");
Sleep(3000);
return 0;
}
