/*========================================================
    Renderizado de texto, marcos, ASCII Art y
    animaciones para la ventana de consola.
========================================================*/
void dibujarMenu(string menu) {
  if (menu.compare("1_principal")                  == 0) {
    system("cls"); dibujarBordes();
    // Renderizado de texto
    gotoxy(28,2);   cout<<"MENU PRINCIPAL BLOCKBUSTER\n\n";
    gotoxy(7, 5);   cout<<"Bienvenido al sistema de rentas y compras virtual de Blockbuster.";
    gotoxy(7, 6);   cout<<"Si eres nuevo en este sistema, elige una opcion 'Crear cuenta', si";
    gotoxy(7, 7);   cout<<"ya tienes una cuenta de cliente o eres empleado de Blockbuster y";
    gotoxy(7, 8);    cout<<"deseas realizar cambios a la base de datos, elige 'Ingresar'.";
    gotoxy(28,19);  cout<<"Presione <ESC> para salir.";
    gotoxy(5, 23);  cout<<"Utiliza las teclas <IZQ> y <DER> para elegir una opcion y pulsa <ENTER>";
    // Renderizado de botones
    gotoxy(24, 13); cout << "==================";
    gotoxy(24, 14); cout << "|| CREAR CUENTA ||";
    gotoxy(24, 15); cout << "==================";
    gotoxy(43, 13); cout << "--------------";
    gotoxy(43, 14); cout << "|  INGRESAR  |";
    gotoxy(43, 15); cout << "--------------";
    // Mover cursor al botón default (CREAR CUENTA)
    gotoxy(27, 14);
  } else if (menu.compare("1_principal_registro")  == 0) {
    system("cls"); dibujarBordes();
    // Renderizado de texto
    gotoxy(26,2);   cout<<"MENU PRINCIPAL BLOCKBUSTER";
    gotoxy(5, 5);   cout<<"Bienvenido al sistema de rentas y compras virtual de Blockbuster.";
    gotoxy(5, 6);   cout<<"Si eres nuevo en este sistema, elige la opcion \"Crear cuenta\", si";
    gotoxy(5, 7);   cout<<"ya tienes una cuenta de cliente o eres empleado de Blockbuster y";
    gotoxy(5, 8);    cout<<"deseas realizar cambios a la base de datos, elige \"Ingresar\".";
    gotoxy(7, 11);  cout<<"CREAR CUENTA";
    gotoxy(7, 13);  cout<<"INGRESAR";
    gotoxy(5, 16);  cout<<"Presione <ESC>";
    gotoxy(5, 17);  cout<<"para volver";
    gotoxy(5, 18);  cout<<"atras.";
    gotoxy(23,11);  cout<<"Nombre de usuario:";
    gotoxy(23,16);  cout<<"Contrase"<<char(164)<<"a:";
    gotoxy(50,11);  cout<<"Repite contrase"<<char(164)<<"a:";
    gotoxy(5, 23);  cout<<"Utiliza las teclas de direccion para moverte entre campos.";
    // Renderizado de líneas
    for(int x=5; x<=69;x++)   { gotoxy(x, 10); cout<<"-"; }
    for(int x=20;x<=69;x++)   { gotoxy(x, 20); cout<<"-"; }
    for(int x=5; x<=19;x++)   { gotoxy(x, 14); cout<<"-"; }
    for(int x=5; x<=20;x++)   { gotoxy(x, 12); cout<<"-"; }
    for(int y=11;y<=13;y++)   { gotoxy(5, y);  cout<<"|"; }
    for(int y=13;y<=19;y++)   { gotoxy(20,y);  cout<<"|"; }
    for(int y=11;y<=19;y++)   { gotoxy(69,y);  cout<<"|"; }
    for(int x=23;x<=40;x++)   { gotoxy(x, 13); cout<<"-"; }
    for(int x=23;x<=40;x++)   { gotoxy(x, 18); cout<<"-"; }
    for(int x=50;x<=67;x++)   { gotoxy(x, 13); cout<<"-"; }
    gotoxy(5, 10); cout<<"."; gotoxy(69,10); cout<<".";
    gotoxy(5, 14); cout<<"*"; gotoxy(20,20); cout<<"*";
    gotoxy(69,20); cout<<"*"; gotoxy(20,12); cout<<".";
    // Renderizado de botones
    gotoxy(57, 16); cout << "-----------";
    gotoxy(57, 17); cout << "|  LISTO  |";
    gotoxy(57, 18); cout << "-----------";
    // Mover cursor al input default (Nombre de usuario)
    gotoxy(23, 12);
  } else if (menu.compare("1_principal_login")     == 0) {
    system("cls"); dibujarBordes();
    // Renderizado de texto
    gotoxy(26,2);   cout<<"MENU PRINCIPAL BLOCKBUSTER";
    gotoxy(5, 5);   cout<<"Bienvenido al sistema de rentas y compras virtual de Blockbuster.";
    gotoxy(5, 6);   cout<<"Si eres nuevo en este sistema, elige la opcion \"Crear cuenta\", si";
    gotoxy(5, 7);   cout<<"ya tienes una cuenta de cliente o eres empleado de Blockbuster y";
    gotoxy(5, 8);   cout<<"deseas realizar cambios a la base de datos, elige \"Ingresar\".";
    gotoxy(7, 11);  cout<<"CREAR CUENTA";
    gotoxy(7, 13);  cout<<"INGRESAR";
    gotoxy(5, 16);  cout<<"Presione <ESC>";
    gotoxy(5, 17);  cout<<"para volver";
    gotoxy(5, 18);  cout<<"atras";
    gotoxy(23,11);  cout<<"Nombre de usuario:";
    gotoxy(49,11);  cout<<"Contrase"<<char(164)<<"a:";
    gotoxy(5, 23);  cout<<"Utiliza las teclas de direccion para moverte entre campos.";
    // Renderizado de líneas
    for(int x=5; x<=69;x++)   { gotoxy(x, 10); cout<<"-"; }
    for(int x=20;x<=69;x++)   { gotoxy(x, 20); cout<<"-"; }
    for(int x=5; x<=20;x++)   { gotoxy(x, 14); cout<<"-"; }
    for(int x=6; x<=20;x++)   { gotoxy(x, 12); cout<<"-"; }
    for(int y=11;y<=13;y++)   { gotoxy(5, y);  cout<<"|"; } 
    for(int y=15;y<=19;y++)   { gotoxy(20,y);  cout<<"|"; }
    for(int y=11;y<=19;y++)   { gotoxy(69,y);  cout<<"|"; }
    for(int x=23;x<=40;x++)   { gotoxy(x, 13); cout<<"-"; }
    for(int x=49;x<=66;x++)   { gotoxy(x, 13); cout<<"-"; }
    gotoxy(20,11); cout<<"|"; gotoxy(5, 10); cout<<".";
    gotoxy(69,10); cout<<"."; gotoxy(5, 14); cout<<"*";
    gotoxy(20,20); cout<<"*"; gotoxy(69,20); cout<<"*";
    gotoxy(20,14); cout<<"."; gotoxy(20,12); cout<<"*";
    // Renderizado de botones
    gotoxy(39, 15); cout << "------------";
    gotoxy(39, 16); cout << "|  ENTRAR  |";
    gotoxy(39, 17); cout << "------------";
    // Mover cursor al input default (Nombre de usuario)
    gotoxy(23, 12);
  } else if (menu.compare("2_clientes")            == 0) {
    system("cls"); dibujarBordes();
    // ASCII Art 'Millenial Falcon' -> http://www.chris.com/ascii/
    gotoxy(28,5);   cout<<"                c==o"                         ;
    gotoxy(28,6);   cout<<"              _/____\\_"                      ;
    gotoxy(28,7);   cout<<"       _.,--'\" ||^ || \"`z._"                ;
    gotoxy(28,8);   cout<<"      /_/^ ___\\||  || _/o\\ \"`-._"          ;
    gotoxy(28,9);   cout<<"    _/  ]. L_| || .||  \\_/_  . _`--._"       ;
    gotoxy(28,10);  cout<<"   /_~7  _ . \" ||. || /] \\ ]. (_)  . \"`--.";
    gotoxy(28,11);  cout<<"  |__7~.(_)_ []|+--+|/____T_____________L|"   ;
    gotoxy(28,12);  cout<<"  |__|  _^(_) /^   __\\____ _   _|"           ;
    gotoxy(28,13);  cout<<"  |__| (_){_) J ]K{__ L___ _   _]"            ;
    gotoxy(28,14);  cout<<"  |__| . _(_) \v     /__________|________"    ;
    gotoxy(28,15);  cout<<"  l__l_ (_). []|+-+-<\\^   L  . _   - ---L|"  ;
    gotoxy(28,16);  cout<<"   \\__\\    __. ||^l  \\Y] /_]  (_) .  _,--'";
    gotoxy(28,17);  cout<<"     \\~_]  L_| || .\\ .\\/~.    _,--'\""     ;
    gotoxy(28,18);  cout<<"      \\_\\ . __/||  |\\  \\`-+-<'\""         ;
    gotoxy(28,19);  cout<<"        \"`---._|J__L|X o~~|[\\"              ;
    gotoxy(28,20);  cout<<"               \\____/ \\___|[//"             ;
    gotoxy(28,21);  cout<<"                `--'   `--+-'"                ;
    // Renderizado de texto
    gotoxy(18,2);   cout << "BLOCKBUSTER: VENTA Y RENTA DE PELICULAS";
    gotoxy(5, 5);   cout << "Que es lo que deseas hacer?";
    gotoxy(5, 7);   cout << "Menu:";
    gotoxy(5, 9);   cout << "1.- Tutorial/Creditos";
    gotoxy(5, 11);  cout << "2.- Buscador";
    gotoxy(5, 13);  cout << "3.- Membresias";
    gotoxy(5, 15);  cout << "4.- Catalogo";
    gotoxy(5, 17);  cout << "5.- Abonar Credito";
    gotoxy(5, 19);  cout << "6.- Cerrar Sesion";
    gotoxy(5, 23);  cout << "Opcion: ";
  } else if (menu.compare("2.1_tutorial_f1")       == 0) {
    system("cls"); dibujarBordes();
    // ASCII Art Lightbulb de Chris.com/ASCII
    gotoxy(53,8);  cout<<"    _------_"    ;
    gotoxy(53,9);  cout<<"  -~        ~-"  ;
    gotoxy(53,10); cout<<" -     _      -" ;
    gotoxy(53,11); cout<<"-      |>      -";
    gotoxy(53,12); cout<<"-      |<      -";
    gotoxy(53,13); cout<<" -     |>     -" ;
    gotoxy(53,14); cout<<"  -    ||    -"  ;
    gotoxy(53,15); cout<<"   -   ||   -"   ;
    gotoxy(53,16); cout<<"    -__||__-"    ;
    gotoxy(53,17); cout<<"    |______|"    ;
    gotoxy(53,18); cout<<"    <______>"    ;
    gotoxy(53,19); cout<<"    <______>"    ;
    gotoxy(53,20); cout<<"       \\/"      ;
    // Renderizado de texto
    gotoxy(28,2);  cout<<"COMO USAR ESTE SISTEMA";
    gotoxy(5, 5);  cout<<"Este programa es bastante intuitivo, sin embargo, si te preguntas";
    gotoxy(5, 6);  cout<<"como rentar y comprar peliculas, tienes dos opciones:";
    gotoxy(5, 8);  cout<<"1. Ir al menu 'Catalogo' y elegir el genero";
    gotoxy(5, 9);  cout<<"   o seccion que te interese. Despues, usar";
    gotoxy(5, 10); cout<<"   las teclas direccionales para situarte";
    gotoxy(5, 11); cout<<"   sobre la pelicula que desees comprar o";
    gotoxy(5, 12); cout<<"   rentar y luego presionar <ENTER>. Al hacer";
    gotoxy(5, 13); cout<<"   esto se te preguntara que quieres hacer.";

    gotoxy(5, 15); cout<<"2. Utilizar el menu 'Buscador' para poder";
    gotoxy(5, 16); cout<<"   realizar una busqueda por titulo en tiempo";
    gotoxy(5, 17); cout<<"   real. Solo tienes que ir escribiendo el";
    gotoxy(5, 18); cout<<"   nombre de la pelicula y cuando la o las";
    gotoxy(5, 19); cout<<"   peliculas que buscabas aparezcan en el";
    gotoxy(5, 20); cout<<"   listado, presiona <ENTER> para elegirlas.";
    gotoxy(5, 23); cout<<"Para salir del tutorial presiona <ESC> - Para leer los creditos <ENTER>";
    // Renderizado del botón '>'
    gotoxy(72,12); cout<<"===";
    gotoxy(72,13); cout<<"|>|";
    gotoxy(72,14); cout<<"==="; gotoxy(73,13);
  } else if (menu.compare("2.1_tutorial_f2")       == 0) {
    system("cls"); dibujarBordes(); system("color 5F");
    // Renderizado de texto
    gotoxy(32,2);  cout<<"ACERCA DE NOSOTROS";
    gotoxy(12,5);  cout<<"Este programa (v0.9 Alpha) fue desarrollado por el equipo";
    gotoxy(12,6);  cout<<"formado por las siguientes personas maravillosas:";
    gotoxy(12,8);  cout<<"# Diego Moreno: Coordenadas 'XY' y llenado de base de datos.";
    gotoxy(12,9);  cout<<"# Jose Luis:    Concepcion, ideas y estrategia general.";
    gotoxy(12,10); cout<<"# Itzel Tapia:  Debugueo, sugerencias y busqueda de peliculas.";
    gotoxy(12,11); cout<<"# Felipe Lopez: Codigo, correcciones, dise"<<char(164)<<"o y ejecucion.";
    gotoxy(5, 23); cout<<"Para volver al menu anterior, presiona <ESC>.";
    gotoxy(5, 23); cout<<"Presiona <ENTER> para volver al menu de clientes.";
    // ASCII Art 'South Park' - No recuerdo dónde lo saqué
    gotoxy(12,14); cout<<"      Luis             Itzel          Jose          Diego";
    gotoxy(12,15); cout<<"    .- <O> -.        .-====-.      ,-------.      .-=<>=-.";
    gotoxy(12,16); cout<<"   /_-\\'''/-_\\      / / '' \\ \\     |,-----.|     /__----__\\";
    gotoxy(12,17); cout<<"  |/  o) (o  \\|    | | ')(' | |   /,'-----'.\\   |/ (')(') \\|";
    gotoxy(12,18); cout<<"   \\   ._.   /      \\ \\    / /   {_/(') (')\\_}   \\   __   /";
    gotoxy(12,19); cout<<"   ,>-_,,,_-<.       >'=jf='<     `.   _   .'    ,'--__--'.";
    gotoxy(12,20); cout<<" /      .      \\    /        \\     /'-___-'\\    /    :|    \\";
    gotoxy(12,21); cout<<"(_)     .     (_)  /          \\   /         \\  (_)   :|   (_)";
    lostWoods();
    for(int y = 14; y <= 21; y += 1) {
      gotoxy(12,y); cout<<"                                "
                        <<"                                 ";
    } // Fin de borrar monitos de SP
    // Renderizar botones
    gotoxy(6,12);  cout<<"---";
    gotoxy(6,13);  cout<<"|<|";
    gotoxy(6,14);  cout<<"---";
    gotoxy(29,14); cout<<"========================";
    gotoxy(29,15); cout<<"|| SALIR DEL TUTORIAL ||";
    gotoxy(29,16); cout<<"========================";
    // Mover cursor al input default (Salir)
    gotoxy(32,15);
  } else if (menu.compare("2.2_buscador")          == 0) {
    system("cls"); dibujarBordes();
    gotoxy(3, 1);   cout<<"--------------------------------------"
                        <<"-------------------------------------";
    gotoxy(4, 3);   cout<<"-------------------------------------"
                        <<"------------------------------------";
    // ASCII Art de Chris.com
    gotoxy(49,6);  cout<<"  Todo por no   . | : .|  :"     ;
    gotoxy(49,7);  cout<<"  presionar     | . | : .||"     ;
    gotoxy(49,8);  cout<<"  ENTER...      : |. | . :: "    ;
    gotoxy(49,9);  cout<<"     \\   __     |.: |. :. |"    ;
    gotoxy(49,10); cout<<"       /  _)    | :|___ |:|"     ;
    gotoxy(49,11); cout<<"      |  (~o   (\\.|(___)  /)"   ;
    gotoxy(49,12); cout<<"      _\\/_/_    \\\\(_O O_)// " ;
    gotoxy(49,13); cout<<"     /      \\   .\\(_\\O/_)/:"  ;
    gotoxy(49,14); cout<<"    / /    \\ \\  :|\\/\\_/\\/ |";
    gotoxy(49,15); cout<<"    \\ |    | /  | .(_ _): |"    ;
    gotoxy(49,16); cout<<"     \\|____|/   .| /   \\ |:"   ;
    gotoxy(49,17); cout<<"      |_  _|    | /_____\\.| "   ;
    gotoxy(49,18); cout<<"      | |  |    : .| | | ."      ;
    gotoxy(49,19); cout<<"      | |  |    .  | | | ||"     ;
    gotoxy(49,20); cout<<"      |_|__|    | :|_|_| .:"     ;
    gotoxy(49,21); cout<<"      [__[__)   .: <_|_> .|"     ;
    // Renderizado de texto
    gotoxy(5, 23);  cout<<"Cuando acabes, presiona ENTER o usa el boton 'LISTO'";
    gotoxy(6, 12);  cout<<"<TUS RESULTADOS IRAN APARECIENDO AQUI>";
    // Renderizado de Botón
    gotoxy(67,2);   cout<<"|  LISTO  "; 
    // Enfocar cuadro de búsqueda
    gotoxy(6,2);
  } else if (menu.compare("2.2_buscador_f2")       == 0) {
    system("cls"); dibujarBordes();
    gotoxy(4, 3);   cout<<"                                     "
                        <<"                                    ";
    gotoxy(3, 1);   cout<<"--------------------------------------"
                        <<"-------------------------------------";
    gotoxy(4, 2);   cout<<"-------------------------------------"
                        <<"------------------------------------";
    for(int y=3; y<=21; y+=1) {
      gotoxy(49,y); cout<<"|";
    } // Fin de barrera
    gotoxy(53,5);   cout<<"---------------------";
    // Renderizado de texto;
    gotoxy(6, 3);   cout<<"Resultados encontrados:";
    gotoxy(53,4);   cout<<"DETALLES:";
    gotoxy(53,6);   cout<<"A"<<char(164)<<"o:";
    gotoxy(53,8);   cout<<"ID :";
    gotoxy(53,10);  cout<<"Genero  :";
    gotoxy(53,12);  cout<<"Duracion:";
    gotoxy(53,14);  cout<<"Precio: $";
    gotoxy(53,16);  cout<<"Disponiblidad:";
    gotoxy(53,18);  cout<<"(!) Para realizar";
    gotoxy(57,19);  cout<<"otra busqueda";
    gotoxy(57,20);  cout<<"presiona <ESC>";
    // Enfocar cuadro de primer puntero
    gotoxy(5,6); cout<<">"; gotoxy(5,6);
  } else if (menu.compare("2.3_membresias_nuevo")  == 0) {
    system("cls"); dibujarBordes();
    // Renderizado de texto
    gotoxy(35,2);   cout<<"MEMBRES"<<char(161)<<"AS";
    gotoxy(5, 5);   cout<<"Bienvenidos al programa de membres"<<char(161);
    gotoxy(39,5);   cout<<"as de Blockbuster. Parece que a"<<char(163)<<"n no";
    gotoxy(5, 6);   cout<<"est"<<char(160)<<"s afiliado al programa. Los beneficios son: ";
    gotoxy(5, 9);   cout<<"1: Tienes derecho a 3 pel"<<char(161)<<"culas";
    gotoxy(5, 10);  cout<<"rentadas como m"<<char(160)<<"ximo.";
    gotoxy(5, 12);  cout<<"2: Recibir"<<char(160)<<"s un descuento";
    gotoxy(5, 13);  cout<<"del 10% en tus compras.";
    gotoxy(5, 15);  cout<<"3: Tickets a estrenos en el";
    gotoxy(5, 16);  cout<<"cine durante festividades.";
    gotoxy(5, 23);  cout<<"Para volver al men"<<char(163)<<" anterior, presiona <ESC>.";
    // Dibujo de ASCII Art 'Totoro' -> http://www.asciiworld.com/-Mangas,48-.html
    gotoxy(40,8);   cout<<"           !         !          "       ;
    gotoxy(40,9);   cout<<"          ! !       ! !          "      ;
    gotoxy(40,10);  cout<<"         ! . !     ! . !          "     ;
    gotoxy(40,11);  cout<<"            ^^^^^^^^^ ^            "    ;
    gotoxy(40,12);  cout<<"          ^             ^          "    ;
    gotoxy(40,13);  cout<<"        ^  (0)       (0)  ^       "     ;
    gotoxy(40,14);  cout<<"       ^        \"\"         ^       "  ;
    gotoxy(40,15);  cout<<"      ^   ***************    ^     "    ;
    gotoxy(40,16);  cout<<"    ^   *                 *   ^    "    ;
    gotoxy(40,17);  cout<<"   ^   *   /\\   /\\   /\\    *    ^   ";
    gotoxy(40,18);  cout<<"  ^   *                     *    ^"     ;
    gotoxy(40,19);  cout<<" ^   *   /\\   /\\   /\\   /\\   *    ^";
    gotoxy(40,20);  cout<<"^   *                         *    ^"   ;
    gotoxy(40,21);  cout<<"^  *                           *   ^"   ;
    // Renderizado de botones
    gotoxy(5, 18);  cout<<"===============";
    gotoxy(5, 19);  cout<<"|| AFILIARME ||";
    gotoxy(5, 20);  cout<<"===============";

    gotoxy(22,18);  cout<<"------------";
    gotoxy(22,19);  cout<<"|  REGLAS  |";
    gotoxy(22,20);  cout<<"------------";
    // Mover cursor al botón default (AFILIARME)
    gotoxy(8, 19);
  } else if (menu.compare("2.3_membresias_reglas") == 0) {
    system("cls"); dibujarBordes();
    // Totoro por segunda vez, pero más arriba
    gotoxy(40,4);  cout<<"           !         !          "       ;
    gotoxy(40,5);  cout<<"          ! !       ! !          "      ;
    gotoxy(40,6);  cout<<"         ! . !     ! . !          "     ;
    gotoxy(40,7);  cout<<"            ^^^^^^^^^ ^            "    ;
    gotoxy(40,8);  cout<<"          ^             ^          "    ;
    gotoxy(40,9);  cout<<"        ^  (0)       (0)  ^       "     ;
    gotoxy(40,10); cout<<"       ^        \"\"         ^       "  ;
    gotoxy(40,11); cout<<"      ^   ***************    ^     "    ;
    gotoxy(40,12); cout<<"    ^   *                 *   ^    "    ;
    gotoxy(40,13); cout<<"   ^   *   /\\   /\\   /\\    *    ^   ";
    gotoxy(40,14); cout<<"  ^   *                     *    ^"     ;
    gotoxy(40,15); cout<<" ^   *   /\\   /\\   /\\   /\\   *    ^";
    gotoxy(40,16); cout<<"^   *                         *    ^"   ;
    gotoxy(40,17); cout<<"^  *                           *   ^"   ;
    gotoxy(40,18); cout<<"^  *                           *   ^"   ;
    gotoxy(40,19); cout<<" ^ *                           *  ^  "  ;
    gotoxy(40,20); cout<<"  ^*                           * ^ "    ;
    gotoxy(40,21); cout<<"   ^ *                        * ^"      ;
    // Renderizado de texto
    gotoxy(31,2);  cout<<"MEMBRESIAS: REGLAS";
    gotoxy(5, 5);  cout<<"1-Devolver las peliculas rentadas";
    gotoxy(7, 6);  cout<<"en tiempo y forma.";
    gotoxy(5, 8);  cout<<"2-Por cada dia de retraso se";
    gotoxy(7, 9);  cout<<"te descontara de tu credito.";
    gotoxy(5,11);  cout<<"3-Una vez que tu membresia expire";
    gotoxy(7,12);  cout<<"tendras que renovarla.";
    gotoxy(5,14);  cout<<"4-Si tienes adeudos o tienes 3";
    gotoxy(7,15);  cout<<"peliculas (limite de renta)";
    gotoxy(7,16);  cout<<"rentadas no podras rentar.";
    // Renderizado de botones
    gotoxy(13,18); cout<<"===============";
    gotoxy(13,19); cout<<"|| ENTENDIDO ||";
    gotoxy(13,20); cout<<"===============";
    // Mover cursor al botón default (AFILIARME)
    gotoxy(16,19);
  } else if (menu.compare("2.3_membresias_afil")   == 0) {
    system("cls"); dibujarBordes();
    // Renderizado de líneas
    gotoxy(6, 9);  cout << ".==============.";
    gotoxy(4,11);  cout << "__"; gotoxy(6,10);   cout << "||";
    gotoxy(6,11);  cout << "||"; gotoxy(20,10);  cout << "||";
    gotoxy(20,11); cout << "||"; gotoxy(36,10);  cout << "|";
    gotoxy(48,10); cout << "|";
    for(int x=22; x<=48; x++) {   gotoxy(x, 9);   cout <<"_"; }
    for(int x=22; x<=76; x++) {   gotoxy(x, 11);  cout <<"_"; }
    gotoxy(36,11); cout << "|";  gotoxy(48,11);  cout << "|";
    // Renderizado de texto
    gotoxy(5, 5);  cout<<"La membresia Blockbuster tiene un costo de 250 pesos.";
    gotoxy(5, 6);  cout<<"Si no tienes suficiente dinero no podras afiliarte, sugerimos que";
    gotoxy(5, 7);  cout<<"vayas al menu 'credito' para agregar mas fondos a tu cuenta.";
    gotoxy(31,2);  cout<<"MEMBRESIAS: AFILIARSE";
    gotoxy(9, 10); cout<<"EXPIRACION";
    gotoxy(23,10); cout<<"INFORMACION";
    gotoxy(38,10); cout<<"CONTRATO";
    gotoxy(19,14); cout<<"Tu membresia durara seis meses y expirara el:";
    gotoxy(27,16); cout<<"[  ] de [          ] del [    ]";
    // Renderizado de botones
    gotoxy(34,18); cout<<"===============";
    gotoxy(34,19); cout<<"|| ENTENDIDO ||";
    gotoxy(34,20); cout<<"===============";
    // Mover cursor al botón default (AFILIARME)
    gotoxy(37,19);
  } else if (menu.compare("2.3_membresias_ctrl")   == 0) {
    system("cls"); dibujarBordes();
    // Renderizado de texto
    gotoxy(31,2);  cout<<"MEMBRES"<<char(161)<<"AS: DETALLES ";
    gotoxy(5, 5);  cout<<"Bienvenid@ seas, a continuaci"<<char(162)<<
    "n se muestran   los detalles de tu ";
    gotoxy(5, 6);  cout<<"membres"<<char(161)<<"a, podr"<<char(160)<<
    "s consultar tus rentas, adeudos, d"<<char(161)<<"as restantes, etc.";
    gotoxy(5, 8);  cout<<"Hola,                         Pel"<<
    char(161)<<"cula rentada #1 ";
    gotoxy(5,10);  cout<<"Le quedan [   ] d"<<char(161)<<"as a tu     -----------------------------------------";
    gotoxy(5,11);  cout<<"suscripci"<<char(162)<<"n. Puedes renovar ";
    gotoxy(5,12);  cout<<"cuantas veces quieras a un ";
    gotoxy(5,13);  cout<<"costo de $250 pesos.          Pel"<<char(161)<<"cula rentada #2";
    gotoxy(5,23);  cout<<"Para volver al men"<<char(163)<<" anterior, presiona <ESC>.";
    // Renderizado de botones
    gotoxy(5,15);  cout<<"========================      "<<"----------------------------------------- ";
    gotoxy(5,16);  cout<<"|| DEVOLVER PEL"<<char(161)<<"CULAS ||";
    gotoxy(5,17);  cout<<"========================";
    gotoxy(35,18); cout<<"Pel"<<char(161)<<"cula rentada #3";
    gotoxy(5,19);  cout<<"----------  -------------";
    gotoxy(5,20);  cout<<"|  BAJA  |  |  RENOVAR  |     "<<"----------------------------------------- ";
    gotoxy(5,21);  cout<<"----------  -------------";
    // Colocar el puntero en el botón 'Devolver'
    gotoxy(8,16);
  } else if (menu.compare("2.3_membresias_devol")  == 0) {
    system("cls"); dibujarBordes();
    // Renderizado de texto
    gotoxy(29,2);   cout<<"MEMBRES"<<char(161)<<"AS: DEVOLUCI"<<char(162)<<"N";
    gotoxy(5,5);    cout<<"Si est"<<char(160)<<"s devolviendo pel"<<
    char(161)<<"culas por atraso, tendr"<<char(160)<<"s que primero ir";
    gotoxy(5,6);    cout<<"al men"<<char(163)<<" de 'Cr"<<char(130)<<
    "dito' y cubrir el saldo negativo (adeudo) abonando ";
    gotoxy(5,7);    cout<<"a tu cuenta el equivalente del adeudo.";
    gotoxy(5,9);    cout<<"Marca las pel"<<char(161)<<
    "culas que deseas devolver presionando <ENTER>: ";
    gotoxy(5,23);   cout<<"Utiliza las teclas direccionales para moverte.";
    // Renderizado de botones
    gotoxy(56,11);  cout<<"--------------";
    gotoxy(56,12);  cout<<"|  DEVOLVER  |";
    gotoxy(56,13);  cout<<"--------------";
    gotoxy(56,15);  cout<<"--------------";
    gotoxy(56,16);  cout<<"|  CANCELAR  |";
    gotoxy(56,17);  cout<<"--------------";
    // Enfocar el botón default 'Devolver'
    gotoxy(6, 12);
  } else if (menu.compare("2.4_catalogo_f1")       == 0) {
    system("cls"); dibujarBordes();
    // Renderizado de texto
    gotoxy(28,2);   cout<<"CATALOGO DE PELICULAS";
    gotoxy(5, 5);   cout<<"En este men"<<char(163)<<" podr"<<char(160)<<"s consultar";
    gotoxy(35,5);   cout<<"todas las peliculas que tenemos y podr"<<char(160)<<"s";
    gotoxy(5, 6);   cout<<"comprar o rentarlas desde aqu"<<char(161);
    gotoxy(35,6);   cout<<". Desplaz"<<char(160)<<"te utilizando las teclas de";
    gotoxy(5, 7);   cout<<"direcci"<<char(162)<<"n y presiona <ENTER>";
    gotoxy(34,7);   cout<<"cuando quieras consultar esa categor"<<char(161)<<"a.";
    gotoxy(5, 23);  cout<<"Para volver al men"<<char(163)<<" anterior, presiona <ESC>.";
    // Renderizado de botones
    gotoxy(5, 10);  cout<<"============";
    gotoxy(5, 11);  cout<<"|| HORROR ||";
    gotoxy(5, 12);  cout<<"============";
    gotoxy(19,10);  cout<<"------------";
    gotoxy(19,11);  cout<<"|  SCI-FI  |";
    gotoxy(19,12);  cout<<"------------";
    gotoxy(33,10);  cout<<"-----------";
    gotoxy(33,11);  cout<<"|  DRAMA  |";
    gotoxy(33,12);  cout<<"-----------";
    gotoxy(46,10);  cout<<"--------------";
    gotoxy(46,11);  cout<<"|  AVENTURA  |";
    gotoxy(46,12);  cout<<"--------------";
    gotoxy(62,10);  cout<<"------------";
    gotoxy(62,11);  cout<<"|  ACCION  |";
    gotoxy(62,12);  cout<<"------------";
    gotoxy(9, 14);  cout<<"--------------";
    gotoxy(9, 15);  cout<<"|  BIOGRAFIA |";
    gotoxy(9, 16);  cout<<"--------------";
    gotoxy(25,14);  cout<<"-------------";
    gotoxy(25,15);  cout<<"|  COMEDIA  |";
    gotoxy(25,16);  cout<<"-------------";
    gotoxy(40,14);  cout<<"-------------";
    gotoxy(40,15);  cout<<"|  ROMANCE  |";
    gotoxy(40,16);  cout<<"-------------";
    gotoxy(55,14);  cout<<"---------------";
    gotoxy(55,15);  cout<<"|  DOCUMENTAL |";
    gotoxy(55,16);  cout<<"---------------";
    gotoxy(25,18);  cout<<"--------------";
    gotoxy(25,19);  cout<<"|  ESTRENOS  |";
    gotoxy(25,20);  cout<<"--------------";
    gotoxy(41,18);  cout<<"---------------";
    gotoxy(41,19);  cout<<"|  EN REMATE  |";
    gotoxy(41,20);  cout<<"---------------";
    // Mover cursor al botón default (CREAR CUENTA)
    gotoxy(8, 11);
  } else if (menu.compare("2.4_catalogo_f2")       == 0) {
    system("cls"); dibujarBordes();
    // Renderizado de texto
    gotoxy(31,2);   cout<<"CATALOGO:";
    gotoxy(4, 4);   cout<<">";
    gotoxy(57,4);   cout<<"Precio: $";
    gotoxy(57,6);   cout<<"Duraci"<<char(162)<<"n:";
    gotoxy(57,8);   cout<<"G"<<char(130)<<"nero:";
    gotoxy(57,10);  cout<<"Disponibilidad:";
    gotoxy(57,12);  cout<<"A"<<char(164)<<"o:";
    gotoxy(69,12);  cout<<"ID:";
    gotoxy(4, 16);  cout<<" < |  Presiona ENTER para rentarla o comprarla  | > ";
    gotoxy(63,16);  cout<<"Sinopsis";
    gotoxy(5, 23);  cout<<"Para volver al men"<<char(163)<<" anterior, presiona <ESC>.";
    // Renderlizado de líneas
    for(int x=4; x<=55;x++)    { gotoxy(x, 15);  cout<<"_"; }
    for(int x=4; x<=59;x++)    { gotoxy(x, 17);  cout<<"_"; }
    for(int x=60;x<=74;x++)    { gotoxy(x, 15);  cout<<"_"; }
    for(int x=75;x<=76;x++)    { gotoxy(x, 17);  cout<<"_"; }
    for(int y=4; y<=17;y++)    { gotoxy(56,y);   cout<<"|"; }
    for(int y=16;y<=17;y++)    { gotoxy(60,y);   cout<<"|"; }
    for(int y=16;y<=17;y++)    { gotoxy(74,y);   cout<<"|"; }
    gotoxy(60,15);  cout<<"."; gotoxy(74,15); cout<<".";
    gotoxy(7, 17);  cout<<"|"; gotoxy(52,17); cout<<"|";
    // Mover cursor al input default (Película a buscar)
    gotoxy(4, 4);
  } else if (menu.compare("2.5_credito")           == 0) {
    system("cls"); dibujarBordes();
    // Renderizado de texto
    gotoxy(35,2);   cout<<"$ CR"<<char(144)<<"DITO $ ";
    gotoxy(5,5);    cout<<"Desde aqu"<<char(161)<<" podr"<<char(160)
    <<"s consultar el cr"<<char(130)<<"dito con el que dispones. ";
    gotoxy(5,6);    cout<<"Si te acabas de registrar, tendr"<<char(160)
    <<"s $0 y necesitar"<<char(160)<<"s agregar dinero ";
    gotoxy(5,7);    cout<<"a tu cuenta. Sin cr"<<char(130)<<"dito no podr"
    <<char(160)<<"s comprar pel"<<char(161)<<"culas. ";
    gotoxy(5,9);    cout<<"Usuario: ";
    gotoxy(5,14);   cout<<"Balance: ";
    gotoxy(5,20);   cout<<"L"<<char(161)<<"mite: $9999.00";
    gotoxy(5,23);   cout<<"Un saldo negativo significa adeudo"<<
    ", abona para eliminarlo.";
    // ASCII Art Dados http://www.chris.com/ascii/index.php?art=objects/dice
    gotoxy(32,14);  cout<<"   _______             _______          ";
    gotoxy(32,15);  cout<<"  /\\ o o o\\           /\\ o o o\\         ";
    gotoxy(32,16);  cout<<" /o \\ o o o\\_______  /o \\ o o o\\_______ ";
    gotoxy(32,17);  cout<<"*    *------*   o /|*    *------*   o /|";
    gotoxy(32,18);  cout<<" \\ o/  o   /_____/o| \\ o/  o   /_____/o|";
    gotoxy(32,19);  cout<<"  \\/______/     |oo|  \\/______/     |oo|";
    gotoxy(32,20);  cout<<"        |   o   |o/         |   o   |o/ ";
    gotoxy(32,21);  cout<<"        |_______|/          |_______|/  ";
    // Renderizado de botones y recuadros
    gotoxy(5,10);   cout<<"*------------------*";
    gotoxy(5,11);   cout<<"|                  |";
    gotoxy(5,12);   cout<<"*------------------*";
    gotoxy(5,15);   cout<<"*-----------*";
    gotoxy(5,16);   cout<<"|$          |";
    gotoxy(5,17);   cout<<"*-----------*";
    gotoxy(36,9);   cout<<"============  ------------------";
    gotoxy(36,10);  cout<<"|| ABONAR ||  |  VOLVER ATRAS  |";
    gotoxy(36,11);  cout<<"============  ------------------";
  } else if (menu.compare("2.5_credito_f2")        == 0) {
    system("cls"); dibujarBordes();
    // Renderizado de texto
    gotoxy(35,2);  cout<<"$ CR"<<char(144)<<"DITO $ ";
    gotoxy(5, 5);  cout<<"Desde aqu"<<char(161)<<" podr"<<char(160)<<
    "s consultar el cr"<<char(130)<<"dito con el que dispones. ";
    gotoxy(5, 6);  cout<<"Si te acabas de registrar, tendr"<<char(160)<<
    "s $0 y necesitar"<<char(160)<<"s agregar dinero ";
    gotoxy(5, 7);  cout<<"a tu cuenta. Sin cr"<<char(130)<<"dito no podr"<<
    char(160)<<"s comprar pel"<<char(161)<<"culas. ";
    gotoxy(5, 9);  cout<<"Usuario: ";
    gotoxy(5,14);  cout<<"Balance: ";
    gotoxy(5,20);  cout<<"L"<<char(161)<<"mite: $9999.0";
    gotoxy(36,9);  cout<<"Monto abonado:";
    gotoxy(36,10); cout<<"$";
    gotoxy(5,23);  cout<<"Utiliza las teclas direccionales para moverte.";
    // Renderizado de recuadros
    gotoxy(5,15);  cout<<"*-----------*";
    gotoxy(5,16);  cout<<"|$          |";
    gotoxy(5,17);  cout<<"*-----------*";
    gotoxy(5,10);  cout<<"*------------------*";
    gotoxy(5,11);  cout<<"|                  | ";
    gotoxy(5,12);  cout<<"*------------------*";
    gotoxy(36,11); cout<<"--------------";
    gotoxy(36,13); cout<<"   ";
    gotoxy(36,14); cout<<"[ ] Abonar a otra persona";
    gotoxy(36,15); cout<<"   ";
    // Renderizado de botones
    gotoxy(36,17); cout<<"------------  --------------";
    gotoxy(36,18); cout<<"|  ABONAR  |  |  REGRESAR  |";
    gotoxy(36,19); cout<<"------------  --------------";
    // Enfocar el input default
    gotoxy(37,10);
  } else if (menu.compare("3_empleados")           == 0) {
    system("cls");
    cout << "Menu de empleados!" << endl;
  } // Fin de dibujar menú indicado
} // Fin de mostrar menu principal

