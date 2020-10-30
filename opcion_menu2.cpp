int opcion_menu2(int op)
{
	char nick[10],word[20];
	switch(op)
	{
		case 1:
			//administrador
			programa_vec(op);

			break;
		case 2:
			//jugador
			nombre (nick);
			break;
	}
	return(op);
}
