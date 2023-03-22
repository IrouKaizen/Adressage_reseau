#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[3],b,c,d,e,f,g,h, rep[1], mag, masq, nbreAdr, sr,sr1, ip, repp, o1, o2, sup, inf, re;

    printf("              **************************************\n");
    printf("              **************************************\n");
    printf("              **                                  **\n");
    printf("              **              BIENVENUE           **\n");
    printf("              **          DANS L'ADRESSAGE        **\n");
    printf("              **             DU RESEAU            **\n");
    printf("              **                                  **\n");
    printf("              **************************************\n");
    printf("              **************************************\n");

    printf("\n");
    printf("\n");
    printf("\n");

    printf("       Veuillez choisir l'opération que vous voulez mener ( 0 - 3 )\n" );
    printf("       -----------------------------------------------------------\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf(" 0 --- Déterminer la classe et la plage d'adressage de votre adresse IP puis dire si elle est public ou privée ;\n");
    printf(" 1 --- Déterminer le masque réseau ou masque sous-réseau puis le nombre d'adresse de la plage ;\n");
    printf(" 2 --- Déterminer le couple de l'adresse IP/masque et le nombre de la plage ;\n");
    printf(" 3 --- nombre magique .\n");
    printf("\n");
    printf("\n");
    printf("\n");

        do
        {
            printf("\nChoisissez une option : ");
            scanf("%d", &rep);
            printf("\n");
            printf("\n");
            fflush(stdin);
        }
        while (rep != 0 && rep != 1 && rep != 2 && rep != 3);


        ///OPERATIONS

        if (rep==0)

        {
            printf("Vous avez choisi l'option 0 -- Déterminer la classe et la plage d'adressage de votre adresse IP puis dire si elle est public ou privée ;\n");
            printf("\n");
            printf("\n");
            {

                do
                {
                    printf("°°°°°°°°Entrez votre adresse IP : ");
                    scanf("%3d.%3d.%3d.%3d", &a, &b, &c, &d);
                    fflush(stdin);
                }
                while (1<a && a>256);
            }
            {

                if (1<a<193 && 1<b<169 && 1<c<256 && 1<d<256 )
                {
                    //printf ("\nIl s'agit d'une adresse privée de ");
                    {
                        if(1<a && a<127)
                        {
                            printf("classe A");
                        }
                        if(128<a && a<191)
                        {
                            printf("classe B");
                        }
                        if(192<a && a<223)
                        {
                            printf("classe C");
                        }
                        if(224<a && a<239)
                        {
                            printf("classe D");
                        }
                        if(240<a && a<255)
                        {
                            printf("classe E");
                        }
                    }

                }

                else
                {
                    printf ("\nIl s'agit d'une adresse publique de ");
                }

            }
           /* printf("\n");
            printf("\n");
            printf("\nLes différentes plages des adresses IP privées: ");
            printf("\n   1.0.0.0 - 10.255.255.255");
            printf("\n   172.16.0.0 - 172.31.255.255");
            printf("\n   192.168.0.0 - 192.168.255.255");
            printf("\n");
            printf("\n");*/
        }



        else if (rep==1)
        {
            printf("\nVous avez choisi l'option 1 --- Déterminer le masque réseau ou masque sous-réseau puis le nombre d'adresse de la plage ;\n");
            printf("\n");
            printf("\n");
            printf("\n°°°°°°°Entrez correctement votre adresse IP : ");
            scanf("%3d.%3d.%3d.%3d", &a, &b, &c, &d);
            printf("\n°°°°°°°IP : %d.%d.%d.%d", a, b, c, d);

            if (a > 1 && a<127)
            {
                printf("\nAdresse réseau: %d.0.0.0", a);
                printf("\nAdresse Masque : 255.0.0.0");
            }
            if (a >= 127 && a<192)
            {
                printf("\nAdresse réseau: %d.%d.0.0", a, b);
                printf("\nAdresse Masque : 255.255.0.0");
            }
            if (a >= 192 && a < 223)
            {
                printf("\nAdresse réseau: %d.%d.%d.0", a, b, c);
                printf("\nAdresse Masque : 255.255.255.0");
            }

        }

        else if  (rep==2)
        {
            printf("Vous avez choisi l'option 2 --- Déterminer le couple de l'adresse IP/masque et le nombre de la plage ;\n");
            printf("\n");
            printf("\n");
            printf("\n°°°°°°°Entrez correctement votre adresse IP : ");
            scanf("%d.%d.%d.%d", &a, &b, &c, &d);
            printf("\n°°°°°°°Entrez votre masque : ");
            scanf("%d.", &e);
            printf("\n");
            printf("le couple de l'adresse IP/masque de votre adresse IP est %d.%d.%d.%d/%d", a, b, c, d, e);
            masq = 32- e;
            sr1 = pow(2,masq);
            printf("\nVous avez %d plages d'adresse", sr1);

        }


        if (rep==3)

        {
            {

                do
                {
                    printf("Vous avez choisi l'option 3 --- nombre magique .\n");
                    printf("\n");
                    printf("\n");
                    printf("\n°°°°°°Entrez votre adresse IP : ");
                    scanf("%d.%3d.%d.%d", &a, &b, &c, &d);
                    printf("\n°°°°°°Entrez votre adresse masque : ");
                    scanf("%d.%3d.%d.%d", &e, &f, &g, &h);
                   // printf("Combien voulez vous d'adresses sous-réseaux ? : ");
                 //   scanf("%d", &re);
                }
                while (1<b && b>256);

                {

                    mag = 256 - b;
                    printf("\nLe nombre magique vaut donc  %d", mag);
                    printf("\n********Découpage d'adresses*******");
                    printf("");

                }
                ///nbreadresse=pow(2,nbre de zero)==deci
               /// msq=255.255.bin .en deci
               /// mag2 = 256-bin
               /// multiple de mag2 apres 160 est y=x-1
               /// finalemt dern adre est a.b.y.255
                ///ads=oct1%2

                {
                    if (e != 255)
                    {
                       o1 = e;
                       o2 = a;
                    }

                    if (f != 255)
                    {
                       o1 = e;
                       o2 = a;
                    }

                    if (g != 255)
                    {
                       o1 = e;
                       o2 = a;
                    }

                    if (h != 255)
                    {
                       o1 = e;
                       o2 = a;
                    }

            }
                if (o1%mag == 0)
                {
                    sup = o1 + mag - 1;
                    printf("\nLa première adresse est : %d.%3d.%d.%d", a, b, c, d);
                    printf("\nLa denière adresse est : %d.%d.%d.255", a,b,sup);
                }


                else if (o1%mag != 0)
                {
                    inf = o1 - 1;
                    printf("\nLa première adresse est : %d.%3d.%d.%d", a, b, c, d);
                    printf("\nLa denière adresse est : %d.%d.%d.255", a,b,sup);
                }
            }

//        re = pow(2,nombre de zeros)

        }


    return 0;
}
