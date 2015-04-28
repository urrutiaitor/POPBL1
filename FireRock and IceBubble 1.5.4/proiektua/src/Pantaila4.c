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


void PANTAILA4_pantailaMargotu();


void PANTAILA4_nagusia(){ //hau egin behar da bolaren mugimenduak eta pantaila eta ... lotzeko, nagusia.c -tik dator ona

	//aldagaiak
	int aukera = 2;

	//programa

	do{

		//harria
		ostopoak[0].kolorea = HARRI_KOLOREA;
		ostopoak[0].x0 = 150;
		ostopoak[0].y0 = 400;
		ostopoak[0].x1 = 200;
		ostopoak[0].y1 = 450;

		//goiko pelotak eragiten duena
		//botoia
		ostopoak[1].kolorea = MOREA_BOTOIA1;
		ostopoak[1].x0 = 225;
		ostopoak[1].y0 = 150;
		ostopoak[1].x1 = 245;
		ostopoak[1].y1 = 160;

		//plataforma mugikorra
		ostopoak[2].kolorea = MOREA_PLATAFORMA1;
		ostopoak[2].x0 = 270;
		ostopoak[2].y0 = 180;
		ostopoak[2].x1 = 350;
		ostopoak[2].y1 = 195;

		//beheko pelotak egiten duena
		//botoia
		ostopoak[3].kolorea = MOREA_BOTOIA2;
		ostopoak[3].x0 = 495;
		ostopoak[3].y0 = 440;
		ostopoak[3].x1 = 515;
		ostopoak[3].y1 = 450;

		//plataforma mugikorra
		ostopoak[4].kolorea = MOREA_PLATAFORMA2;
		ostopoak[4].x0 = 120;
		ostopoak[4].y0 = 300;
		ostopoak[4].x1 = 200;
		ostopoak[4].y1 = 315;


		posizioGorria.x = 590;
		posizioGorria.y = 450 - ERRADIOBOLA;

		posizioUrdina.x = 150;
		posizioUrdina.y = 99 - ERRADIOBOLA;

		do{

			aukera = ERREALITATE_FISIKOA_mugimendua(4);

		} while (aukera == 1);

	} while (aukera == 2);

	//return
	return 1;

}

void PANTAILA4_pantailaMargotu(){
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


//erdiko plataformak 
	//ezkerrekoa
	JOKOA_laukiBatMargotu(0, 160, 250, 180, BERDE_ILUNA);
	//eskuinekoa
	JOKOA_laukiBatMargotu(350, 180, 640, 210, BERDE_ILUNA);
	//erdikoa
	JOKOA_laukiBatMargotu(200, 300, 500, 330, BERDE_ILUNA);
	
//goiko plataforma
	//ezkerrekoa
	JOKOA_laukiBatMargotu(0, 100, 230, 130, BERDE_ILUNA);
	//eskuinekoa
	JOKOA_laukiBatMargotu(400, 100, 640, 130, BERDE_ILUNA);

//putzuak
	//gorria
	JOKOA_laukiBatMargotu(440, 100, 540, 110, GORRIA);

	//urdina
	JOKOA_laukiBatMargotu(230, 450, 430, 460, URDINA);

	//berdea
	JOKOA_laukiBatMargotu(300, 300, 400, 310, BERDEA);

//harria

	JOKOA_laukiBatMargotu(ostopoak[0].x0, ostopoak[0].y0, ostopoak[0].x1, ostopoak[0].y1, ostopoak[0].kolorea);

//ateak
	//urdina
	JOKOA_ateBatMargotu(574 , 99, URDINA2);

	//gorria
	JOKOA_ateBatMargotu(20, 99, GORRIA2);
//goiko pelotak eragiten duena
	//botoia
	JOKOA_laukiBatMargotu(ostopoak[1].x0, ostopoak[1].y0, ostopoak[1].x1, ostopoak[1].y1, ostopoak[1].kolorea);

	//pelota
	JOKOA_pelotaTxikia(200, 94);

	//plataforma mugikorra
	JOKOA_laukiBatMargotu(ostopoak[2].x0, ostopoak[2].y0, ostopoak[2].x1, ostopoak[2].y1, ostopoak[2].kolorea);

//beheko pelotak egiten duena
	//botoia
	JOKOA_laukiBatMargotu(ostopoak[3].x0, ostopoak[3].y0, ostopoak[3].x1, ostopoak[3].y1, ostopoak[3].kolorea);

	//pelota
	JOKOA_pelotaTxikia(470, 294);

	//plataforma mugikorra
	JOKOA_laukiBatMargotu(ostopoak[4].x0, ostopoak[4].y0, ostopoak[4].x1, ostopoak[4].y1, ostopoak[4].kolorea);


}