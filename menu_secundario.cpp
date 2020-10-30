int menu_secundario(char nombre[])
{
	int opcion;
	printf("\n\n\n");
	printf ("\t\t\t\t _____                                                 _____ \n");
    printf ("\t\t\t\t( ___ )-----------------------------------------------( ___ ) \n");
    printf ("\t\t\t\t |   |                                                 |   | \n"); 
    printf ("\t\t\t\t |   |           JUEGO EL AHORCADO   %s         |   | \n",nombre);
    printf ("\t\t\t\t |   |                                                 |   | \n");
    printf ("\t\t\t\t |   |                    1. ADMINISTRADOR             |   | \n");
    printf ("\t\t\t\t |   |                    2. JUGADOR                   |   | \n"); 
	printf ("\t\t\t\t |___|                                                 |___| \n");     
    printf ("\t\t\t\t(_____)-----------------------------------------------(_____)  \n"); 
    printf("\n\t\t\t\t\t");
    //validar opcion
	do
	{
		scanf("%d",&opcion);
		if((opcion<1)||(opcion>2))
			printf("\nError, introduzca otro valor.\n");
	}while((opcion<1)||(opcion>2));
	return(opcion);

	//validar opcion
	do
	{
		scanf("%d",&opcion);
		if((opcion<1)||(opcion>2))
			printf("\nError, introduzca otro valor.\n");
	}while((opcion<1)||(opcion>2));
	return(opcion);

}

