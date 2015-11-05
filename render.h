/*  Rendereado de texto y marcos
    para la ventana de consola.
================================================= */
#ifndef dibujoRender
#define dibujoRender
using namespace std;

void dibujarBordes() {
  int tamHorizontal = 78, tamVertical = 23;

  for(int x = 3; x < tamHorizontal; x+=1) {
    gotoxy(x, (tamVertical-1)); cout<<"_";
  } // Borde inferior
  for(int x = 3; x < tamHorizontal; x+=1) {
    gotoxy(x, 3); cout<<"_";
  } // Borde de titulo superior
  for(int x = 3; x < tamHorizontal; x+=1) {
    gotoxy(x, 1); cout<<"_";
  } // Borde de titulo inferior
  for(int y = 2; y < tamVertical; y+=1) {
    gotoxy((tamHorizontal-1), y); cout<<"|";
  } // Borde lateral derecho
  for(int y = 2; y < tamVertical; y+=1) {
    gotoxy(3, y); cout<<"|";
  } // Borde lateral izquierdo
} // Fin de dibujar bordes

void dibujarMenu(string menu) {
  int opcion;
  if (menu.compare("principal") == 0) {
    opcion = 1;
  } else if (menu.compare("clientes") == 0) {
    opcion = 2;
  } else if (menu.compare("admins") == 0) {
    opcion = 3;
  } else if (menu.compare("nuevoMenu")  == 0) {
    // Opcion
  } else if (menu.compare("nuevoMenu")  == 0) {
    // Opcion
  } else { // Default o error
    opcion = 0;
  }// Fin de dar valor a opcion

  switch(opcion) {
    case 0:
      system("cls");
      cout << "Error al llamar la funcion dibujarMenu" << endl;
      break;
    case 2:
      dibujarBordes();
      gotoxy(18,2); cout << "BLOCKBUSTER: VENTA Y RENTA DE PELICULAS";
      gotoxy(27,5); cout << "Que es lo que deseas hacer?";
      gotoxy(5,9);  cout << "Menu:";
      gotoxy(5,12); cout << "1.- Rentar peliculas";
      gotoxy(5,14); cout << "2.- Comprar peliculas";
      gotoxy(5,16); cout << "3.- Membresias";
      gotoxy(5,18); cout << "4.- Salir";
      gotoxy(5,23); cout << "Opcion: ";
      break;
  } // Fin de elegir opcion
} // Fin de mostrar menu principal

