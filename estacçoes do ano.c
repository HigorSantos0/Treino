#include <stdio.h>

void main()
{
	int dia, mes;
	
	printf("Entre com o dia: ");
	scanf("%d", &dia);
	
	printf("entre com o mes: ");
	scanf("%d", &mes);
	
	
	if (mes == 1)
	{
		printf("Ver�o");
	}
	  sen�o
	  {
		if(mes == 2)
		{
			printf("Ver�o");
			
		}
		sen�o
		{
			if(mes==3)
			{
				if(dia<20)
				{
					printf("Verao");
				}
				sen�o
				{
					printf("outono");
				}
			}
			sen�o
			{
				if(mes==4)
				{
					printf("Outono");
				}
				sen�o
				{
					if(mes==5)
					{
						printf("Outono");
					}
					sen�o
					{
						if(mes==6)
						{
							if(dia<21)
							{
								printf("outono");
							}
							sen�o
							{
								printf("Inverno");
							}
						}
						
						sen�o
						{
							se (mes==7)
							{
								printf("inverno");
							}
							sen�o
							{
								if(mes==8)
								{
									printf("Inverno");
								}
								
								sen�o
								{
									if(mes==9)
									{
										if(dia<23)
										{
											printf("Inverno");
										}
										sen�o
										{
											printf("Primavera");
										}
										
									}
									if(mes==10)
									{
										printf("primavera");
									}
									sen�o
									{
										if(mes==11)
										{
											printf("Primavera");
										}
										sen�o
										{
											if(mes==12)
											{
												se (dia<21)
												{
													printf("primavera");
												}
												sen�o
												{
													printf("Verao");
												}
											}
										}
									}
								}
							}
						}
						
						
					}
				}
			}
			
			
			
			
		}
		
		
		
	  }
	
