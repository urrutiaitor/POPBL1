#ifndef ERREALITATE_FISIKOA_H
#define ERREALITATE_FISIKOA_H


typedef struct {
	int x;
	int y;
	int inertziaY;
	int inertziaX;
	int inertziaEremuaY;
	int inertziaEremuaX;
}POSIZIOA;

void ERREALITATE_FISIKOA_mugimendua(POSIZIOA posizioGorria, POSIZIOA posizioUrdina,int pantaila);

#endif