void esperarRespuesta(string menuSiguiente) {
  char tecla = 0; // Permite entrar al ciclo
  while (tecla != ENTER) {
    tecla = getch();
    if (tecla == ENTER) {
      dibujarMenu(menuSiguiente);
    } // Fin de aceptar
  } // Fin de esperar ENTER
} // Espera que el usuario presionte ENTER

void limpiarZona(string menu, int zona = 0) {
  if (menu.compare("2.4_catalogo_f2")            == 0) {
    switch(zona) {
      case 0: // Lista de películas
        for(int x=4, y=4; y<=14; y+=1) {
          gotoxy(x,y);
          cout << "                          "
               << "                          ";
        } break; // Fin de llenar con espacio blanco
      case 1: // Área de punteros '>'
        for(int x=4, y=4; y<=14; y+=1) {
          gotoxy(x,y); cout << " ";
        } break; // Fin de llenar con espacio blanco
      case 2: // Detalles y sinopsis de película
        gotoxy(66, 4); cout << "      "      ;  // Precio
        gotoxy(67, 6); cout << "       "     ;  // Duración
        gotoxy(65, 8); cout << "            ";  // Género
        gotoxy(73,10); cout << "   "         ;  // Stock
        gotoxy(62,12); cout << "    "        ;  // Año
        gotoxy(73,12); cout << "   "         ;  // MovieID
        // Borrar sinopsis
        for(int x=4, y=18; y<=21; y+=1) {
          gotoxy(x,y);
          cout << "                                     "
          <<      "                                    ";
        } break; // Fin de llenar con espacio blanco
    } // Fin de detectar zona a limpiar
  } else if (menu.compare("resultados")          == 0) {
    for(int y = 5; y <= 21; y += 1) {
      gotoxy(5, y); cout<<"                      "
                        <<"                      ";
    }  // Fin de llenar de espacios
  } else if (menu.compare("2.3_membresias_afil") == 0) {
    int limiteY;
    switch(zona) {
      case 0: limiteY = 17; break; // Botón intacto
      case 1: limiteY = 21; break; // Se borra hasta el botón
    } // Fin de delimitar borrado
    for(int y = 13, x = 5; y <= limiteY; y+=1) {
      gotoxy(x,y);  cout<<"                                    ";
                    cout<<"                                   ";
    }
  } else if (menu.compare("2.5_credito")         == 0) {
    switch(zona) {
      case 0: // Usuario y monto
        gotoxy(6,11); cout << "                  ";
        gotoxy(7,16); cout << "         ";
      break;
    }
  } else if (menu.compare("2.2_buscador_f2")     == 0) {
    short int yI=8, yA=6, yG=10, yD=12, yP=14, yS=16,
              xI=58,xA=58,xG=63, xD=63, xP=62, xS=69;
    gotoxy(xI,yI);  cout<<"   ";
    gotoxy(xA,yA);  cout<<"    ";
    gotoxy(xG,yG);  cout<<"          ";
    gotoxy(xD,yD);  cout<<"       ";
    gotoxy(xP,yP);  cout<<"    ";
    gotoxy(xS,yS);  cout<<"   ";
  } else if (menu.compare("punteros_listado")    == 0) {
    for(int y=6; y<=18; y+=1) {
      gotoxy(5,y); cout<<" ";
    } // Limpiar columna de cursores '>'
  } // Fin de revisar en qué menú trabajar
} // Fin de borrar zonas de contenido

