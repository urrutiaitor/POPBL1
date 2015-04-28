#include "orokorrak.h"
#include "Pantaila0.h"
#include "jokoa.h"
#include "errealitateFisikoa.h"

//LIBRERIA GARFIKOA
#include "NewTypes.h"
#include "ebentoak.h"
#include "graphics.h"
#include "imagen.h"
#include "soinua.h"
//LIBRERIA MATEMATIKOA
#include "math.h"

#define ERRADIOBOLA 20


void PANTAILA1_pantailaMargotu();


void PANTAILA1_nagusia(){ //hau egin behar da bolaren mugimenduak eta pantaila eta ... lotzeko, nagusia.c -tik dator ona

	//aldagaiak
	int aukera = 2;

	//programa

	do{

		posizioGorria.x = 50;
		posizioGorria.y = 449 - ERRADIOBOLA;

		posizioUrdina.x = 50 + 10 + ERRADIOBOLA + ERRADIOBOLA;
		posizioUrdina.y = 449 - ERRADIOBOLA;

		//Beheko Plataformako Harria

		ostopoak[0].kolorea = HARRI_KOLOREA;
		ostopoak[0].x0 = 550;
		ostopoak[0].y0 = 400;
		ostopoak[0].x1 = 600;
		ostopoak[0].y1 = 450;

		//Erdiko Plataformako Harria
		ostopoak[1].kolorea = HARRI_KOLOREA;
		ostopoak[1].x0 = 60;
		ostopoak[1].y0 = 270;
		ostopoak[1].x1 = 110;
		ostopoak[1].y1 = 320;

		do{

			aukera = ERREALITATE_FISIKOA_mugimendua(2);

		} while (aukera == 1);

	} while (aukera == 2);

	//return
	return 1;

}

void PANTAILA1_pantailaMargotu(){
	//aldagaiak
	int x = 0, y = 0;


	//programa
	

	//goiko lerroa
	JOKOA_laukiBatMargotu(0, 0, 640, 10, BERDE_ILUNA);
	
	//beheko lerroa
	JOKOA_laukiBatMargotu(0, 450, 640, 480, BERDE_ILUNA);


	//ezkerreko lerroa
	JOKOA_laukiBatMargotu(0, 0, 10, 480, BERDE_ILUNA);


	//eskumako lerroa
	JOKOA_laukiBatMargotu(630, 0, 640, 480, BERDE_ILUNA);



	//erdiko plataforma
	JOKOA_laukiBatMargotu(0, 320, 510, 350, BERDE_ILUNA);


	//goiko plataforma
	JOKOA_laukiBatMargotu(250, 210, 640, 240, BERDE_ILUNA);
	

	//putzuak
	//gorria
	JOKOA_laukiBatMargotu(200, 450, 250, 460, GORRIA);
	
	//urdina
	JOKOA_laukiBatMargotu(350, 450, 400, 460, URDINA);

	//berdea
	JOKOA_laukiBatMargotu(300, 210, 400, 220, BERDEA);

	//harriak
	//behekoa
	JOKOA_laukiBatMargotu(ostopoak[0].x0, ostopoak[0].y0, ostopoak[0].x1, ostopoak[0].y1, ostopoak[0].kolorea);
	

	//erdiko plataformakoa
	JOKOA_laukiBatMargotu(ostopoak[1].x0, ostopoak[1].y0, ostopoak[1].x1, ostopoak[1].y1, ostopoak[1].kolorea);
	

	//ateak
	//urdina
	 JOKOA_ateBatMargotu(530, 209, URDINA2);

	//gorria
	 JOKOA_ateBatMargotu(585, 209, GORRIA2);



}

void PANTAILA1_pantailaMargotu3D(){
	//aldagaiak
	int x = 0, y = 0;


	//programa


	//goiko lerroa
	JOKOA_laukiBatMargotu3D(0, 0, 640, 10, BLOKEA_FONDO);

	//beheko lerroa
	JOKOA_laukiBatMargotu3D(0, 450, 640, 480, BLOKEA_FONDO);


	//ezkerreko lerroa
	JOKOA_laukiBatMargotu3D(0, 0, 10, 480, BLOKEA_FONDO);


	//eskumako lerroa
	JOKOA_laukiBatMargotu3D(630, 0, 640, 480, BLOKEA_FONDO);



	//erdiko plataforma
	JOKOA_laukiBatMargotu3D(0, 320, 510, 350, BLOKEA_FONDO);


	//goiko plataforma
	JOKOA_laukiBatMargotu3D(250, 210, 640, 240, BLOKEA_FONDO);


	//putzuak
	//gorria
	JOKOA_laukiBatMargotu3D(200, 450, 250, 460, GORRIA_FONDO);

	//urdina
	JOKOA_laukiBatMargotu3D(350, 450, 400, 460, URDINA_FONDO);

	//berdea
	JOKOA_laukiBatMargotu3D(300, 210, 400, 220, BERDEA_FONDO);

	//harriak
	//behekoa
	JOKOA_laukiBatMargotu3D(ostopoak[0].x0, ostopoak[0].y0, ostopoak[0].x1, ostopoak[0].y1,GRIS2);


	//erdiko plataformakoa
	JOKOA_laukiBatMargotu3D(ostopoak[1].x0, ostopoak[1].y0, ostopoak[1].x1, ostopoak[1].y1, GRIS2);


	//ateak
	//urdina
	JOKOA_ateBatMargotu(530, 209, URDINA2);

	//gorria
	JOKOA_ateBatMargotu(585, 209, GORRIA2);



}