void intro() {
  int velocidad = 280;

  // Colorear pantalla azul y letra amarilla
  system("cls");
  system("color 16");

  // Fotograma 1 - BLO
  cout<<"\n\n\n\n";
  cout<<"\tBBBBBBBBBBBBBBBBB   LLLLLLLLLLL                  OOOOOOOOO     "<<endl;
  cout<<"\tB::::::::::::::::B  L:::::::::L                OO:::::::::OO   "<<endl;
  cout<<"\tB::::::BBBBBB:::::B L:::::::::L              OO:::::::::::::OO "<<endl;
  cout<<"\tBB:::::B     B:::::BLL:::::::LL             O:::::::OOO:::::::O"<<endl;
  cout<<"\t  B::::B     B:::::B  L:::::L               O::::::O   O::::::O"<<endl;
  cout<<"\t  B::::B     B:::::B  L:::::L               O:::::O     O:::::O"<<endl;
  cout<<"\t  B::::BBBBBB:::::B   L:::::L               O:::::O     O:::::O"<<endl;
  cout<<"\t  B:::::::::::::BB    L:::::L               O:::::O     O:::::O"<<endl;
  cout<<"\t  B::::BBBBBB:::::B   L:::::L               O:::::O     O:::::O"<<endl;
  cout<<"\t  B::::B     B:::::B  L:::::L               O:::::O     O:::::O"<<endl;
  cout<<"\t  B::::B     B:::::B  L:::::L               O:::::O     O:::::O"<<endl;
  cout<<"\t  B::::B     B:::::B  L:::::L         LLLLLLO::::::O   O::::::O"<<endl;
  cout<<"\tBB:::::BBBBBB::::::BLL:::::::LLLLLLLLL:::::LO:::::::OOO:::::::O"<<endl;
  cout<<"\tB:::::::::::::::::B L::::::::::::::::::::::L OO:::::::::::::OO "<<endl;
  cout<<"\tB::::::::::::::::B  L::::::::::::::::::::::L   OO:::::::::OO   "<<endl;
  cout<<"\tBBBBBBBBBBBBBBBBB   LLLLLLLLLLLLLLLLLLLLLLLL     OOOOOOOOO     "<<endl;
  Sleep(velocidad); system("cls");

  // Fotograma 2 - LOC
  cout<<"\n\n\n\n";
  cout<<"\tLLLLLLLLLLL                  OOOOOOOOO             CCCCCCCCCCCCC"<<endl;
  cout<<"\tL:::::::::L                OO:::::::::OO        CCC::::::::::::C"<<endl;
  cout<<"\tL:::::::::L              OO:::::::::::::OO    CC:::::::::::::::C"<<endl;
  cout<<"\tLL:::::::LL             O:::::::OOO:::::::O  C:::::CCCCCCCC::::C"<<endl;
  cout<<"\t  L:::::L               O::::::O   O::::::O C:::::C       CCCCCC"<<endl;
  cout<<"\t  L:::::L               O:::::O     O:::::OC:::::C              "<<endl;
  cout<<"\t  L:::::L               O:::::O     O:::::OC:::::C              "<<endl;
  cout<<"\t  L:::::L               O:::::O     O:::::OC:::::C              "<<endl;
  cout<<"\t  L:::::L               O:::::O     O:::::OC:::::C              "<<endl;
  cout<<"\t  L:::::L               O:::::O     O:::::OC:::::C              "<<endl;
  cout<<"\t  L:::::L               O:::::O     O:::::OC:::::C              "<<endl;
  cout<<"\t  L:::::L         LLLLLLO::::::O   O::::::O C:::::C       CCCCCC"<<endl;
  cout<<"\tLL:::::::LLLLLLLLL:::::LO:::::::OOO:::::::O  C:::::CCCCCCCC::::C"<<endl;
  cout<<"\tL::::::::::::::::::::::L OO:::::::::::::OO    CC:::::::::::::::C"<<endl;
  cout<<"\tL::::::::::::::::::::::L   OO:::::::::OO        CCC::::::::::::C"<<endl;
  cout<<"\tLLLLLLLLLLLLLLLLLLLLLLLL     OOOOOOOOO             CCCCCCCCCCCCC"<<endl;
  Sleep(velocidad); system("cls");

  // Fotograma 3 - OCK
  cout<<"\n\n\n\n";
  cout<<"\t     OOOOOOOOO             CCCCCCCCCCCCCKKKKKKKKK    KKKKKKK"<<endl;
  cout<<"\t   OO:::::::::OO        CCC::::::::::::CK:::::::K    K:::::K"<<endl;
  cout<<"\t OO:::::::::::::OO    CC:::::::::::::::CK:::::::K    K:::::K"<<endl;
  cout<<"\tO:::::::OOO:::::::O  C:::::CCCCCCCC::::CK:::::::K   K::::::K"<<endl;
  cout<<"\tO::::::O   O::::::O C:::::C       CCCCCCKK::::::K  K:::::KKK"<<endl;
  cout<<"\tO:::::O     O:::::OC:::::C                K:::::K K:::::K   "<<endl;
  cout<<"\tO:::::O     O:::::OC:::::C                K::::::K:::::K    "<<endl;
  cout<<"\tO:::::O     O:::::OC:::::C                K:::::::::::K     "<<endl;
  cout<<"\tO:::::O     O:::::OC:::::C                K:::::::::::K     "<<endl;
  cout<<"\tO:::::O     O:::::OC:::::C                K::::::K:::::K    "<<endl;
  cout<<"\tO:::::O     O:::::OC:::::C                K:::::K K:::::K   "<<endl;
  cout<<"\tO::::::O   O::::::O C:::::C       CCCCCCKK::::::K  K:::::KKK"<<endl;
  cout<<"\tO:::::::OOO:::::::O  C:::::CCCCCCCC::::CK:::::::K   K::::::K"<<endl;
  cout<<"\t OO:::::::::::::OO    CC:::::::::::::::CK:::::::K    K:::::K"<<endl;
  cout<<"\t   OO:::::::::OO        CCC::::::::::::CK:::::::K    K:::::K"<<endl;
  cout<<"\t     OOOOOOOOO             CCCCCCCCCCCCCKKKKKKKKK    KKKKKKK"<<endl;
  Sleep(velocidad); system("cls");

  // Fotograma 4 - CKB
  cout<<"\n\n\n\n";
  cout<<"\t        CCCCCCCCCCCCCKKKKKKKKK    KKKKKKKBBBBBBBBBBBBBBBBB   "<<endl;
  cout<<"\t     CCC::::::::::::CK:::::::K    K:::::KB::::::::::::::::B  "<<endl;
  cout<<"\t   CC:::::::::::::::CK:::::::K    K:::::KB::::::BBBBBB:::::B "<<endl;
  cout<<"\t  C:::::CCCCCCCC::::CK:::::::K   K::::::KBB:::::B     B:::::B"<<endl;
  cout<<"\t C:::::C       CCCCCCKK::::::K  K:::::KKK  B::::B     B:::::B"<<endl;
  cout<<"\tC:::::C                K:::::K K:::::K     B::::B     B:::::B"<<endl;
  cout<<"\tC:::::C                K::::::K:::::K      B::::BBBBBB:::::B "<<endl;
  cout<<"\tC:::::C                K:::::::::::K       B:::::::::::::BB  "<<endl;
  cout<<"\tC:::::C                K:::::::::::K       B::::BBBBBB:::::B "<<endl;
  cout<<"\tC:::::C                K::::::K:::::K      B::::B     B:::::B"<<endl;
  cout<<"\tC:::::C                K:::::K K:::::K     B::::B     B:::::B"<<endl;
  cout<<"\t C:::::C       CCCCCCKK::::::K  K:::::KKK  B::::B     B:::::B"<<endl;
  cout<<"\t  C:::::CCCCCCCC::::CK:::::::K   K::::::KBB:::::BBBBBB::::::B"<<endl;
  cout<<"\t   CC:::::::::::::::CK:::::::K    K:::::KB:::::::::::::::::B "<<endl;
  cout<<"\t     CCC::::::::::::CK:::::::K    K:::::KB::::::::::::::::B  "<<endl;
  cout<<"\t        CCCCCCCCCCCCCKKKKKKKKK    KKKKKKKBBBBBBBBBBBBBBBBB   "<<endl;
  Sleep(velocidad); system("cls");

  // Fotograma 5 - KBU
  cout<<"\n\n\n\n";
  cout<<"\tKKKKKKKKK    KKKKKKKBBBBBBBBBBBBBBBBB   UUUUUUUU     UUUUUUUU"<<endl;
  cout<<"\tK:::::::K    K:::::KB::::::::::::::::B  U::::::U     U::::::U"<<endl;
  cout<<"\tK:::::::K    K:::::KB::::::BBBBBB:::::B U::::::U     U::::::U"<<endl;
  cout<<"\tK:::::::K   K::::::KBB:::::B     B:::::BUU:::::U     U:::::UU"<<endl;
  cout<<"\tKK::::::K  K:::::KKK  B::::B     B:::::B U:::::U     U:::::U "<<endl;
  cout<<"\t  K:::::K K:::::K     B::::B     B:::::B U:::::D     D:::::U "<<endl;
  cout<<"\t  K::::::K:::::K      B::::BBBBBB:::::B  U:::::D     D:::::U "<<endl;
  cout<<"\t  K:::::::::::K       B:::::::::::::BB   U:::::D     D:::::U "<<endl;
  cout<<"\t  K:::::::::::K       B::::BBBBBB:::::B  U:::::D     D:::::U "<<endl;
  cout<<"\t  K::::::K:::::K      B::::B     B:::::B U:::::D     D:::::U "<<endl;
  cout<<"\t  K:::::K K:::::K     B::::B     B:::::B U:::::D     D:::::U "<<endl;
  cout<<"\tKK::::::K  K:::::KKK  B::::B     B:::::B U::::::U   U::::::U "<<endl;
  cout<<"\tK:::::::K   K::::::KBB:::::BBBBBB::::::B U:::::::UUU:::::::U "<<endl;
  cout<<"\tK:::::::K    K:::::KB:::::::::::::::::B   UU:::::::::::::UU  "<<endl;
  cout<<"\tK:::::::K    K:::::KB::::::::::::::::B      UU:::::::::UU    "<<endl;
  cout<<"\tKKKKKKKKK    KKKKKKKBBBBBBBBBBBBBBBBB         UUUUUUUUU      "<<endl;
  Sleep(velocidad); system("cls");
  
  // Fotograma 6 - BUS
  cout<<"\n\n\n\n";
  cout<<"\tBBBBBBBBBBBBBBBBB   UUUUUUUU     UUUUUUUU   SSSSSSSSSSSSSSS "<<endl;
  cout<<"\tB::::::::::::::::B  U::::::U     U::::::U SS:::::::::::::::S"<<endl;
  cout<<"\tB::::::BBBBBB:::::B U::::::U     U::::::US:::::SSSSSS::::::S"<<endl;
  cout<<"\tBB:::::B     B:::::BUU:::::U     U:::::UUS:::::S     SSSSSSS"<<endl;
  cout<<"\t  B::::B     B:::::B U:::::U     U:::::U S:::::S            "<<endl;
  cout<<"\t  B::::B     B:::::B U:::::D     D:::::U S:::::S            "<<endl;
  cout<<"\t  B::::BBBBBB:::::B  U:::::D     D:::::U  S::::SSSS         "<<endl;
  cout<<"\t  B:::::::::::::BB   U:::::D     D:::::U   SS::::::SSSSS    "<<endl;
  cout<<"\t  B::::BBBBBB:::::B  U:::::D     D:::::U     SSS::::::::SS  "<<endl;
  cout<<"\t  B::::B     B:::::B U:::::D     D:::::U        SSSSSS::::S "<<endl;
  cout<<"\t  B::::B     B:::::B U:::::D     D:::::U             S:::::S"<<endl;
  cout<<"\t  B::::B     B:::::B U::::::U   U::::::U             S:::::S"<<endl;
  cout<<"\tBB:::::BBBBBB::::::B U:::::::UUU:::::::U SSSSSSS     S:::::S"<<endl;
  cout<<"\tB:::::::::::::::::B   UU:::::::::::::UU  S::::::SSSSSS:::::S"<<endl;
  cout<<"\tB::::::::::::::::B      UU:::::::::UU    S:::::::::::::::SS "<<endl;
  cout<<"\tBBBBBBBBBBBBBBBBB         UUUUUUUUU       SSSSSSSSSSSSSSS   "<<endl;
  Sleep(velocidad); system("cls");

  // Fotograma 7 - UST
  cout<<"\n\n\n\n";
  cout<<"\tUUUUUUUU     UUUUUUUU   SSSSSSSSSSSSSSS TTTTTTTTTTTTTTTTTTTTTTT"<<endl;
  cout<<"\tU::::::U     U::::::U SS:::::::::::::::ST:::::::::::::::::::::T"<<endl;
  cout<<"\tU::::::U     U::::::US:::::SSSSSS::::::ST:::::::::::::::::::::T"<<endl;
  cout<<"\tUU:::::U     U:::::UUS:::::S     SSSSSSST:::::TT:::::::TT:::::T"<<endl;
  cout<<"\t U:::::U     U:::::U S:::::S            TTTTTT  T:::::T  TTTTTT"<<endl;
  cout<<"\t U:::::D     D:::::U S:::::S                    T:::::T        "<<endl;
  cout<<"\t U:::::D     D:::::U  S::::SSSS                 T:::::T        "<<endl;
  cout<<"\t U:::::D     D:::::U   SS::::::SSSSS            T:::::T        "<<endl;
  cout<<"\t U:::::D     D:::::U     SSS::::::::SS          T:::::T        "<<endl;
  cout<<"\t U:::::D     D:::::U        SSSSSS::::S         T:::::T        "<<endl;
  cout<<"\t U:::::D     D:::::U             S:::::S        T:::::T        "<<endl;
  cout<<"\t U::::::U   U::::::U             S:::::S        T:::::T        "<<endl;
  cout<<"\t U:::::::UUU:::::::U SSSSSSS     S:::::S      TT:::::::TT      "<<endl;
  cout<<"\t  UU:::::::::::::UU  S::::::SSSSSS:::::S      T:::::::::T      "<<endl;
  cout<<"\t    UU:::::::::UU    S:::::::::::::::SS       T:::::::::T      "<<endl;
  cout<<"\t      UUUUUUUUU       SSSSSSSSSSSSSSS         TTTTTTTTTTT      "<<endl;
  Sleep(velocidad); system("cls");

  // Fotograma 8 - STE
  cout<<"\n\n\n\n";
  cout<<"\t   SSSSSSSSSSSSSSS TTTTTTTTTTTTTTTTTTTTTTTEEEEEEEEEEEEEEEEEEEEEE"<<endl;
  cout<<"\t SS:::::::::::::::ST:::::::::::::::::::::TE::::::::::::::::::::E"<<endl;
  cout<<"\tS:::::SSSSSS::::::ST:::::::::::::::::::::TE::::::::::::::::::::E"<<endl;
  cout<<"\tS:::::S     SSSSSSST:::::TT:::::::TT:::::TEE::::::EEEEEEEEE::::E"<<endl;
  cout<<"\tS:::::S            TTTTTT  T:::::T  TTTTTT  E:::::E       EEEEEE"<<endl;
  cout<<"\tS:::::S                    T:::::T          E:::::E             "<<endl;
  cout<<"\t S::::SSSS                 T:::::T          E::::::EEEEEEEEEE   "<<endl;
  cout<<"\t  SS::::::SSSSS            T:::::T          E:::::::::::::::E   "<<endl;
  cout<<"\t    SSS::::::::SS          T:::::T          E:::::::::::::::E   "<<endl;
  cout<<"\t       SSSSSS::::S         T:::::T          E::::::EEEEEEEEEE   "<<endl;
  cout<<"\t            S:::::S        T:::::T          E:::::E             "<<endl;
  cout<<"\t            S:::::S        T:::::T          E:::::E       EEEEEE"<<endl;
  cout<<"\tSSSSSSS     S:::::S      TT:::::::TT      EE::::::EEEEEEEE:::::E"<<endl;
  cout<<"\tS::::::SSSSSS:::::S      T:::::::::T      E::::::::::::::::::::E"<<endl;
  cout<<"\tS:::::::::::::::SS       T:::::::::T      E::::::::::::::::::::E"<<endl;
  cout<<"\t SSSSSSSSSSSSSSS         TTTTTTTTTTT      EEEEEEEEEEEEEEEEEEEEEE"<<endl;
  Sleep(velocidad); system("cls");

  // Fotograma 9 - TER
  cout<<"\n\n\n\n";
  cout<<"\tTTTTTTTTTTTTTTTTTTTTTTTEEEEEEEEEEEEEEEEEEEEEERRRRRRRRRRRRRRRRR   "<<endl;
  cout<<"\tT:::::::::::::::::::::TE::::::::::::::::::::ER::::::::::::::::R  "<<endl;
  cout<<"\tT:::::::::::::::::::::TE::::::::::::::::::::ER::::::RRRRRR:::::R "<<endl;
  cout<<"\tT:::::TT:::::::TT:::::TEE::::::EEEEEEEEE::::ERR:::::R     R:::::R"<<endl;
  cout<<"\tTTTTTT  T:::::T  TTTTTT  E:::::E       EEEEEE  R::::R     R:::::R"<<endl;
  cout<<"\t        T:::::T          E:::::E               R::::R     R:::::R"<<endl;
  cout<<"\t        T:::::T          E::::::EEEEEEEEEE     R::::RRRRRR:::::R "<<endl;
  cout<<"\t        T:::::T          E:::::::::::::::E     R:::::::::::::RR  "<<endl;
  cout<<"\t        T:::::T          E:::::::::::::::E     R::::RRRRRR:::::R "<<endl;
  cout<<"\t        T:::::T          E::::::EEEEEEEEEE     R::::R     R:::::R"<<endl;
  cout<<"\t        T:::::T          E:::::E               R::::R     R:::::R"<<endl;
  cout<<"\t        T:::::T          E:::::E       EEEEEE  R::::R     R:::::R"<<endl;
  cout<<"\t      TT:::::::TT      EE::::::EEEEEEEE:::::ERR:::::R     R:::::R"<<endl;
  cout<<"\t      T:::::::::T      E::::::::::::::::::::ER::::::R     R:::::R"<<endl;
  cout<<"\t      T:::::::::T      E::::::::::::::::::::ER::::::R     R:::::R"<<endl;
  cout<<"\t      TTTTTTTTTTT      EEEEEEEEEEEEEEEEEEEEEERRRRRRRR     RRRRRRR"<<endl;
  Sleep(velocidad*3); system("cls");
} // Fin de intro con logo
#endif