void enfocarElemento(string menu, int elemento, int i=0) {
  if (menu.compare("1_principal") == 0) {
    switch(elemento) {
      case 0: // Crear Cuenta
        gotoxy(24,13); cout << "==================";
        gotoxy(24,14); cout << "|| CREAR CUENTA ||";
        gotoxy(24,15); cout << "==================";
        gotoxy(43,13); cout << "--------------";
        gotoxy(43,14); cout << "|  INGRESAR  |";
        gotoxy(43,15); cout << "--------------";
        gotoxy(27,14); break;
      case 1: // Entrar 'Log-In'
        gotoxy(24,13); cout << "------------------";
        gotoxy(24,14); cout << "|  CREAR CUENTA  |";
        gotoxy(24,15); cout << "------------------";
        gotoxy(43,13); cout << "==============";
        gotoxy(43,14); cout << "|| INGRESAR ||";
        gotoxy(43,15); cout << "==============";
        gotoxy(47,14); break;
    } // Fin de enfocar
  } else if (menu.compare("1_principal_login")    == 0) {
    switch(elemento) {
      case 0: // Nombre de usuario
        gotoxy(23,12); cout<<"                  ";
        gotoxy(39,15); cout << "------------";
        gotoxy(39,16); cout << "|  ENTRAR  |";
        gotoxy(39,17); cout << "------------";
        gotoxy(23,12); break;
      case 1: // Contraseña
        gotoxy(49,12); cout<<"                  ";
        gotoxy(39,15); cout << "------------";
        gotoxy(39,16); cout << "|  ENTRAR  |";
        gotoxy(39,17); cout << "------------";
        gotoxy(49,12); break;
      case 2: // Botón 'Entrar'
        gotoxy(39,15); cout << "============";
        gotoxy(39,16); cout << "|| ENTRAR ||";
        gotoxy(39,17); cout << "============";
        gotoxy(42,16); break;
    }
  } else if (menu.compare("1_principal_registro") == 0) {
    switch(elemento) {
      case 0: // Nombre de usuario
        gotoxy(23,12); cout<<"                  ";
        gotoxy(57,16); cout << "-----------";
        gotoxy(57,17); cout << "|  LISTO  |";
        gotoxy(57,18); cout << "-----------";
        gotoxy(23,12); break;
      case 1: // Contraseña
        gotoxy(23,17); cout<<"                  ";
        gotoxy(57,16); cout << "-----------";
        gotoxy(57,17); cout << "|  LISTO  |";
        gotoxy(57,18); cout << "-----------";
        gotoxy(23,17); break;
      case 2: // Repetir contraseña
        gotoxy(50,12); cout<<"                  ";
        gotoxy(57,16); cout << "-----------";
        gotoxy(57,17); cout << "|  LISTO  |";
        gotoxy(57,18); cout << "-----------";
        gotoxy(50,12); break;
      case 3: // Botón 'Listo'
        gotoxy(57,16); cout << "===========";
        gotoxy(57,17); cout << "|| LISTO ||";
        gotoxy(57,18); cout << "===========";
        gotoxy(60,17); break;
    }
  } else if (menu.compare("2_clientes")           == 0) {
    switch(elemento) {
      case 0: gotoxy(13,23);
        cout << "                                     ";
        gotoxy(13,23); break;
    }
  } else if (menu.compare("2.2_buscador")         == 0) {
    switch(elemento) {
      case 0: // Cuadro de búsqueda
        gotoxy(6,2);  cout<<"                              "
                          <<"                             ";
        limpiarZona("resultados");
        gotoxy(6, 12);  cout<<"<TUS RESULTADOS IRAN APARECIENDO AQUI>";
        // Desenfocar botón 'Listo'
        gotoxy(67,1); cout << "-----------";
        gotoxy(67,2); cout << "|  LISTO  |";
        gotoxy(67,3); cout << "----------|";
        // Enfocar input de destino
        gotoxy(6, 2);
      break;

      case 1: // Botón 'Listo'
        gotoxy(67,1); cout << "===========";
        gotoxy(67,2); cout << "|| LISTO ||";
        gotoxy(67,3); cout << "===========";
        // Enfocar input de destino
        gotoxy(70,2);
      break;
    }
  } else if (menu.compare("2.4_catalogo_f1")      == 0) {
    // Volver a renderizar los botones (sin enfoque)
    gotoxy(5, 10);  cout<<"------------";
    gotoxy(5, 11);  cout<<"|  HORROR  |";
    gotoxy(5, 12);  cout<<"------------";
    gotoxy(19,10);  cout<<"------------";
    gotoxy(19,11);  cout<<"|  SCI-FI  |";
    gotoxy(19,12);  cout<<"------------";
    gotoxy(33,10);  cout<<"-----------";
    gotoxy(33,11);  cout<<"|  DRAMA  |";
    gotoxy(33,12);  cout<<"-----------";
    gotoxy(46,10);  cout<<"--------------";
    gotoxy(46,11);  cout<<"|  AVENTURA  |";
    gotoxy(46,12);  cout<<"--------------";
    gotoxy(62,10);  cout<<"------------";
    gotoxy(62,11);  cout<<"|  ACCION  |";
    gotoxy(62,12);  cout<<"------------";
    gotoxy(9, 14);  cout<<"--------------";
    gotoxy(9, 15);  cout<<"|  BIOGRAFIA |";
    gotoxy(9, 16);  cout<<"--------------";
    gotoxy(25,14);  cout<<"-------------";
    gotoxy(25,15);  cout<<"|  COMEDIA  |";
    gotoxy(25,16);  cout<<"-------------";
    gotoxy(40,14);  cout<<"-------------";
    gotoxy(40,15);  cout<<"|  ROMANCE  |";
    gotoxy(40,16);  cout<<"-------------";
    gotoxy(55,14);  cout<<"---------------";
    gotoxy(55,15);  cout<<"|  DOCUMENTAL |";
    gotoxy(55,16);  cout<<"---------------";
    gotoxy(25,18);  cout<<"--------------";
    gotoxy(25,19);  cout<<"|  ESTRENOS  |";
    gotoxy(25,20);  cout<<"--------------";
    gotoxy(41,18);  cout<<"---------------";
    gotoxy(41,19);  cout<<"|  EN REMATE  |";
    gotoxy(41,20);  cout<<"---------------";
    // Enfocar el elemento adecuado
    switch(elemento) {
      case 0:
        gotoxy(5, 10);  cout<<"============";
        gotoxy(5, 11);  cout<<"|| HORROR ||";
        gotoxy(5, 12);  cout<<"============";
        gotoxy(8, 11);  break;
      case 1:
        gotoxy(19,10);  cout<<"============";
        gotoxy(19,11);  cout<<"|| SCI-FI ||";
        gotoxy(19,12);  cout<<"============";
        gotoxy(22,11);  break;
      case 2: 
        gotoxy(33,10);  cout<<"===========";
        gotoxy(33,11);  cout<<"|| DRAMA ||";
        gotoxy(33,12);  cout<<"===========";
        gotoxy(36,11);  break;
      case 3:
        gotoxy(46,10);  cout<<"==============";
        gotoxy(46,11);  cout<<"|| AVENTURA ||";
        gotoxy(46,12);  cout<<"==============";
        gotoxy(49,11);  break;
      case 4:
        gotoxy(62,10);  cout<<"============";
        gotoxy(62,11);  cout<<"|| ACCION ||";
        gotoxy(62,12);  cout<<"============";
        gotoxy(65,11);  break;
      case 5:
        gotoxy(9, 14);  cout<<"==============";
        gotoxy(9, 15);  cout<<"|| BIOGRAFIA||";
        gotoxy(9, 16);  cout<<"==============";
        gotoxy(12,15);  break;
      case 6:
        gotoxy(25,14);  cout<<"=============";
        gotoxy(25,15);  cout<<"|| COMEDIA ||";
        gotoxy(25,16);  cout<<"=============";
        gotoxy(28,15);  break;
      case 7:
        gotoxy(40,14);  cout<<"=============";
        gotoxy(40,15);  cout<<"|| ROMANCE ||";
        gotoxy(40,16);  cout<<"=============";
        gotoxy(43,15);  break;
      case 8:
        gotoxy(55,14);  cout<<"===============";
        gotoxy(55,15);  cout<<"|| DOCUMENTAL||";
        gotoxy(55,16);  cout<<"===============";
        gotoxy(58,15);  break;
      case 9:
        gotoxy(25,18);  cout<<"==============";
        gotoxy(25,19);  cout<<"|| ESTRENOS ||";
        gotoxy(25,20);  cout<<"==============";
        gotoxy(28,19);  break;
      case 10:
        gotoxy(41,18);  cout<<"===============";
        gotoxy(41,19);  cout<<"|| EN REMATE ||";
        gotoxy(41,20);  cout<<"===============";
        gotoxy(44,19);  break;
    }
  } else if (menu.compare("2.3_membresias_nuevo") == 0) {
    switch(elemento) {
      case 0: // Afiliarme
        gotoxy(5, 18);  cout<<"===============";
        gotoxy(5, 19);  cout<<"|| AFILIARME ||";
        gotoxy(5, 20);  cout<<"===============";
        gotoxy(22,18);  cout<<"------------";
        gotoxy(22,19);  cout<<"|  REGLAS  |";
        gotoxy(22,20);  cout<<"------------";
        gotoxy(8,19);   break;
      case 1: // Reglas
        gotoxy(5, 18);  cout<<"---------------";
        gotoxy(5, 19);  cout<<"|  AFILIARME  |";
        gotoxy(5, 20);  cout<<"---------------";
        gotoxy(22,18);  cout<<"============";
        gotoxy(22,19);  cout<<"|| REGLAS ||";
        gotoxy(22,20);  cout<<"============";
        gotoxy(25,19);  break;
    }
  } else if (menu.compare("2.3_membresias_afil")  == 0) {
    // Renderizar pestaña activa
    switch(elemento) { // Pestaña
      case 1: // Pestaña de Información
        limpiarZona("2.3_membresias_afil", 0);
        // Re-renderización de pestaña activa
        gotoxy(6,9);   cout<<"______________.===============.____________";
        gotoxy(6,10);  cout<<"|  EXPIRACION || INFORMACION || CONTRATO  |";
        gotoxy(6,11);  cout<<"|_____________||             ||___________|";
        // Renderizado de texto
        gotoxy(19,14); cout<<"EL costo de una renta es de $20 pesos, la";
        gotoxy(19,15); cout<<"renta durara 1 mes incluyendo fines de semana.";
        gotoxy(19,16); cout<<"Tu mismo te podras dar de baja posteriormente.";
        gotoxy(37,19); break;
      case 2: // Pestaña de Contrato
        limpiarZona("2.3_membresias_afil", 1);
        // Re-renderización de pestaña activa
        gotoxy(6,9);   cout<<"_____________________________.============.";
        gotoxy(6,10);  cout<<"|  EXPIRACION  | INFORMACION || CONTRATO ||";
        gotoxy(6,11);  cout<<"|______________|_____________||          ||";
        // Renderizado de texto
        gotoxy(19,14); cout<<"-Acepto que se me sustraigan $5 pesos por cada dia";
        gotoxy(19,15); cout<<" de atraso en mis rentas.";
        gotoxy(19,16); cout<<"-Entiendo que debo cubrir cualquier adeudo negativo.";
        // Renderizado de botones
        gotoxy(28,18); cout<<"===============  --------------";
        gotoxy(28,19); cout<<"|| AFILIARME ||  |  CANCELAR  |";
        gotoxy(28,20); cout<<"===============  --------------";
        // Enfocar el botón 'Afiliarme'
        gotoxy(31,19); break;
      case 3: // Botón de 'Afiliarme'
        gotoxy(28,18); cout<<"===============  --------------";
        gotoxy(28,19); cout<<"|| AFILIARME ||  |  CANCELAR  |";
        gotoxy(28,20); cout<<"===============  --------------";
        gotoxy(31,19); break;
      case 4: // Botón de 'Cancelar'
        gotoxy(28,18); cout<<"---------------  ==============";
        gotoxy(28,19); cout<<"|  AFILIARME  |  || CANCELAR ||";
        gotoxy(28,20); cout<<"---------------  ==============";
        gotoxy(48,19); break;
    }
  } else if (menu.compare("2.3_membresias_ctrl") == 0) {
    switch(elemento) {
      case 0: // Devolver películas
        gotoxy(5,15);  cout<<"========================";
        gotoxy(5,16);  cout<<"|| DEVOLVER PELICULAS ||";
        gotoxy(5,17);  cout<<"========================";
        gotoxy(5,19);  cout<<"----------  -------------";
        gotoxy(5,20);  cout<<"|  BAJA  |  |  RENOVAR  |";
        gotoxy(5,21);  cout<<"----------  -------------";
        gotoxy(8,16);  break;
      case 1: // Darse de baja
        gotoxy(5,15);  cout<<"------------------------";
        gotoxy(5,16);  cout<<"|  DEVOLVER PELICULAS  |";
        gotoxy(5,17);  cout<<"------------------------";
        gotoxy(5,19);  cout<<"==========  -------------";
        gotoxy(5,20);  cout<<"|| BAJA ||  |  RENOVAR  |";
        gotoxy(5,21);  cout<<"==========  -------------";
        gotoxy(8,20);  break;
      case 2: // Renovar membresía
        gotoxy(5,15);  cout<<"------------------------";
        gotoxy(5,16);  cout<<"|  DEVOLVER PELICULAS  |";
        gotoxy(5,17);  cout<<"------------------------";
        gotoxy(5,19);  cout<<"----------  =============";
        gotoxy(5,20);  cout<<"|  BAJA  |  || RENOVAR ||";
        gotoxy(5,21);  cout<<"----------  =============";
        gotoxy(20,20); break;
    }
  } else if (menu.compare("2.5_credito")          == 0) {
    switch(elemento) {
      case 0: // Boton de abonar crédito
        gotoxy(36,9);  cout<<"============  ------------------";
        gotoxy(36,10); cout<<"|| ABONAR ||  |  VOLVER ATRAS  |";
        gotoxy(36,11); cout<<"============  ------------------";
        gotoxy(39,10); break;
      case 1: // Botón de volver atrás
        gotoxy(36,9);  cout<<"------------  ==================";
        gotoxy(36,10); cout<<"|  ABONAR  |  || VOLVER ATRAS ||";
        gotoxy(36,11); cout<<"------------  ==================";
        gotoxy(53,10); break;
    }
  } else if (menu.compare("2.5_credito_f2")       == 0) {
    switch(elemento) {
      case 0: // Monto abonado
        // Desenfocar los botones
        gotoxy(36,17); cout<<"------------  --------------";
        gotoxy(36,18); cout<<"|  ABONAR  |  |  REGRESAR  |";
        gotoxy(36,19); cout<<"------------  --------------";
        gotoxy(36,13); cout<<"                                    ";
        gotoxy(36,14); cout<<"["                                   ;
        gotoxy(38,14); cout<<"] Abonar a otra persona           "  ;
        gotoxy(36,15); cout<<"                                    ";
        gotoxy(37,10); cout<<"             ";
        gotoxy(37,10); break;
      case 1: // Beneficiario (Opcional)
        // Desenfocar los botones
        gotoxy(36,17); cout<<"------------  --------------";
        gotoxy(36,18); cout<<"|  ABONAR  |  |  REGRESAR  |";
        gotoxy(36,19); cout<<"------------  --------------";
        gotoxy(36,13); cout<<"                                    ";
        gotoxy(36,14); cout<<"["                                   ;
        gotoxy(38,14); cout<<"] Abonar a otra persona           "  ;
        gotoxy(36,15); cout<<"                                    ";
        gotoxy(52,10); cout<<"                  ";
        gotoxy(52,10); break;
      case 2: // Checkbox
        // Desenfocar los botones
        gotoxy(36,17); cout<<"------------  --------------";
        gotoxy(36,18); cout<<"|  ABONAR  |  |  REGRESAR  |";
        gotoxy(36,19); cout<<"------------  --------------";
        gotoxy(36,13); cout<<" =                                  ";
        gotoxy(36,14); cout<<"["                                   ;
        gotoxy(38,14); cout<<"] (!) Presiona ENTER para activar "  ;
        gotoxy(36,15); cout<<" =      o desactivar esta opcion.   ";
        gotoxy(37,14); break;
      case 3: // Abonar
        // Enfocar el botón necesario
        gotoxy(36,17); cout<<"============  --------------";
        gotoxy(36,18); cout<<"|| ABONAR ||  |  REGRESAR  |";
        gotoxy(36,19); cout<<"============  --------------";
        gotoxy(36,13); cout<<"                                    ";
        gotoxy(36,14); cout<<"["                                   ;
        gotoxy(38,14); cout<<"] Abonar a otra persona           "  ;
        gotoxy(36,15); cout<<"                                    ";
        gotoxy(39,18); break;
      case 4: // Cancelar
        // Enfocar el botón necesario
        gotoxy(36,17); cout<<"------------  ==============";
        gotoxy(36,18); cout<<"|  ABONAR  |  || REGRESAR ||";
        gotoxy(36,19); cout<<"------------  ==============";
        gotoxy(36,13); cout<<"                                    ";
        gotoxy(36,14); cout<<"["                                   ;
        gotoxy(38,14); cout<<"] Abonar a otra persona           "  ;
        gotoxy(36,15); cout<<"                                    ";
        gotoxy(53,18); break;
    }
  } else if (menu.compare("submenu_opciones")     == 0) {
    switch(elemento) {
      case 0:
      gotoxy(8,7+i); cout<<   "-------------------------------------"   ;
      gotoxy(5,8+i); cout<<"   || SINOPSIS ||  RENTAR  |  COMPRAR  |   ";
      gotoxy(5,9+i); cout<<"   *============*----------*-----------*   ";
      gotoxy(11,8+i); break;
      case 1:
      gotoxy(8,7+i); cout<<   "-------------------------------------"   ;
      gotoxy(5,8+i); cout<<"   |  SINOPSIS  || RENTAR ||  COMPRAR  |   ";
      gotoxy(5,9+i); cout<<"   *------------*==========*-----------*   ";
      gotoxy(24,8+i); break;
      case 2:
      gotoxy(8,7+i); cout<<   "-------------------------------------"   ;
      gotoxy(5,8+i); cout<<"   |  SINOPSIS  |  RENTAR  || COMPRAR ||   ";
      gotoxy(5,9+i); cout<<"   *------------*----------*===========*   ";
      gotoxy(35,8+i); break;
    }
  } else if (menu.compare("ventana_opciones")     == 0) {
    switch(elemento) {
      case 0: // Botón de cerrar
        gotoxy(61,7);  cout<<"=====";
        gotoxy(61,8);  cout<<"||X||";
        gotoxy(61,9);  cout<<"=====";
        gotoxy(25,15); cout<<"-------------";
        gotoxy(25,16); cout<<"|  COMPRAR  |";
        gotoxy(25,17); cout<<"-------------";
        gotoxy(40,15); cout<<"------------";
        gotoxy(40,16); cout<<"|  RENTAR  |";
        gotoxy(40,17); cout<<"------------";
        gotoxy(63,8);  break;
      case 1: // Botón de Comprar
        gotoxy(61,7);  cout<<"----.";
        gotoxy(61,8);  cout<<"| X |";
        gotoxy(61,9);  cout<<"----|";
        gotoxy(25,15); cout<<"=============";
        gotoxy(25,16); cout<<"|| COMPRAR ||";
        gotoxy(25,17); cout<<"=============";
        gotoxy(40,15); cout<<"------------";
        gotoxy(40,16); cout<<"|  RENTAR  |";
        gotoxy(40,17); cout<<"------------";
        gotoxy(28,16); break;
      case 2: // Botón de cerrar
        gotoxy(61,7);  cout<<"----.";
        gotoxy(61,8);  cout<<"| X |";
        gotoxy(61,9);  cout<<"----|";
        gotoxy(25,15); cout<<"-------------";
        gotoxy(25,16); cout<<"|  COMPRAR  |";
        gotoxy(25,17); cout<<"-------------";
        gotoxy(40,15); cout<<"============";
        gotoxy(40,16); cout<<"|| RENTAR ||";
        gotoxy(40,17); cout<<"============";
        gotoxy(43,16);  break;
    }
  } // Fin de manejar elementos de cada menú
} // Fin de hacer focus en elemento de entrada

