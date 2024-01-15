#include <stdio.h>
#include <stdlib.h>
// Structure pour un nœud de la liste doublement chaînée
typedef struct Noeud {
    int info;
    struct Noeud *pred;
    struct Noeud *suiv;
} Noeud;

// Fonction pour créer un nouveau nœud
Noeud* creerNoeud(int data) {
    Noeud* nvNoeud = (Noeud*)malloc(sizeof(Noeud));
    nvNoeud->info = data;
    nvNoeud->pred = NULL;
    nvNoeud->suiv = NULL;
    return nvNoeud;
}

// Fonction pour effectuer le tri par bulle sur la liste doublement chaînée
Noeud* Bulle(Noeud *tete) {
    int permut, temp;
    Noeud *p1;
    Noeud *p2 = NULL;

    if (tete == NULL)
        return tete;

    do {
        permut = 0;
        p1 = tete;

        while (p1->suiv != p2) {
            if (p1->info > p1->suiv->info) {
                temp = p1->info;
                p1->info = p1->suiv->info;
                p1->suiv->info = temp;
                permut = 1;
            }
            p1 = p1->suiv;
        }
        p2 = p1;
    } while (permut);

    return tete;
