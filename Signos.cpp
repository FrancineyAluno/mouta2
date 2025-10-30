
#include<stdio.h>
#include<stdlib.h>

	main(){
		
		int dia,mes,opcao;
		
		printf("digite o dia que vc nasceu\n");
		scanf("%d",&dia);
		printf("diga o mes do seu nascimento com seu respectivo numero\n");
		scanf("%d",&mes);
		if(dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12){
			if((dia>=21 && dia<=31 && mes==3) || (dia>=1 && dia<=20 && mes==4)){
				printf("Signo de Aries\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro Mu");
				break;
				case 2:
					printf("Cavaleiro Shion");
				break;
				case 3:
					printf("Cavaleiro Kiki");
				break;
				case 4:
					printf("Cavaleiro Shion");
				break;
				}
			}else if((dia>=21 && dia<=30 && mes==4) || (dia>=1 && dia<=20 && mes==5)){
				printf("Signo de Touro\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro Aldebaran");
				break;
				case 2:
					printf("Cavaleiro Hasgard");
				break;
				case 3:
					printf("Cavaleiro Haebigner");
				break;
				case 4:
					printf("Cavaleiro Ox");
				break;
				}
			}else if((dia>=21 && dia<=31 && mes==5) || (dia>=1 && dia<=20 && mes==6)){
				printf("Signo de Gemeos\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro Saga");
				break;
				case 2:
					printf("Cavaleiro Defteros");
				break;
				case 3:
					printf("Cavaleiro Paradox");
				break;
				case 4:
					printf("Cavaleiro Kain");
				break;
				}
			}else if((dia>=21 && dia<=30 && mes==6) || (dia>=1 && dia<=22 && mes==7)){
				printf("Signo de Cancer\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro Mascara da Morte");
				break;
				case 2:
					printf("Cavaleiro Manigold");
				break;
				case 3:
					printf("Cavaleiro Schiller");
				break;
				case 4:
					printf("Cavaleiro Contador da Morte");
				break;
				}
			}else if((dia>=23 && dia<=31 && mes==7) || (dia>=1 && dia<=22 && mes==8)){
				printf("Signo de Leao\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro Aioria");
				break;
				case 2:
					printf("Cavaleiro Regulus");
				break;
				case 3:
					printf("Cavaleiro Micenas");
				break;
				case 4:
					printf("Cavaleiro Kaiser");
				break;
				}
			}else if((dia>=23 && dia<=31 && mes==8) || (dia>=1 && dia<=22 && mes==9)){
				printf("Signo de Virgem\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro Shaka");
				break;
				case 2:
					printf("Cavaleiro Asmita");
				break;
				case 3:
					printf("Cavaleiro Fudou");
				break;
				case 4:
					printf("Cavaleiro Shijima");
				break;
				}
			}else if((dia>=23 && dia<=30 && mes==9) || (dia>=1 && dia<=22 && mes==10)){
				printf("Signo de Libra\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro Dohko");
				break;
				case 2:
					printf("Cavaleiro Dohko");
				break;
				case 3:
					printf("Cavaleiro Genbu");
				break;
				case 4:
					printf("Cavaleiro Dohko");
				break;
				}
			}else if((dia>=23 && dia<=31 && mes==10) || (dia>=1 && dia<=21 && mes==11)){
				printf("Signo de Escorpiao\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro milo");
				break;
				case 2:
					printf("Cavaleiro Kardia");
				break;
				case 3:
					printf("Cavaleiro Sonia");
				break;
				case 4:
					printf("Cavaleiro Ecalarte");
				break;
				}
			}else if((dia>=22 && dia<=30 && mes==11) || (dia>=1 && dia<=21 && mes==12)){
				printf("Signo de Sagitario\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro Aiolos");
				break;
				case 2:
					printf("Cavaleiro Sisifo");
				break;
				case 3:
					printf("Cavaleiro Seiya");
				break;
				case 4:
					printf("Cavaleiro Gestalt");
				break;
				}
			}else if((dia>=22 && dia<=31 && mes==12) || (dia>=1 && dia<=20 && mes==1)){
				printf("Signo de Capricornio\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro Shura");
				break;
				case 2:
					printf("Cavaleiro El Cid");
				break;
				case 3:
					printf("Cavaleiro Ionia");
				break;
				case 4:
					printf("Cavaleiro Izo");
				break;
				}
			}else if((dia>=21 && dia<=31 && mes==1) || (dia>=1 && dia<=18 && mes==2)){
				printf("Signo de Aquraio\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro Camus");
				break;
				case 2:
					printf("Cavaleiro Degel");
				break;
				case 3:
					printf("Cavaleiro Tokisada");
				break;
				case 4:
					printf("Cavaleiro Mystoria");
				break;
				}
			}else if((dia>=19 && dia<=29 && mes==2) || (dia>=1 && dia<=20 && mes==3)){
				printf("Signo de Peixes\n");
				
				printf("escolha o cavaleiro\n");
				printf("1 - Classica\n2 - The lost canvas\n3 - Omega\n4 - Next Dimension\n");
				scanf("%d",&opcao);
			
				switch(opcao){
				case 1:
					printf("Cavaleiro Afrodita");
				break;
				case 2:
					printf("Cavaleiro Albafica");
				break;
				case 3:
					printf("Cavaleiro Amor");
				break;
				case 4:
					printf("Cavaleiro Cardinale");
				break;
				}
			}
		}else{
			printf("dia ou mes incorretos");
		}
	}
