#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define C1 C1
#define C2 C2
#define C3 C3
#define C4 C4
#define C5 C5
#define C6 C6
#define C7 C7
#define C8 C8
#define TAILLE 8

typedef struct noeud
{

} noeud ;

typedef struct tete
{
    int posx;
    int posy;

    struct tete *suivant;
} tete ;

void initialiserTete(tete *elem)
{
    elem->posx = 0;
    elem->posy = 0;
    elem->pos [][] = NULL;
    elem->C2 = NULL;
    elem->C3 = NULL;
    elem->C4 = NULL;
    elem->C5 = NULL;
    elem->C6 = NULL;
    elem->C7 = NULL;
    elem->C8 = NULL;
    elem->suivant == NULL;

    return;
}

void initialiserNoeud(noeud **elem)
{
    elem->C1 = NULL;
    elem->C2 = NULL;
    elem->C3 = NULL;
    elem->C4 = NULL;
    elem->C5 = NULL;
    elem->C6 = NULL;
    elem->C7 = NULL;
    elem->C8 = NULL;

    return;
}

tete *creerTete(int tab[][TAILLE], int verif[][TAILLE], int i, int j)
{
    tete *elem = malloc(sizeof(elem));
    initialiserTete(&elem);

    return elem;
}

noeud *creerNoeud()
{
    noeud *elem = malloc(sizeof(elem));
    initialiserNoeud(&elem);

    return elem;
}

void ajouterNoeud(noeud **arbre)
{
    noeud *elem = malloc(sizeof(noeud));

    return;
}

tete *creerArbre(int tab[][TAILLE], int verif[][TAILLE])
{
    tete *debut = malloc(sizeof(tete));

    int i,j,premier = 1;

    for(i=0;i<=7;i++)
        for (j=0;j<=7;j++)
        {
            if (tab[i][j] == 1 && verif[i][j] == 0)  // si cette case n'est pas traitée, mais devrait l'etre
            {
                verif[i][j] = 1;
                creerTete(tab,verif,i,j); //creation d"un element de tête
            }
        }


    return debut;
}

void affichageArbre(noeud *arbre)
{
    return;
}

void initialiserTableau(int tab[][TAILLE],int type)
{
    for (i=0;i<=TAILLE;i++)
        for (j=0;j<=TAILLE;j++)
            tab[i][j] = 0;

    if (type == 1)
    {
        tab[1][1] = 1;
        tab[1][2] = 1;
        tab[1][5] = 1;
        tab[1][6] = 1;
        tab[2][1] = 1;
        tab[2][2] = 1;
        tab[2][5] = 1;
        tab[2][6] = 1;
        tab[4][3] = 1;
        tab[4][4] = 1;
        tab[5][1] = 1;
        tab[5][6] = 1;
        tab[6][2] = 1;
        tab[6][3] = 1;
        tab[6][4] = 1;
        tab[6][5] = 1;
    }

    if (type == 2)
    {
        tab[1][1] = 1;
        tab[1][6] = 1;
        tab[2][1] = 1;
        tab[2][2] = 1;
        tab[2][6] = 1;
        tab[3][1] = 1;
        tab[3][3] = 1;
        tab[3][6] = 1;
        tab[4][1] = 1;
        tab[4][4] = 1;
        tab[4][6] = 1;
        tab[5][1] = 1;
        tab[5][5] = 1;
        tab[5][6] = 1;
        tab[6][1] = 1;
        tab[6][6] = 1;
    }

    return;
}

void afficherTableau(int tab[][TAILLE])
{
    for (i=0;i<=TAILLE;i++)
        for (j=0;j<=TAILLE;j++)
            if (tab[i][j] = 1)
                printf("x   ");
            else
                printf("_   ");
        printf("\n");

    return;
}

int main()
{
    tete *arbre;
    int tab[TAILLE][TAILLE],verif[TAILLE][TAILLE],pos[3][3];
    initialiserTableau(verif,0);
    initialiserTableau(tab,1);
    afficherTableau(tab);

    arbre = creerArbre(tab,verif);

    return 0;
}
