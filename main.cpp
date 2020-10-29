//Programa principal
main()
{
	int op,elec;
	op=menu_principal();
	switch(op)
	{
		case 1:
			op=menu_secundario(" VECTOR ");
			elec=opcion_menu2(op);
			programa_vec(elec);
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

