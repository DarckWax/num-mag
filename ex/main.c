#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int random_number=rand() % 100 + 1;
	int num;
	int nb_tentative=0;

while(random_number!=num)
{

	printf("Choisissez un nombre entre 0 et 100\n");
		scanf("%d",&num);
	++nb_tentative;

		if(random_number==num)
{
		printf("Gagné !\n");
		}
			else if(random_number>num)
{
			printf("C'est plus !\n");
			}
			else if(num>100)
{
			printf("Saisir un nombre entre 0 et 100\n");
			}
			else 
{
			printf("C'est moins !\n");
			}
			}

printf("Vous avez trouvez au bout de la %dème tentative.\n",nb_tentative); //Nombre de tentatives

exit(0);
}