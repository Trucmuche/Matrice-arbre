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

typedef struct tete
{
    int posx;
    int posy;
    struct noeud *C1;
    struct noeud *C2;
    struct noeud *C3;
    struct noeud *C4;
    struct noeud *C5;
    struct noeud *C6;
    struct noeud *C7;
    struct noeud *C8;
    struct tete *suivant;
} tete ;

typedef struct noeud
{
    struct noeud *C1;
    struct noeud *C2;
    struct noeud *C3;
    struct noeud *C4;
    struct noeud *C5;
    struct noeud *C6;
    struct noeud *C7;
    struct noeud *C8;
} noeud ;

void initialiserTete(tete **elem)
{
    elem->posx = 0;
    elem->posy = 0;
    elem->C1 = NULL;
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

noeud *creerTete(int tab[][TAILLE], int verif[][TAILLE], int i, int j)
{
    noeud *elem = malloc(sizeof(elem));
    initialiserNoeud(&elem);

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
    return;
}

int main()
{
    tete *arbre;
    int tab[TAILLE][TAILLE],verif[TAILLE][TAILLE];
    initialiserTableau(verif,0);
    initialiserTableau(tab,1);

    arbre = creerArbre(tab,verif);

    return 0;
}
