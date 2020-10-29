int menu_principal()
{
	int opcion;
	printf("\n\n\n");
	printf ("\t\t\t\t _____                                                 _____ \n");
    printf ("\t\t\t\t( ___ )-----------------------------------------------( ___ ) \n");
    printf ("\t\t\t\t |   |                                                 |   | \n"); 
    printf ("\t\t\t\t |   |             ELIJA EL MODO DE JUEGO              |   | \n");
    printf ("\t\t\t\t |   |                                                 |   | \n");
    printf ("\t\t\t\t |   |                    1. VECTOR                    |   | \n");
    printf ("\t\t\t\t |   |                    2. MATRIZ                    |   | \n");
    printf ("\t\t\t\t |   |                    3. ARCHIVO                   |   | \n"); 
	printf ("\t\t\t\t |___|                                                 |___| \n");     
    printf ("\t\t\t\t(_____)-----------------------------------------------(_____)  \n"); 
    printf("\n\t\t\t\t\t");
    //validar opcion
	do
	{
		scanf("%d",&opcion);
		if((opcion<1)||(opcion>3))
			printf("\nError, introduzca otro valor.\n");
	}while((opcion<1)||(opcion>3));
	return(opcion);
	
	do
	{
		scanf("%d",&opcion);
		if((opcion<1)||(opcion>3))
			printf("\nError, introduzca otro valor.\n");
	}while((opcion<1)||(opcion>3));
	return(opcion);
}

