#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int info;
	struct node *next;
};

typedef struct node *Node;

typedef struct list{
	Node head;
	Node tail;	
} *List;

Node new_node(int e){
	Node new = malloc(sizeof(struct node));
	new -> info = e;
	return new;
}

void add_at_end(List list, int e){
	if(list -> tail == NULL){
		list -> head = list -> tail = malloc(sizeof(struct node));
		list -> tail -> info = e;
	}else{
		list -> tail -> next = malloc(sizeof(struct node));
		list -> tail = list ->tail->next;
		list -> tail -> info = e;
	}
}
/*
L'opzione giusta e' la D.
Nella A effettuiamo un inserimento illegale.
Nella B, C, E al temine della funzione perdiamo l'area di memoria allocata.
*/

/* 
1.2]
B, D.

1.3]
La B. Supponendo che esclusivamente e necessariamente la lista bidirezionale abbia un riferimento all'ultimo nodo,
sfruttiamo questa proprieta' per riconoscerla.

1.4]
Restituisce il nodo precedente a un nodo che abbia info = value. E' una funzione che simula la variabile
prev nelle liste bidirezionali (basandosi solo sul value pero').

1.5]
Dobbiamo simulare una lista del tipo LIFO.
COme implementazioni sono accettabili le risposte C e D. La piu' performante e' la D, essendo la struttura dati 
una lista semplice.

*/