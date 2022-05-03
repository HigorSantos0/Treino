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
		printf("Verão");
	}
	  senão
	  {
		if(mes == 2)
		{
			printf("Verão");
			
		}
		senão
		{
			if(mes==3)
			{
				if(dia<20)
				{
					printf("Verao");
				}
				senão
				{
					printf("outono");
				}
			}
			senão
			{
				if(mes==4)
				{
					printf("Outono");
				}
				senão
				{
					if(mes==5)
					{
						printf("Outono");
					}
					senão
					{
						if(mes==6)
						{
							if(dia<21)
							{
								printf("outono");
							}
							senão
							{
								printf("Inverno");
							}
						}
						
						senão
						{
							se (mes==7)
							{
								printf("inverno");
							}
							senão
							{
								if(mes==8)
								{
									printf("Inverno");
								}
								
								senão
								{
									if(mes==9)
									{
										if(dia<23)
										{
											printf("Inverno");
										}
										senão
										{
											printf("Primavera");
										}
										
									}
									if(mes==10)
									{
										printf("primavera");
									}
									senão
									{
										if(mes==11)
										{
											printf("Primavera");
										}
										senão
										{
											if(mes==12)
											{
												se (dia<21)
												{
													printf("primavera");
												}
												senão
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
	