void mostrarAviso(string aviso, string datoExtra="", string menu="") {
  #define AACOL 15
  #define ICOL  35
  #define L1    12
  #define L2    13
  #define L3    14

  if (aviso.compare("suscripcion_exitosa")         == 0) {
    system("cls"); system("color 3F"); dibujarBordes();
    // Renderizado de cena de cumpleaños http://www.chris.com/ascii/index.php?art=events/birthday
    gotoxy(4, 2); cout<<"                              : . /%O!!::::::::\\\\_\\. \\";
    gotoxy(4, 3); cout<<"                             [\"\"]/%%O!!:::::::::  : . \\                  ";
    gotoxy(4, 4); cout<<"                             |  |%%OO!!::::::::::: : . |";
    gotoxy(4, 5); cout<<"                             |  |%%OO!!:::::::::::::  :|";
    gotoxy(4, 6); cout<<"                             |  |%%OO!!!::::::::::::: :|";
    gotoxy(4, 7); cout<<"                    :       .'--`.%%OO!!!:::::::::::: :|";
    gotoxy(4, 8); cout<<"                  : .:     /`.__.'\\%%OO!!!::::::::::::/";
    gotoxy(4, 9); cout<<"                 :    .   /        \\%OO!!!!::::::::::/";
    gotoxy(4,10); cout<<"                ,-'``'-. ;          ;%%OO!!!!!!:::::'";
    gotoxy(4,11); cout<<"                |`-..-'| |   ,--.   |`%%%OO!!!!!!:'";
    gotoxy(4,12); cout<<"                | .   :| |_.','`.`._|  `%%%OO!%%'";
    gotoxy(4,13); cout<<"                | . :  | |--'    `--|    `%%%%'";
    gotoxy(4,14); cout<<"                |`-..-'| ||   | | | |     /__\\`-.";
    gotoxy(4,15); cout<<"                \\::::::/ ||)|/|)|)|\\|           /";
    gotoxy(4,16); cout<<"-----------------`::::'--|._ ~**~ _.|----------( -----------------------";
    gotoxy(4,17); cout<<"                   )(    |  `-..-'  |           \\    ______";
    gotoxy(4,18); cout<<"                   )(    |          |,--.       ____/ /  /\\\\ ,-._.-'";
    gotoxy(4,19); cout<<"                ,-')('-. |          |\\`;/   .-()___  :  |`.!,-'`'/`-._";
    gotoxy(4,20); cout<<"               (  '  `  )`-._    _.-'|;,|    `-,    \\_\\__\\`,-'>-.,-._";
    gotoxy(4,21); cout<<"                `-....-'     ````    `--'      `-._       (`- `-._`-.   ";
    // Renderizado de texto
    gotoxy(5,23); cout << "La suscripcion a la membresia Blockbuster fue un exito!";
    gotoxy(6, 3); cout << "FELICIDADES!";
    gotoxy(6, 4); cout << datoExtra;
    gotoxy(6, 9); cout << "Presiona";
    gotoxy(6,10); cout << "cualquier";
    gotoxy(6,11); cout << "tecla para";
    gotoxy(6,12); cout << "continuar";
    getch(); system("color 1F");
  } else if (aviso.compare("expiracion_membresia") == 0) {
    vector<string> fechaExpiracion;

    fechaExpiracion = separarLinea(datoExtra, '/');

    gotoxy(28,16); cout << fechaExpiracion[0];           // Dia
    gotoxy(36,16); cout << mesTexto(fechaExpiracion[1]); // Mes
    gotoxy(53,16); cout << fechaExpiracion[2];           // Año
    gotoxy(37,19); // Re-Enfocar Botón "Entendido"
  } else if (aviso.compare("registro_exitoso")     == 0) {
    system("cls"); system("color 5F"); dibujarBordes();
    // Renderizado de nave futurama chris.com/ascii/index.php?art=television/futurama
    gotoxy(4, 3);  cout<<"                                    "
                       <<"                                     ";
    gotoxy(16,8);  cout<<"                     `. ___";
    gotoxy(16,8);  cout<<"                     `. ___";
    gotoxy(16,9);  cout<<"                    __,' __`.                _..----....____";
    gotoxy(16,10); cout<<"        __...--.'``;.   ,.   ;``--..__     .'    ,-._    _.-'";
    gotoxy(16,11); cout<<"  _..-''-------'   `'   `'   `'     O ``-''._   (,;') _,'";
    gotoxy(16,12); cout<<",'________________                          \\`-._`-','";
    gotoxy(16,13); cout<<" `._              ```````````------...___   '-.._'-:";
    gotoxy(16,14); cout<<"    ```--.._      ,.                     ````--...__\\-.";
    gotoxy(16,15); cout<<"            `.--. `-`                       ____    |  |`";
    gotoxy(16,16); cout<<"              `. `.                       ,'`````.  ;  ;`";
    gotoxy(16,17); cout<<"                `._`.        __________   `.      \\'__/`";
    gotoxy(16,18); cout<<"                   `-:._____/______/___/____`.     \\  `";
    gotoxy(16,19); cout<<"                               |       `._    `.    \\";
    gotoxy(16,20); cout<<"                               `._________`-.   `.   `.___";
    gotoxy(16,21); cout<<"                                             SSt  `------'`";
    // Renderizado de texto
    gotoxy(10,3);  cout<<"Bienvenid@ al sistema, "<<datoExtra<<"!";
    gotoxy(10,4);  cout<<"Haz sido registrada@ con exito en nuestro sistema.";
    gotoxy(10,5);  cout<<"Desde ahora podras entrar al menu de clientes.";
    gotoxy(5, 16); cout<<"Presiona"  ;
    gotoxy(5, 17); cout<<"cualquier" ;
    gotoxy(5, 18); cout<<"tecla para";
    gotoxy(5, 19); cout<<"continuar" ;
    getch(); system("color 1F");
  } else if (aviso.compare("abono_regalo")         == 0) {
    prepararMensaje("ABONO DE REGALO EXITOSO!");
    // Renderizado de regalo chris.com
    gotoxy(AACOL,10);  cout<<"       _   _      "  ;
    gotoxy(AACOL,11); cout<<"      ((\\o/))     " ;
    gotoxy(AACOL,12); cout<<" .-----//^\\\\-----.";
    gotoxy(AACOL,13); cout<<" |    /`| |`\\    |" ;
    gotoxy(AACOL,14); cout<<" |      | |      |"  ;
    gotoxy(AACOL,15); cout<<" |      | |      |"  ;
    gotoxy(AACOL,16); cout<<" |      | |      |"  ;
    gotoxy(AACOL,17); cout<<" '------===------'"  ;
    // Renderizado de información
    gotoxy(ICOL,L1);  cout<<"El usuario "<<datoExtra;
    gotoxy(ICOL,L2);  cout<<"ha recibido tu donacion, y de";
    gotoxy(ICOL,L3);  cout<<"seguro se pondra muy feliz!";
    // Enfocar el botón
    gotoxy(44,17); esperarRespuesta("2.5_credito_f2");
  } else if (aviso.compare("form_invalido")        == 0) {
    prepararMensaje("UH! OH! SE TE PASO ALGO...");
    // Renderizado de robot triste
    // Crédito: heartnsoul.com/ascii_art/robots.txt
    gotoxy(AACOL,10); cout<<"     .-+~~~~+-.    " ;
    gotoxy(AACOL,11); cout<<"    /          \\   ";
    gotoxy(AACOL,12); cout<<"    |'~~~~~~~~`|   " ;
    gotoxy(AACOL,13); cout<<"    ||  o  o  ||   " ;
    gotoxy(AACOL,14); cout<<"    ||  /''\\  ||   ";
    gotoxy(AACOL,15); cout<<"    |`--------'|   " ;
    gotoxy(AACOL,16); cout<<"    >----------<   " ;
    gotoxy(AACOL,17); cout<<" ,p~V          V~q," ;
    gotoxy(AACOL,18); cout<<",Z  /.sdbs. d7 \\  N";
    // Renderizado de información
    if (datoExtra.compare("monto") == 0)         {
      gotoxy(ICOL,L1);cout<<"La cantidad para abonar que";
      gotoxy(ICOL,L2);cout<<"escribiste es 0 u olvidaste";
      gotoxy(ICOL,L3);cout<<"llenar ese campo.";
    } else if (datoExtra.compare("benef") == 0)  {
      gotoxy(ICOL,L1);cout<<"No escribiste el nombre";
      gotoxy(ICOL,L2);cout<<"de la la persona a la que";
      gotoxy(ICOL,L3);cout<<"vas a abonar credito.";
    } else if (datoExtra.compare("claves") == 0) {
      gotoxy(ICOL,L1);cout<<"Las claves no coinciden...";
      gotoxy(ICOL,L2);cout<<"vuelvelas a escribir y que";
      gotoxy(ICOL,L3);cout<<"esta vez sean las mismas!";
    } else if (datoExtra.compare("inseg") == 0)  {
      gotoxy(ICOL,L1);cout<<"El nombre de usuario o la";
      gotoxy(ICOL,L2);cout<<"clave que escribiste no tiene";
      gotoxy(ICOL,L3);cout<<"como minimo 6 caracteres.";
    } // Fin de mostrar la información adecuada
    // Enfocar el botón
    gotoxy(44,17); esperarRespuesta(menu);
  } else if (aviso.compare("compra_pelicula")      == 0) {
    prepararMensaje("PELICULA COMPRADA CON EXITO");
    // Renderizado de TV chris.com
    gotoxy(AACOL,10); cout<<" ____________   " ;
    gotoxy(AACOL,11); cout<<"|,----------.|  " ;
    gotoxy(AACOL,12); cout<<"||          ||  " ;
    gotoxy(AACOL,13); cout<<"||   WOO!   ||  " ;
    gotoxy(AACOL,14); cout<<"||          ||  " ;
    gotoxy(AACOL,15); cout<<"|`----------'|  " ;
    gotoxy(AACOL,16); cout<<"|o .... [###]|\\_";
    gotoxy(AACOL,17); cout<<"|____________|  " ;
    // Renderizado de información
    gotoxy(ICOL,L1);  cout<<"Te enviaremos tu pelicula";
    gotoxy(ICOL,L2);  cout<<"a casa en un periodo maximo";
    gotoxy(ICOL,L3);  cout<<"de dos semana habiles.";
    // Enfocar el botón
    gotoxy(44,17);
    if (datoExtra.compare("catalogo") == 0) {
      esperarRespuesta("null");
    } else {
      esperarRespuesta("2.2_buscador_f2");
    }
  } else if (aviso.compare("renta_pelicula")       == 0) {
    prepararMensaje("GRACIAS POR RENTAR");
    // Renderizado de TV chris.com
    gotoxy(AACOL,10); cout<<" ____________   " ;
    gotoxy(AACOL,11); cout<<"|,----------.|  " ;
    gotoxy(AACOL,12); cout<<"||          ||  " ;
    gotoxy(AACOL,13); cout<<"||   WOO!   ||  " ;
    gotoxy(AACOL,14); cout<<"||          ||  " ;
    gotoxy(AACOL,15); cout<<"|`----------'|  " ;
    gotoxy(AACOL,16); cout<<"|o .... [###]|\\_";
    gotoxy(AACOL,17); cout<<"|____________|  " ;
    // Renderizado de información
    gotoxy(ICOL,L1);  cout<<"Podras disfrutarla 1 mes";
    gotoxy(ICOL,L2);  cout<<"pero recuerda regresarla";
    gotoxy(ICOL,L3);  cout<<"antes del "<<datoExtra<<".";
    // Enfocar el botón
    gotoxy(44,17);    esperarRespuesta(menu);
  } else if (aviso.compare("baja_miembro")         == 0) {
    prepararMensaje("TE HAS DADO DE BAJA");
    // Renderizado de tumba chris.com
    gotoxy(AACOL,9);  cout<<"         _|_"         ;
    gotoxy(AACOL,10); cout<<"        `-|-`"        ;
    gotoxy(AACOL,11); cout<<"          |"          ;
    gotoxy(AACOL,12); cout<<"      .-'~^~`-."      ;
    gotoxy(AACOL,13); cout<<"    .' _     _ `."    ;
    gotoxy(AACOL,14); cout<<"    | |_) | |_) |"    ;
    gotoxy(AACOL,15); cout<<"    | | \\ | |   |"   ;
    gotoxy(AACOL,16); cout<<"    |           |"    ;
    gotoxy(AACOL,17); cout<<"_\\\\-|           |"  ;
    gotoxy(AACOL,18); cout<<".-\\\\`=.........=`//";
    // Renderizado de información
    gotoxy(ICOL,L1);  cout<<"Ya no eres miembro del";
    gotoxy(ICOL,L2);  cout<<"cineclub Blockbuster, te";
    gotoxy(ICOL,L3);  cout<<"vamos a extra"<<char(164)<<"ar :(";
    // Enfocar el botón
    gotoxy(44,17);    esperarRespuesta("null");
  } else if (aviso.compare("pelis_devueltas")      == 0) {
    prepararMensaje("DEVOLVISTE LAS 3 PELICULAS");
    // Renderizado de tumba chris.com
    gotoxy(AACOL,9);  cout<<"   ._, |_  .,"       ;
    gotoxy(AACOL,10); cout<<"_\\/  .  \\ /    |/_";
    gotoxy(AACOL,11); cout<<" \\\\  _\\, y | \\//";
    gotoxy(AACOL,12); cout<<"__\\\\, \\\\/ -.\\||";
    gotoxy(AACOL,13); cout<<",--.`._||  / / ,"    ;
    gotoxy(AACOL,14); cout<<"    `-. `./ / |/_.'" ;
    gotoxy(AACOL,15); cout<<"       |    |//"     ;
    gotoxy(AACOL,16); cout<<"       |_    /"      ;
    gotoxy(AACOL,17); cout<<"       |-   |"       ;
    gotoxy(AACOL,18); cout<<"       |   =|"       ;
    // Renderizado de información
    gotoxy(ICOL,L1);  cout<<"Ahora podras rentar otras"    ;
    gotoxy(ICOL,L2);  cout<<"tres peliculas, elige las que";
    gotoxy(ICOL,L3);  cout<<"mas te gusten y disfruta"     ;
    // Enfocar el botón
    gotoxy(44,17);    esperarRespuesta("2.3_membresias_ctrl");
  } else if (aviso.compare("renov_exitosa")        == 0) {
    prepararMensaje("RENOVACION EXITOSA!");
    // Renderizado de Bender chris.com
    gotoxy(AACOL,9);  cout<<"   /         \\"      ;
    gotoxy(AACOL,10); cout<<"  |           |"      ;
    gotoxy(AACOL,11); cout<<"  |   .-------'._"    ;
    gotoxy(AACOL,12); cout<<"  |  / /  '.' '. \\"  ;
    gotoxy(AACOL,13); cout<<"  |  \\ \\ @   @ / /" ;
    gotoxy(AACOL,14); cout<<"  |   '---------'"    ;
    gotoxy(AACOL,15); cout<<"  |    _______|"      ;
    gotoxy(AACOL,16); cout<<"  |  .'-+-+-+|"       ;
    gotoxy(AACOL,17); cout<<"  |  '.-+-+-+|"       ;
    gotoxy(AACOL,18); cout<<"  |    \"\"\"\"\"\" |";
    // Renderizado de información
    gotoxy(ICOL,L1);  cout<<"Acabas de extender tu"    ;
    gotoxy(ICOL,L2);  cout<<"membresia otros 6 meses";
    gotoxy(ICOL,L3);  cout<<"mas. Disfrutalo mucho!"     ;
    // Enfocar el botón
    gotoxy(44,17);    esperarRespuesta("2.3_membresias_ctrl");
  } // Fin de elegir el aviso correcto
} // Fin de mostrar confirmaciones, pantallas y avisos

