#include "stdafx.h"
#include <iostream>
using namespace std;

struct nod
{
	int informatie;
	nod* link;
};

void AdaugareLaInceput(struct nod* &old)
{
	nod* New = new nod;
	cin >> New->informatie;
	New->link = old;
	old = New;
}

void AdaugareLaFinal(struct nod* &old)
{
	nod* t = old;
	for (; t->link != NULL; t = t->link);
	nod* New = new nod;
	cin >> New->informatie;
	New->link = NULL;
	t->link = New;
}

void Vizualizare(struct nod* old)
{
	nod* t;
	for (t = old; t != NULL; t = t->link)
	{
		cout << t->informatie << "  ";
	}
	cout << "\n";
}

void StergereLaInceput(struct nod* &old)
{
	nod* t = old;
	old = old->link;
	delete t;
}

int main()
{
	nod* t = NULL;
	AdaugareLaInceput(t);
	AdaugareLaInceput(t);
	AdaugareLaInceput(t);
	AdaugareLaInceput(t);
	AdaugareLaInceput(t);
	Vizualizare(t);
	StergereLaInceput(t);
	AdaugareLaFinal(t);
	AdaugareLaFinal(t);
	AdaugareLaFinal(t);
	AdaugareLaFinal(t);
	Vizualizare(t);
	system("pause");
	return 0;
}

