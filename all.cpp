//Implementar funciones
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
	return(opcion);
}
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
}