void mostrarError(
  string tipoError, string datoExtra="", string comprador="", int precio=0
) { // Fin de recibir parámetros
  if (tipoError.compare("opcion_equivocada")     == 0) {
    gotoxy(13,23); cout<<"Opcion equivocada, elige entre 1 y 6!";
    Beep(400,200); // Sonido de error
    Sleep(2500);   enfocarElemento("2_clientes", 0);
  } else if (tipoError.compare("lista_vacia")    == 0) {
    gotoxy(5,4);
    cout<<"No se encontro ninguna pelicula.";
    gotoxy(5,5);
    cout<<"Presione cualquier tecla para volver al catalogo";
    Beep(400,200); getch();
  } else if (tipoError.compare("benef_error")    == 0) {
    prepararMensaje("BENEFICIARIO NO ENCONTRADO");
    system("color 4F"); // Pantalla roja
    // Renderizado de cara atónita
    // Crédito: chris.com/ascii/index.php?art=people/faces
    gotoxy(AACOL,10); cout<<"        .-\\\"```'.";
    gotoxy(AACOL,11); cout<<"       /   \\    \\";
    gotoxy(AACOL,12); cout<<"      /   / `\\__/" ;
    gotoxy(AACOL,13); cout<<"      | .'  _  _|"  ;
    gotoxy(AACOL,14); cout<<"      \\(\\   6  6 ";
    gotoxy(AACOL,15); cout<<"       | \\   _\\ |";
    gotoxy(AACOL,16); cout<<"       |\\ `~`= `/" ;
    gotoxy(AACOL,17); cout<<"       | '.___.'"   ;
    gotoxy(AACOL,18); cout<<"   .'` \\     |_"   ;

    // Renderizado de información
    gotoxy(ICOL,L1);cout<<"La persona a la que querias";
    gotoxy(ICOL,L2);cout<<"abonar credito no existe o";
    gotoxy(ICOL,L3);cout<<"es empleado nuestro.";
    // Enfocar el botón
    Beep(400,200); // Sonido de error
    gotoxy(44,17); esperarRespuesta("2.5_credito_f2");
    system("color 1F"); // Pantalla azul de nuevo
  } else if (tipoError.compare("compra_fallida") == 0) {
    prepararMensaje("FALLO AL REALIZAR COMPRA");
    system("color 4F"); // Pantalla roja

    string credito = consultaRapida(
      "usuarios.txt", NOMBRE, comprador, CREDITO
    ); // Fin de almacenar el crédito actual
    int faltante = precio-atoi(credito.c_str());
    // ASCII ART de Chris.com
    gotoxy(AACOL,9);  cout<<"  _______________ ";
    gotoxy(AACOL,10); cout<<" |  ____________ |";
    gotoxy(AACOL,11); cout<<" | | UH OH...  | |";
    gotoxy(AACOL,12); cout<<" | |___________| |";
    gotoxy(AACOL,13); cout<<" |  ___ ___ ___  |";
    gotoxy(AACOL,14); cout<<" | | 7 | 8 | 9 | |";
    gotoxy(AACOL,15); cout<<" | |___|___|___| |";
    gotoxy(AACOL,16); cout<<" | | 4 | 5 | 6 | |";
    gotoxy(AACOL,17); cout<<" | |___|___|___| |";
    gotoxy(AACOL,18); cout<<" | | 1 | 2 | 3 | |";
    // Ver qué compra se realizó
    if (datoExtra.compare("peli_busc")          == 0) {
      // Renderizado de información
      gotoxy(ICOL,L1);cout<<"Te faltaron $"<<faltante<<" pesos para";
      gotoxy(ICOL,L2);cout<<"realizar esta compra, abona";
      gotoxy(ICOL,L3);cout<<"credito a tu cuenta.";
      // Enfocar el botón
      Beep(400,200); // Sonido de error
      gotoxy(44,17); esperarRespuesta("2.2_buscador_f2");
    } else if (datoExtra.compare("catalogo")    == 0) {
      // Renderizado de información
      gotoxy(ICOL,L1);cout<<"Te faltaron $"<<faltante<<" pesos para";
      gotoxy(ICOL,L2);cout<<"realizar esta compra, abona";
      gotoxy(ICOL,L3);cout<<"credito a tu cuenta.";
      // Enfocar el botón
      Beep(400,200); // Sonido de error
      gotoxy(44,17); esperarRespuesta("null");
    } else if (datoExtra.compare("suscr")       == 0) {
      // Renderizado de información
      gotoxy(ICOL,L1);cout<<"No tienes dinero suficiente";
      gotoxy(ICOL,L2);cout<<"para afiliarte a Blockbuster";
      gotoxy(ICOL,L3);cout<<"y te faltan $"<<faltante<<" pesos.";
      // Enfocar el botón
      Beep(400,200); // Sonido de error
      gotoxy(44,17); esperarRespuesta("null");
    } // Fin de ver qué se trató de comprar
    system("color 1F"); // Pantalla azul de nuevo
  } else if (tipoError.compare("renta_fallida")  == 0) {
    prepararMensaje("NO SE PUDO RENTAR PELICULA");
    system("color 4F"); // Pantalla roja
    // Crédito: chris.com/ascii/
    gotoxy(AACOL,9);  cout<<"   ___________     "       ;
    gotoxy(AACOL,10); cout<<"  /=//==//=/  \\    "      ;
    gotoxy(AACOL,11); cout<<" |=||==||=|    |   "       ;
    gotoxy(AACOL,12); cout<<" |=||==||=|~-, |   "       ;
    gotoxy(AACOL,13); cout<<" |=||==||=|^.`;|   "       ;
    gotoxy(AACOL,14); cout<<"  \\=\\\\==\\\\=\\`=.:   " ;
    gotoxy(AACOL,15); cout<<"   `\"\"\"\"\"\"\"`^-,`.  ";
    gotoxy(AACOL,16); cout<<"            `.~,'  "       ;
    gotoxy(AACOL,17); cout<<"           ',~^:,  "       ;
    gotoxy(AACOL,18); cout<<"           `.^;`.  "       ;
    // Renderizado de información
    gotoxy(ICOL,L1);cout<<"Puede que ya hayas excedido";
    gotoxy(ICOL,L2);cout<<"tus 3 rentas, tengas adeudos";
    gotoxy(ICOL,L3);cout<<"o no estes afiliado.";
    // Enfocar el botón
    Beep(400,200); // Sonido de error
    gotoxy(44,17);
    if (datoExtra.compare("catalogo") == 0) {
      esperarRespuesta("null");
    } else {
      esperarRespuesta("2.2_buscador_f2");
    }
    system("color 1F"); // Pantalla azul de nuevo
  } else if (tipoError.compare("nombre_no_disp") == 0) {
    prepararMensaje("NOMBRE NO DISPONIBLE");
    system("color 4F"); // Pantalla roja
    // Crédito: chris.com/ascii/
    gotoxy(AACOL,9);  cout<<"       .#####.     "  ;
    gotoxy(AACOL,10); cout<<"       |_____|     "  ;
    gotoxy(AACOL,11); cout<<"      (\\#/ \\#/)    ";
    gotoxy(AACOL,12); cout<<"       |  U  |     "  ;
    gotoxy(AACOL,13); cout<<"       \\  _  /     " ;
    gotoxy(AACOL,14); cout<<"        \\___/      " ;
    gotoxy(AACOL,15); cout<<"    .---'   `---.  "  ;
    gotoxy(AACOL,16); cout<<"   /  #########  \\ " ;
    gotoxy(AACOL,17); cout<<"  /  |####|####|  \\" ;
    gotoxy(AACOL,18); cout<<" (  /\\ ####### /\\ |";
    // Renderizado de información
    gotoxy(ICOL,L1);cout<<"El nombre "<<datoExtra;
    gotoxy(ICOL,L2);cout<<"no esta disponible, otra";
    gotoxy(ICOL,L3);cout<<"persona ya lo registro.";
    // Enfocar el botón
    Beep(400,200); // Sonido de error
    gotoxy(44,17);
    esperarRespuesta("1_principal_registro");
    system("color 1F"); // Pantalla azul de nuevo
  } else if (tipoError.compare("login_fallo") == 0) {
    prepararMensaje("ACCESO DENEGADO (!)");
    system("color 4F"); // Pantalla roja
    // retrojunkie.com/asciiart/machines/padlocks.htm
    gotoxy(AACOL,9);  cout<<"    / .----. \\"   ;
    gotoxy(AACOL,10); cout<<"   / /      \\ \\" ;
    gotoxy(AACOL,11); cout<<"   | |      | |"   ;
    gotoxy(AACOL,12); cout<<"  _| |______| |_"  ;
    gotoxy(AACOL,13); cout<<".' |_|      |_| '.";
    gotoxy(AACOL,14); cout<<"'._____ __ _____.'";
    gotoxy(AACOL,15); cout<<"|     .'__'.     |";
    gotoxy(AACOL,16); cout<<"'.__.'.'  '.'.__.'";
    gotoxy(AACOL,17); cout<<"'.__  |    |  __.'";
    gotoxy(AACOL,18); cout<<"|   '.'.__.'.'   |";
    // Renderizado de información
    gotoxy(ICOL,L1);cout<<"Clave o nombre de usuario";
    gotoxy(ICOL,L2);cout<<"incorrectos, revisa bien";
    gotoxy(ICOL,L3);cout<<"los datos que escribiste.";
    // Enfocar el botón
    Beep(400,200); // Sonido de error
    gotoxy(44,17);
    esperarRespuesta("1_principal_login");
    system("color 1F"); // Pantalla azul de nuevo
  } // Fin de elegir el tipo de error
} // Fin de mostrar errores en pantalla

/* =======================================================
|||||||||||      COMPLEMENTOS DE CATÁLOGO      |||||||||||
========================================================*/

void mostrarPagina(vector<string> pelis, int pag) {
  vector<vector<int> > paginas;
  vector<string> peli;

  /* ROL DE PÁGINAS:
  =============================================
  paginas[i]    -> Número de página
  paginas[i][j] -> 0: Inicio - 1: Final 
  pag -> Página actual pasada como parámetro */

  paginas = paginacion(pelis.size(), 11);
  // Mostrar películas de la primera página
  for (int i=paginas[pag][0],y=4; i<=paginas[pag][1]; i+=1) {
    peli = separarLinea(pelis[i], ';'); gotoxy(5, y);
    cout << peli[TITULO]<<" ("<<peli[YEAR]<<")";
    peli.clear(); y += 1; // Siguiente línea
  } // Fin de búsqueda de películas
  gotoxy(4,4);
} // Fin de desplegar items de una página

void detallesDeLaPelicula(string peliculaConcatenada, string menu="") {
  vector<string> pelicula = separarLinea(
    peliculaConcatenada, ';'
  ); // Fin de almacenar la película como arregalo
  short int yI=12, yA=12, yG=8, yD=6, yP=4, yS=10,
            xI=73, xA=62, xG=65,xD=67,xP=66,xS=73;

  #define DETALLES 2

  if (menu.compare("listado") == 0) {
    yI=8, yA=6, yG=10, yD=12, yP=14, yS=16,
    xI=58,xA=58,xG=63, xD=63, xP=62, xS=69;
    limpiarZona("2.2_buscador_f2");
  } else { // Cambié las coordenadas
    limpiarZona("2.4_catalogo_f2", DETALLES);
  } // Fin de ver si es el otro menú

  // Desplegar cada dato en su respectiva coordenada
  gotoxy(xI,yI);   cout<<pelicula[   ID   ];
  gotoxy(xA,yA);   cout<<pelicula[  YEAR  ];
  gotoxy(xG,yG);   cout<<pelicula[ GENERO ];
  gotoxy(xD,yD);   cout<<pelicula[DURACION]<<" min";
  gotoxy(xP,yP);   cout<<pelicula[ PRECIO ];
  gotoxy(xS,yS);   cout<<pelicula[  STOCK ];
  if (menu.compare("listado") != 0) {
    gotoxy(4, 18); cout<<pelicula[SINOP_L1];
    gotoxy(4, 19); cout<<pelicula[SINOP_L2];
    gotoxy(4, 20); cout<<pelicula[SINOP_L3];
    gotoxy(4, 21); cout<<pelicula[SINOP_L4];
  } // Evitar mostrar sinopsis en los resultados
} // Fin de listar los detalles de la película

void moverPuntero(int cursor, int pagina) {
  gotoxy(4,4+cursor-(11*pagina));
  cout << ">";
  gotoxy(4,4+cursor-(11*pagina));
} // Fin de mover el puntero '>' al desplazarse

void ventanaOpciones(string idPelicula) {
  string precio = consultaRapida(
    "peliculas.txt", ID, idPelicula, PRECIO
  ); // Almacenar precio en una cadena

  // Tapar con espacios lo que haya debajo
  for(int y = 8; y <= 17; y += 1) {
    gotoxy(15,y);
    cout<<"                          "<<
          "                        ";
  } // Fin de llenar con espacios
  gotoxy(14,7);   cout<<".-------------------------"
                      <<"-------------------------.";
  gotoxy(15,9);   cout<<"-------------------------"
                      <<"-------------------------" ;
  gotoxy(14,18);  cout<<"*_________________________"
                     <<"_________________________*";
  for(int y=8; y<=17; y+=1) {
    gotoxy(14,y); cout<<"|";
    gotoxy(65,y); cout<<"|";
  } // Fin de bordes laterales
  // Renderizado de texto
  gotoxy(33,8);   cout<<"QUE DESEAS HACER?";
  gotoxy(17,11);  cout<<"Esta pelicula cuesta $"<<precio<<" pesos, tienes las";
  gotoxy(17,12);  cout<<"siguientes opciones. Para cerrar esta ventana";
  gotoxy(17,13);  cout<<"presiona el boton [X] de la esquina o <ESC>.";
  // Renderizado de botones
  gotoxy(61,7);   cout<<"----.";
  gotoxy(61,8);   cout<<"| X |";
  gotoxy(61,9);   cout<<"----|";
  gotoxy(25,15);  cout<<"=============";
  gotoxy(25,16);  cout<<"|| COMPRAR ||";
  gotoxy(25,17);  cout<<"=============";
  gotoxy(40,15);  cout<<"------------";
  gotoxy(40,16);  cout<<"|  RENTAR  |";
  gotoxy(40,17);  cout<<"------------";
  // Enfocar el botón default 'Comprar'
  gotoxy(28,16);
} // Fin de ventana con rentar o comprar

/* =======================================================
|||||||||||      COMPLEMENTOS DE BÚSQUEDA      |||||||||||
========================================================*/

void listarResultados(vector<vector<string> > resultados) {
  for (int i=0,y=6; i<resultados.size(); i+=1, y+=1) {
    gotoxy(6,y); cout<<resultados[i][TITULO];
  } // Fin de listar el vector
  gotoxy(30,3); cout<<resultados.size(); gotoxy(5,6);
} // Fin de mostrar resultados de búsqueda

void moverCursor(int cursor) {
  limpiarZona("punteros_listado");
  gotoxy(5,cursor+6); cout<<">"; gotoxy(5,cursor+6);
} // Lo mismo que la de arriba pero en el menú Resultados

void subMenuOpciones(int i) {
  gotoxy(5, 5+i); cout<<".---------------------"
                           <<"--------------------.";
  gotoxy(5, 6+i); cout<<"|"   ;
  gotoxy(47,6+i); cout<<"|"   ;
  gotoxy(5, 7+i); cout<<"*---";
  gotoxy(44,7+i); cout<<"---*";
  gotoxy(4,23)  ; cout<<"Presiona <ESC>, <ARRIBA> o <ABAJO> para"<<
                        "cancelar y seguir navegando.";
  // Renderizado de botones
  gotoxy(8, 7+i); cout<<   "-------------------------------------"   ;
  gotoxy(5, 8+i); cout<<"   || SINOPSIS ||  RENTAR  |  COMPRAR  |   ";
  gotoxy(5, 9+i); cout<<"   *============*----------*-----------*   ";
  // Enfocar el primer botón
  gotoxy(11,8+i);
} // Fin de mostrar 3 botones debajo del título

void mostrarSinopsis(vector<string> peli) {
  system("cls"); dibujarBordes();
  gotoxy(6,2); // Llenar el título
  cout<<"Sinopsis de: "<<peli[TITULO]<<" ("<<peli[YEAR]<<")";
  gotoxy(4, 6);  cout << peli[SINOP_L1];
  gotoxy(4, 8);  cout << peli[SINOP_L2];
  gotoxy(4, 10); cout << peli[SINOP_L3];
  gotoxy(4, 12); cout << peli[SINOP_L4];
  // Renderizado del botón
  gotoxy(33,18); cout<<"==================";
  gotoxy(33,19); cout<<"|| VOLVER ATRAS ||";
  gotoxy(33,20); cout<<"==================";
  gotoxy(36,19);

  esperarRespuesta("2.2_buscador_f2");
} // Fin de cargar la sinopsis sola

/* =======================================================
|||||||||||     COMPLEMENTOS DE MEMBRESÍA      |||||||||||
========================================================*/
void mostrarDetallesMembresia(string miembro) {
  int diasRestantes;
  string         peli1, peli2, peli3, expir  ;
  vector<string> peli1Arr, peli2Arr, peli3Arr;

  peli1 = consultaRapida("membresias.txt", CLIENTE, miembro, RENTA1);
  peli2 = consultaRapida("membresias.txt", CLIENTE, miembro, RENTA2);
  peli3 = consultaRapida("membresias.txt", CLIENTE, miembro, RENTA3);
  expir = consultaRapida("membresias.txt", CLIENTE, miembro, EXPIR );
  peli1Arr = separarLinea(peli1, ',');
  peli2Arr = separarLinea(peli2, ',');
  peli3Arr = separarLinea(peli3, ',');

  diasRestantes = diferenciaFechas(fechaDeHoy(), expir);

  gotoxy(11,8);  cout << miembro       ;
  gotoxy(16,10); cout << diasRestantes ;
  gotoxy(35,9);
  if(peli1.compare("null") != 0) {
    cout << consultaRapida("peliculas.txt", ID, peli1Arr[ID], TITULO);
  } else { cout << " "; }
  gotoxy(35,14);
  if(peli2.compare("null") != 0) {
    cout << consultaRapida("peliculas.txt", ID, peli2Arr[ID], TITULO);
  } else { cout << " "; }
  gotoxy(35,19);
  if(peli3.compare("null") != 0) {
    cout << consultaRapida("peliculas.txt", ID, peli3Arr[ID], TITULO);
  } else { cout << " "; }
  gotoxy(8,16);
} // Fin de listar pelis rentadas y detalles

/* =======================================================
|||||||||||    COMPLEMENTOS DE MENÚ CRÉDITO    |||||||||||
========================================================*/

void mostrarCredito(string usuario) {
  string credito = consultaRapida(
    "usuarios.txt", NOMBRE, usuario, CREDITO
  ); // Fin de almacenar el crédito del usuario

  limpiarZona("2.5_credito", 0);

  gotoxy(6,11); cout << usuario;
  gotoxy(7,16); cout << credito;
} // Fin de mostrar dinero del usuario

void activarBeneficiario(bool marcado) {
  if (marcado) {
    gotoxy(37,14); cout << " ";
    gotoxy(52,9);  cout<<"             ";
    gotoxy(52,10); cout<<"                  ";
    gotoxy(52,11); cout<<"                  ";
  } else {
    gotoxy(37,14); cout << "O";
    gotoxy(52,9);  cout<<"Beneficiario:";
    gotoxy(52,10); cout<<"                  ";
    gotoxy(52,11); cout<<"------------------";
  } // Fin de marcar checkbox

  // Re-enfocar checkbox
  gotoxy(37,14);
} // Fin de activar o desactivar regalo de crédito

/* ======================================================
||||||||||| ELEMENTOS DE ANIMACIÓN Y ADORNOS ||||||||||||
========================================================*/

void intro(int velocidad) {
  // Colorear pantalla azul y letra amarilla
  system("cls"); system("color 16");

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
  cout<<"\tBBBBBBBBBBBBBBBBB   LLLLLLLLLLLLLLLLLLLLLLLL     OOOOOOOOO     ";
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
  cout<<"\tLLLLLLLLLLLLLLLLLLLLLLLL     OOOOOOOOO             CCCCCCCCCCCCC";
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
  cout<<"\t     OOOOOOOOO             CCCCCCCCCCCCCKKKKKKKKK    KKKKKKK";
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
  cout<<"\t        CCCCCCCCCCCCCKKKKKKKKK    KKKKKKKBBBBBBBBBBBBBBBBB   ";
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
  cout<<"\tKKKKKKKKK    KKKKKKKBBBBBBBBBBBBBBBBB         UUUUUUUUU      ";
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
  cout<<"\tBBBBBBBBBBBBBBBBB         UUUUUUUUU       SSSSSSSSSSSSSSS   ";
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
  cout<<"\t      UUUUUUUUU       SSSSSSSSSSSSSSS         TTTTTTTTTTT      ";
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
  cout<<"\t SSSSSSSSSSSSSSS         TTTTTTTTTTT      EEEEEEEEEEEEEEEEEEEEEE";
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
  cout<<"\t      TTTTTTTTTTT      EEEEEEEEEEEEEEEEEEEEEERRRRRRRR     RRRRRRR";
  Sleep(velocidad*3); system("cls"); system("color 1F");
} // Fin de intro con logo

void despedida() {
  system("cls"); system("color 0F");

  int tamHorizontal = 78, tamVertical = 23;
  for(int x = 3; x < tamHorizontal; x+=1) {
    gotoxy(x, (tamVertical-1)); cout<<"_";
  } // Borde inferior
  for(int x = 3; x < tamHorizontal; x+=1) {
    gotoxy(x, 1);  cout<<"_";
  } // Borde de titulo superior
  for(int y = 2; y < tamVertical; y+=1)   {
    gotoxy((tamHorizontal-1), y); cout<<"|";
  } // Borde lateral derecho
  for(int y = 2; y < tamVertical; y+=1)   {
    gotoxy(3, y); cout<<"|";
  } // Borde lateral izquierdo

  gotoxy(6,6);  cout<<"               \\  .-.                   "   ;
  gotoxy(6,7);  cout<<"                 /_ _\\                  "   ;
  gotoxy(6,8);  cout<<"                 |o^o|                  "    ;
  gotoxy(6,9);  cout<<"                 \\ _ /                  "   ;
  gotoxy(6,10); cout<<"                .-'-'-.                 "    ;
  gotoxy(6,11); cout<<"              /`)  .  (`\\               "   ;
  gotoxy(6,12); cout<<"             / /|.-'-.|\\ \\         /    "  ;
  gotoxy(6,13); cout<<"             \\ \\| (_) |/ /  .-\"\"-.      ";
  gotoxy(6,14); cout<<"              \\_\\'-.-'/_/  /[] _ _\\     " ;
  gotoxy(6,15); cout<<"              /_/ \\_/ \\_\\ _|_o_LII|_    " ;
  gotoxy(6,16); cout<<"                |'._.'|  / | ==== | \\   "   ;
  gotoxy(6,17); cout<<"                |  |  |  |_| ==== |_|   "    ;
  gotoxy(6,18); cout<<"                 \\_|_/    ||\" ||  ||    "  ;
  gotoxy(6,19); cout<<"                 |-|-|    ||LI  o ||    "    ;
  gotoxy(6,20); cout<<"                 |_|_|    ||'----'||    "    ;
  gotoxy(6,21); cout<<"                /_/ \\_\\  /__|    |__\\   " ;
  Sleep(1000);
  // Crédito de la canción en console::beep() ->
  // social.technet.microsoft.com/wiki/contents/articles/
  // 20989.music-from-the-command-line-performed-by-powershell.aspx
  gotoxy(8, 3);  cout<<"MU"     ; system("color 01"); Beep(440,500) ;
  gotoxy(10,3);  cout<<"CHAS"   ; system("color 02"); Beep(440,500) ;
  gotoxy(15,3);  cout<<"GRA"    ; system("color 03"); Beep(440,500) ;
  gotoxy(18,3);  cout<<"CIAS"   ; system("color 04"); Beep(349,350) ;
  gotoxy(9, 4);  cout<<"POR"    ; system("color 05"); Beep(523,150) ;
  gotoxy(13,4);  cout<<"UTI"    ; system("color 06"); Beep(440,500) ;
  gotoxy(16,4);  cout<<"LIZAR"  ; system("color 07"); Beep(349,350) ;
  gotoxy(7, 5);  cout<<"NUESTRO"; system("color 08"); Beep(523,150) ;
  gotoxy(15,5);  cout<<"SISTEMA"; system("color 09"); Beep(440,1000);
  gotoxy(44,10); cout<<"BEEP"   ; system("color 0A"); Beep(659,500) ;
  gotoxy(49,10); cout<<"BOOP"   ; system("color 0B"); Beep(659,500) ;
  gotoxy(54,10); cout<<"BEEP"   ; system("color 0C"); Beep(659,500) ;
  gotoxy(43,11); cout<<"(TEN"   ; system("color 0D"); Beep(698,350) ;
  gotoxy(48,11); cout<<"UN"     ; system("color 0E"); Beep(523,150) ;
  gotoxy(51,11); cout<<"BUEN"   ; system("color 01"); Beep(415,500) ;
  gotoxy(56,11); cout<<"DIA)"   ; system("color 06"); Beep(349,350) ;
  system("cls"); system("color 0F");                  Beep(523,150) ;
  gotoxy(10,9);   cout<<"     ___       _______   __    ______        _______. __ "    ;
  gotoxy(10,10);  cout<<"    /   \\     |       \\ |  |  /  __  \\      /       ||  |" ;
  gotoxy(10,11);  cout<<"   /  ^  \\    |  .--.  ||  | |  |  |  |    |   (----`|  |"   ;
  gotoxy(10,12);  cout<<"  /  /_\\  \\   |  |  |  ||  | |  |  |  |     \\   \\    |  |";
  gotoxy(10,13);  cout<<" /  _____  \\  |  '--'  ||  | |  `--'  | .----)   |   |__|"   ;
  gotoxy(10,14);  cout<<"/__/     \\__\\ |_______/ |__|  \\______/  |_______/    (__)" ;
  Beep(440,1000);
} // Fin de ticket de despedida