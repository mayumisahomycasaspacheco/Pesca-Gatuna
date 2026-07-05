#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<cmath>
#include<cstdlib> // para rand()
#include<ctime> // para time()

using namespace std;
using namespace System;

struct Pez {
	int x;
	int y;
	bool visible;
	time_t tiempo_desaparicion;

};

void burbujas()
{
	SetConsoleOutputCP(65001);

	Console::ForegroundColor = ConsoleColor::Cyan;

	// Fila 1 (muy arriba)
	Console::SetCursorPosition(10, 1);  cout << "o";
	Console::SetCursorPosition(30, 1);  cout << "°";
	Console::SetCursorPosition(55, 1);  cout << "o";
	Console::SetCursorPosition(75, 1);  cout << "°";
	Console::SetCursorPosition(95, 1);  cout << "o";
	Console::SetCursorPosition(115, 1); cout << "°";

	// Fila 2
	Console::SetCursorPosition(20, 4);  cout << "°";
	Console::SetCursorPosition(42, 4);  cout << "o";
	Console::SetCursorPosition(63, 4);  cout << "°";
	Console::SetCursorPosition(85, 4);  cout << "o";
	Console::SetCursorPosition(108, 4); cout << "°";

	// Fila 3
	Console::SetCursorPosition(15, 6);  cout << "o";
	Console::SetCursorPosition(48, 6);  cout << "°";
	Console::SetCursorPosition(100, 6); cout << "°";

	// Fila 4 (zona media)
	Console::SetCursorPosition(5, 13); cout << "°";
	Console::SetCursorPosition(22, 15); cout << "o";
	Console::SetCursorPosition(12, 18);cout << "o";
	Console::SetCursorPosition(30, 20); cout << "°";
	Console::SetCursorPosition(42, 15); cout << "o";
	Console::SetCursorPosition(52, 18);cout << "o";

	Console::SetCursorPosition(100, 20); cout << "°";
	Console::SetCursorPosition(92, 15); cout << "o";
	Console::SetCursorPosition(102, 18);cout << "o";

	Console::ResetColor();

	SetConsoleOutputCP(437);
}

void gatito_derecha(int x, int y)
{
	string lineas[4] = {

		" /')   ,\\__/|",
		"( (.--.|  _ _|",
		" \\     (   T )",
		"  \\_)))\\)))^_))))"

	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];

}

void gatito_izquierda(int x, int y)
{
	string lineas[4] = {
 "|\\__ /,| (` \\",
 "|_ _  |.--.) )",
 "( T   )      /",
"(((^_(((/(((_/"
	};
	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
}

void pulpo(int x, int y)
{
	Console::ForegroundColor = ConsoleColor::Magenta;

	string lineas[9] = {
"	      .'.'",
"       .'-'.",
"    .  ( o O)",
"     \\_ ` _,    _",
"  -.___'.) ( ,-'",
"       '-.O.' - .. - ..",
"./ \\ / \\/ | \\_. - ._",
"          ;",
"       ._/"

	};
	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
	Console::SetCursorPosition(x, y + 4);
	cout << lineas[4];
	Console::SetCursorPosition(x, y + 5);
	cout << lineas[5];
	Console::SetCursorPosition(x, y + 6);
	cout << lineas[6];
	Console::SetCursorPosition(x, y + 7);
	cout << lineas[7];
	Console::SetCursorPosition(x, y + 8);
	cout << lineas[8];

	Console::ResetColor();

}

void gatito_saltando(int x, int y)
{
	string lineas[4] = {

" _._     _,-'--`-._",
"(,-.`._,'(       |\\`-/|",
"    `-.- -\\ )-`_( ,o o)",
"           `-    \\`_ `-"
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
}

void gatito(int x, int y)
{
	string lineas[11] = {
	"    /\\____/\\",
	"   /         \\",
	"   l  u   u  l",
	"--l---- * ----l--",
	"   \\   w   /",
	"     ======",
	"    /      \\ __",
	"   l        l\\ \\",
	"   l        l/ /",
	"   l  l l   l /",
	"   \\ ml lm /_/"
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
	Console::SetCursorPosition(x, y + 4);
	cout << lineas[4];
	Console::SetCursorPosition(x, y + 5);
	cout << lineas[5];
	Console::SetCursorPosition(x, y + 6);
	cout << lineas[6];
	Console::SetCursorPosition(x, y + 7);
	cout << lineas[7];
	Console::SetCursorPosition(x, y + 8);
	cout << lineas[8];
	Console::SetCursorPosition(x, y + 9);
	cout << lineas[9];
	Console::SetCursorPosition(x, y + 10);
	cout << lineas[10];
}

void algas(int x, int y)
{
	Console::ForegroundColor = ConsoleColor::Green;

	string lineas[4] = {
") ) () ) (()) (()) (()) (())",
"(()  (())) ()) (()) ((( )))(",
"~^~^~^~^~^~^~^~^~^~^~^~^~^~^",
"..o . ..o o ..o . ..o.o o . "
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];

	Console::ResetColor();
}

void pez_globo_1(int x, int y)
{
	Console::ForegroundColor = ConsoleColor::Yellow;

	string lineas[12] = {
				"                 o       o",
		"       ",
		"      ______    ",
		"    _/   )  \\_",
		"  /  0    )   (  \\_     _",
		" |          )   (  \\_/ ==|",
		" |        (   (   ) _ ===|",
		" |          )   ( _/ \\_ ==|",
		"  \\__/    )   ( _/     \\_|",
		"     \\_      ) _/",
		"        \\___|  |",
		"           \\__\\"
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
	Console::SetCursorPosition(x, y + 4);
	cout << lineas[4];
	Console::SetCursorPosition(x, y + 5);
	cout << lineas[5];
	Console::SetCursorPosition(x, y + 6);
	cout << lineas[6];
	Console::SetCursorPosition(x, y + 7);
	cout << lineas[7];
	Console::SetCursorPosition(x, y + 8);
	cout << lineas[8];
	Console::SetCursorPosition(x, y + 9);
	cout << lineas[9];
	Console::SetCursorPosition(x, y + 10);
	cout << lineas[10];
	Console::SetCursorPosition(x, y + 11);
	cout << lineas[11];

	Console::ResetColor();
}

void ballena(int x, int y)
{
	Console::ForegroundColor = ConsoleColor::Blue;

	string lineas[5] = {
	"       :",
	"	 ___:____   | \"\\/ \"|",
	"  ,'        `.    \\  /",
	" | O          \\___/  |",
	"~^ ~^ ~^ ~^ ~^ ~^ ~^ ~^ ~^ ~^ ~^ ~^ ~"
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
	Console::SetCursorPosition(x, y + 4);
	cout << lineas[4];

	Console::ResetColor();
}

void castillo(int x, int y)
{
	Console::ForegroundColor = ConsoleColor::Gray;

	string lineas[19] = {

"        __________",
"       /          \\                                             (",
"      /____________\\                                           (\)",
"       |:_:_:_:_:_|                                             ))",
"       |_:_,--.:_:|                                          (\//   )",
"       |:_:|__|_:_|                         _               ) ))   ((",
"    _  |_   _  :_:|  _   _   _            (_)             ((((   /)\`",
"   | |_| |_| |   _| | |_| |_| |             o              \\)) (( (",
"    \_:_:_:_:/|_|_|_|\:_:_:_:_/             .                ((   ))))",
"     |_,-._:_:_:_:_:_:_:_.-,_|                                )) ((//",
"     |:|_|:_:_:,---,:_:_:|_|:|                               ,-.  )/",
"     |_:_:_:_,'     `,_:_:_:_|           _  o               ,;'))((",
"     |:_:_:_/  _ | _  \_:_:_:|          (_O                   ((  ))",
"_____|_:_:_|  (o)-(o)  |_:_:_|--'`-.     ,--.                (((\'/",
" ', ;|:_:_:| -( .-. )- |:_:_:| ', ; `--._\  /,---.~           \`))",
".  ` |_:_:_|   \`-'/   |_:_:_|.  ` .  `  /()\.__( ) .,-----'`-\((",
" ', ;|:_:_:|    `-'    |:_:_:| ', ; ', ; `--'|   \ ', ; ', ; ',')).,--",
".  `     ` .  ` .  ` .  ` .  ` .  ` .  ` .    .  ` .  ` .  ` .  ` .  `",
"', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ; ', ;"
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
	Console::SetCursorPosition(x, y + 4);
	cout << lineas[4];
	Console::SetCursorPosition(x, y + 5);
	cout << lineas[5];
	Console::SetCursorPosition(x, y + 6);
	cout << lineas[6];
	Console::SetCursorPosition(x, y + 7);
	cout << lineas[7];
	Console::SetCursorPosition(x, y + 8);
	cout << lineas[8];
	Console::SetCursorPosition(x, y + 9);
	cout << lineas[9];
	Console::SetCursorPosition(x, y + 10);
	cout << lineas[10];
	Console::SetCursorPosition(x, y + 11);
	cout << lineas[11];
	Console::SetCursorPosition(x, y + 12);
	cout << lineas[12];
	Console::SetCursorPosition(x, y + 13);
	cout << lineas[13];
	Console::SetCursorPosition(x, y + 14);
	cout << lineas[14];
	Console::SetCursorPosition(x, y + 15);
	cout << lineas[15];
	Console::SetCursorPosition(x, y + 16);
	cout << lineas[16];
	Console::SetCursorPosition(x, y + 17);
	cout << lineas[17];
	Console::SetCursorPosition(x, y + 18);
	cout << lineas[18];

	Console::ResetColor();
}

void playa(int x, int y)
{

	Console::ForegroundColor = ConsoleColor::Gray;

	string lineas[29] =
	{
R"(               __..---- - '))",
R"(        ,.--._ .-'_..--...-')",
R"(       '- '. _/_ /  ..--''  '-.)",
R"(       _.--  ...:._:(_ ..: ::. \)",
R"(    .-' ..::--  _(##)#) ':. \ \)    \ _|_ /)",
R"(   /_:-:'/  :__(##)##)    ): )   '-./'   '\.-')",
R"(      / |  :' :/""\///)  /:.'    --(       )--)",
R"(     / :( :( :(   (#//)          .-'\.___./'-.)",
R"(    / :/|\ :\_:\   \#//\            /  |  \)",
R"(    |:/ |   --':\   (#//)               )",
R"(    \/  \ :|  \ :\  (#//))",
R"(         \:\   '.':. \#//\)",
R"(          ':|     --'(#///))",
R"(                     (#///))",
R"(                     (#///)         ___/""\)",
R"(                      \#///\           oo##)",
R"(                      (##///)         `-6 #)",
R"(                      (##///)          ,'`.)",
R"(                      (##///)         // `.\)",
R"(                      (##///)        ||o   \\)",
R"(                       \##///\        \-+--//)",
R"(                       (###///)       :_|_(/)",
R"(                       (sjw////)__...--:: :...__)",
R"(                       (#/::'''        :: :     ""--.._)",
R"(                  __..-'''           __;: :             -._)",
R"(          __..--""                  `---/ ;                '._)",
R"( ___..--""                             `-'                     -..___)",
R"(   (_ ""---....___                                     __...--"" _))",
R"(        --...  ___    -----......._______......----        --   )"
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
	Console::SetCursorPosition(x, y + 4);
	cout << lineas[4];
	Console::SetCursorPosition(x, y + 5);
	cout << lineas[5];
	Console::SetCursorPosition(x, y + 6);
	cout << lineas[6];
	Console::SetCursorPosition(x, y + 7);
	cout << lineas[7];
	Console::SetCursorPosition(x, y + 8);
	cout << lineas[8];
	Console::SetCursorPosition(x, y + 9);
	cout << lineas[9];
	Console::SetCursorPosition(x, y + 10);
	cout << lineas[10];
	Console::SetCursorPosition(x, y + 11);
	cout << lineas[11];
	Console::SetCursorPosition(x, y + 12);
	cout << lineas[12];
	Console::SetCursorPosition(x, y + 13);
	cout << lineas[13];
	Console::SetCursorPosition(x, y + 14);
	cout << lineas[14];
	Console::SetCursorPosition(x, y + 15);
	cout << lineas[15];
	Console::SetCursorPosition(x, y + 16);
	cout << lineas[16];
	Console::SetCursorPosition(x, y + 17);
	cout << lineas[17];
	Console::SetCursorPosition(x, y + 18);
	cout << lineas[18];
	Console::SetCursorPosition(x, y + 19);
	cout << lineas[19];
	Console::SetCursorPosition(x, y + 20);
	cout << lineas[20];
	Console::SetCursorPosition(x, y + 21);
	cout << lineas[21];
	Console::SetCursorPosition(x, y + 22);
	cout << lineas[22];
	Console::SetCursorPosition(x, y + 23);
	cout << lineas[23];
	Console::SetCursorPosition(x, y + 24);
	cout << lineas[24];
	Console::SetCursorPosition(x, y + 25);
	cout << lineas[25];
	Console::SetCursorPosition(x, y + 26);
	cout << lineas[26];
	Console::SetCursorPosition(x, y + 27);
	cout << lineas[27];
	Console::SetCursorPosition(x, y + 28);
	cout << lineas[28];

	Console::ResetColor();

}


void pez_globo_2(int x, int y)
{
	Console::ForegroundColor = ConsoleColor::Yellow;

	string lineas[10] = {
				"                 o       o",
		"       ",
		"      ______    ",
		"    _/   )  \\_",
		"  /  0    )   (  \\_     _",
		" |          )   (  \\_/ ==|",
		" |        (   (   ) _ ===|",
		" |          )   ( _/ \\_ ==|",
		"  \\__/    )   ( _/     \\_|",
		"     \\_      ) _/",
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
	Console::SetCursorPosition(x, y + 4);
	cout << lineas[4];
	Console::SetCursorPosition(x, y + 5);
	cout << lineas[5];
	Console::SetCursorPosition(x, y + 6);
	cout << lineas[6];
	Console::SetCursorPosition(x, y + 7);
	cout << lineas[7];
	Console::SetCursorPosition(x, y + 8);
	cout << lineas[8];
	Console::SetCursorPosition(x, y + 9);
	cout << lineas[9];

	Console::ResetColor();

}

void mostrar_mensaje(int x, int y)
{
	SetConsoleOutputCP(65001);
	string lineas[3] = {
		"╔═════════════════════════════════════╗",
		"║ Bienvenido al mundo de Pesca Gatuna ║",
		"╚═════════════════════════════════════╝",
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];

	SetConsoleOutputCP(437);
}

void mostrar_mensaje1(int x, int y)
{
	SetConsoleOutputCP(65001);
	string lineas[3] = {
		"╔════════════════════════════════════════════════════════════╗",
		"║ Los peces matemáticos se han escondido por todo el océano. ║",
		"╚════════════════════════════════════════════════════════════╝",
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];

	SetConsoleOutputCP(437);
}

void mostrar_mensaje2(int x, int y)
{
	SetConsoleOutputCP(65001);
	string lineas[4] = {
		"╔═════════════════════════════════════════════╗",
		"║      Si quieres continuar tu aventura,      ║",
		"║ deberás encontrarlos resolviendo divisiones.║",
		"╚═════════════════════════════════════════════╝",
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];

	SetConsoleOutputCP(437);
}

void mostrar_mensaje3(int x, int y)
{
	SetConsoleOutputCP(65001);
	string lineas[5] = {
		"╔══════════════════════════════════════════════════════════╗",
		"║      Necesitas conseguir 10 peces matemáticos para       ║",
		"║     abrir la puerta que conduce al siguiente mundo.      ║",
		"║    Pero cuidado, cada error hará que pierdas una vida.   ║",
		"╚══════════════════════════════════════════════════════════╝",
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];
	Console::SetCursorPosition(x, y + 3);
	cout << lineas[3];
	Console::SetCursorPosition(x, y + 4);
	cout << lineas[4];

	SetConsoleOutputCP(437);
}

void mostrar_mensaje4(int x, int y)
{
	SetConsoleOutputCP(65001);
	string lineas[3] = {
		"╔═════════════════════════════════════════════╗",
		"║ Vaya, ahora mi personaje es un lindo gatito ║",
		"╚═════════════════════════════════════════════╝",
	};

	Console::SetCursorPosition(x, y);
	cout << lineas[0];
	Console::SetCursorPosition(x, y + 1);
	cout << lineas[1];
	Console::SetCursorPosition(x, y + 2);
	cout << lineas[2];

	SetConsoleOutputCP(437);
}

void portal()
{
	Console::ForegroundColor = ConsoleColor::Blue;

	cout << R"(
   \  :  /       \  :  /       \  :  /       \  :  /       \  :  /
`. __/ \__ .' `. __/ \__ .' `. __/ \__ .' `. __/ \__ .' `. __/ \__ .'
_ _\     /_ _ _ _\     /_ _ _ _\     /_ _ _ _\     /_ _ _ _\     /_ _
   /_   _\       /_   _\       /_   _\       /_   _\       /_   _\
 .'  \ /  `.   .'  \ /  `.   .'  \ /  `.   .'  \ /  `.   .'  \ /  `.
   /  |  \       /  :  \       /  :  \       /  :  \       /  |  \
      |                                                       |
   \  |  /                                                 \  |  /
`. __/ \__ .'                                           `. __/ \__ .'
_ _\     /_ _                                           _ _\     /_ _
   /_   _\                                                 /_   _\
 .'  \ /  `.                                             .'  \ /  `.
   /  |  \                                                 /  |  \
      |                                                       |
   \  |  /                                                 \  |  /
`. __/ \__ .'                                           `. __/ \__ .'
_ _\     /_ _                                           _ _\     /_ _
   /_   _\                                                 /_   _\
 .'  \ /  `.                                             .'  \ /  `.
   /  |  \                                                 /  |  \
      |                                                       |
   \  |  /       \  :  /       \  :  /       \  :  /       \  |  /
`. __/ \__ .' `. __/ \__ .' `. __/ \__ .' `. __/ \__ .' `. __/ \__ .'
_ _\     /_ _ _ _\     /_ _ _ _\     /_ _ _ _\     /_ _ _ _\     /_ _
   /_   _\       /_   _\       /_   _\       /_   _\       /_   _\
 .'  \ /  `.   .'  \ /  `.   .'  \ /  `.   .'  \ /  `.   .'  \ /  `.
   /  :  \       /  :  \       /  :  \       /  :  \       /  :  \
)";
	Console::ResetColor();
}

void tablero(int vidas, int peces)
{
	Console::SetCursorPosition(0, 0);
	cout << "Vidas: ";
	for (int i = 0; i < vidas; i++)
	{
		cout << "<3";
	}
	cout << "" << endl;
	cout << "Peces: ";
	for (int i = 0; i < peces; i++)
		cout << "><>";
}

void dibujarpeces(Pez* listapeces, int cantidad)
{
	string pez[5] = {
		"         O  o",
		"       _\\_   o",
		" \\\\/     o\\ .",
		" //\\_______=",
		"    ''"
	};

	for (int i = 0; i < cantidad; i++)
	{
		Pez* p = listapeces + i; // puntero apuntando al i-ésimo pez del arreglo dinámico

		if (p->visible == true)
		{
			Console::ForegroundColor = ConsoleColor::Cyan;
			Console::SetCursorPosition(p->x, p->y);
			cout << pez[0];
			Console::SetCursorPosition(p->x, p->y + 1);
			cout << pez[1];
			Console::SetCursorPosition(p->x, p->y + 2);
			cout << pez[2];
			Console::SetCursorPosition(p->x, p->y + 3);
			cout << pez[3];
			Console::SetCursorPosition(p->x, p->y + 4);
			cout << pez[4];
			Console::ResetColor();
		}
	}
}

void generar_division(int dificultad, int& dividendo, int& divisor, int& respuesta_correcta)
{
	int divisorMin, divisorMax, cocienteMin, cocienteMax;

	if (dificultad == 1)
	{
		divisorMin = 1; divisorMax = 3;
		cocienteMin = 1; cocienteMax = 5;
	}

	divisor = divisorMin + rand() % (divisorMax - divisorMin + 1);
	respuesta_correcta = cocienteMin + rand() % (cocienteMax - cocienteMin + 1);
	dividendo = divisor * respuesta_correcta;
}

// Reserva memoria dinámica para una matriz de "filas" x "columnas"
int** crear_matriz(int filas, int columnas)
{
	int** matriz = new int* [filas];
	for (int i = 0; i < filas; i++)
		matriz[i] = new int[columnas];
	return matriz;
}

// Libera toda la memoria dinámica reservada por una matriz
void liberar_matriz(int** matriz, int filas)
{
	for (int i = 0; i < filas; i++)
		delete[] matriz[i];
	delete[] matriz;
}

int** agregar_fila(int** matrizVieja, int filasActuales, int columnas, int dividendo, int divisor, int respuesta, int correcto)
{
	int** matrizNueva = crear_matriz(filasActuales + 1, columnas);

	for (int i = 0; i < filasActuales; i++)
		for (int j = 0; j < columnas; j++)
			matrizNueva[i][j] = matrizVieja[i][j];

	matrizNueva[filasActuales][0] = dividendo;
	matrizNueva[filasActuales][1] = divisor;
	matrizNueva[filasActuales][2] = respuesta;
	matrizNueva[filasActuales][3] = correcto;

	liberar_matriz(matrizVieja, filasActuales);

	return matrizNueva;
}

void mostrar_historial(int** historial, int filas, int y_inicial)
{
	Console::SetCursorPosition(20, y_inicial);
	cout << "Resumen de tus intentos:";

	for (int i = 0; i < filas; i++)
	{
		Console::SetCursorPosition(20, y_inicial + 2 + i);
		cout << historial[i][0] << " / " << historial[i][1] << " = " << historial[i][2];
		cout << (historial[i][3] == 1 ? "   [Correcto]" : "   [Incorrecto]");
	}
}

void pantalla_ganaste(int peces, int** historial, int filasHistorial)
{
	system("cls");
	SetConsoleOutputCP(65001);

	Console::ForegroundColor = ConsoleColor::Green;
	Console::SetCursorPosition(20, 1);
	cout << "╔════════════════════════════════════════════════════╗";
	Console::SetCursorPosition(20, 2);
	cout << "║            ¡GANASTE! Abriste el portal             ║";
	Console::SetCursorPosition(20, 3);
	cout << "║   Conseguiste " << peces << " peces matematicos    ║";
	Console::SetCursorPosition(20, 4);
	cout << "╚════════════════════════════════════════════════════╝";
	Console::ResetColor();

	mostrar_historial(historial, filasHistorial, 7);

	Console::SetCursorPosition(20, 9 + filasHistorial);
	cout << "Presiona una tecla para volver al menu...";

	SetConsoleOutputCP(437);
}

void pantalla_perdiste(int** historial, int filasHistorial)
{
	system("cls");
	SetConsoleOutputCP(65001);

	Console::ForegroundColor = ConsoleColor::Red;
	Console::SetCursorPosition(20, 1);
	cout << "╔══════════════════════════════════════════╗";
	Console::SetCursorPosition(20, 2);
	cout << "║      GAME OVER - Te quedaste sin vidas   ║";
	Console::SetCursorPosition(20, 3);
	cout << "║           ¡Intentalo de nuevo!           ║";
	Console::SetCursorPosition(20, 4);
	cout << "╚══════════════════════════════════════════╝";
	Console::ResetColor();

	mostrar_historial(historial, filasHistorial, 7);

	Console::SetCursorPosition(20, 9 + filasHistorial);
	cout << "Presiona una tecla para volver al menu...";

	SetConsoleOutputCP(437);
}

int main()
{
	srand(time(0));  // para que los números sean distintos cada partida

	//Declaramos las variables de nuestro código
	int opcion = 0;
	int peces = 0;
	int vidas = 3;
	int gatitoX = 0;
	int gatitoY = 10;
	int ultimaTecla = 77; // empieza mirando a la derecha
	int dividendo, divisor, respuesta_correcta, respuesta_jugador;

	do
	{
		system("cls");

		SetConsoleOutputCP(65001);

		cout << " ┌───────┐ ┌───────┐ ┌───────┐ ┌───────┐ ┌───────┐" << endl;     
		cout << "═│∙  ╒═╕∙│═│∙  ╒═╕∙│═│∙╒═════╛═│∙  ╒═╕∙│═│∙  ╒═╕∙│" << endl;    
		cout << " │   └─┘ │ │   └┐└─┘▓│ └─────┐ │   │▓└─┘ │   └─┘ │" << endl;    
		cout << "░│   ╒═══╛░│   ┌┘┌─┐█╘═══╕  ∙│░│   │░┌─┐░│   ╒═╕ │" << endl;    
		cout << "▒│   │░░▒▓▒│   │░│ │▓┌───┘   │▒│   │░│ │▒│   │░│ │" << endl;    
		cout << "═│∙  │═════│∙  ╘═╛∙│═│∙     ∙│═│∙  ╘═╛∙│═│∙  │═│∙│" << endl;    
		cout << " ╘═══╛     ╘═══════╛ ╘═══════╛ ╘═══════╛ ╘═══╛ ╘═╛" << endl;

		cout << " ┌───────┐ ┌───────┐ ┌───────┐ ┌───┐ ┌─┐ ┌───────┐ ┌───────┐" << endl;
		cout << "═│∙  ╒═══╛═│∙  ╒═╕∙│═╘═╕∙ ·╒═╛═│∙  │═│∙│═│∙  ╒═╕·│═│∙  ╒═╕∙│" << endl;
		cout << " │   │┌──┐ │   └─┘ │░░▒│   │▒░░│   │█│ │ │   │▓│ │ │   └─┘ │" << endl;
		cout << "░│   │└┐·│░│   ╒═╕ │░░▒│   │▒░▒│   │▓│ │░│   │▒│ │░│   ╒═╕ │" << endl;
		cout << "▒│   │░│ │▒│   │░│ │░░▒│   │▒░▓│   └─┘ │▒│   │░│ │▒│   │░│ │" << endl;
		cout << "═│∙  ╘═╛∙│═│∙  │═│∙│═══│∙ ·│═══│∙     ∙│═│∙  │═│∙│═│∙  │═│∙│" << endl;
		cout << " ╘═══════╛ ╘═══╛ ╘═╛   ╘═══╛   ╘═══════╛ ╘═══╛ ╘═╛ ╘═══╛ ╘═╛" << endl;

		SetConsoleOutputCP(437);

		cout << "Alguna vez deseaste con ser un gatito resolviendo problemas matematicos en el fondo del oceano? Ahora puedes vivirlo!" << endl << endl;
		cout << "1. Jugar" << endl;
		cout << "2. Creditos" << endl;
		cout << "3. Como jugar" << endl;
		cout << "4. Salir" << endl;
		cout << "Elige una opcion: ";

		int cursorX = Console::CursorLeft;
		int cursorY = Console::CursorTop;

		ballena(60, 18);

		Console::SetCursorPosition(cursorX, cursorY);

		cin >> opcion;

		if (opcion == 1)
		{
			system("cls");

			peces = 0;
			vidas = 3;
			gatitoX = 0;
			gatitoY = 10;
			ultimaTecla = 77;

			const int cantidadPeces = 5;
			Pez* listapeces = new Pez[cantidadPeces];

			listapeces[0] = { 25, 5, true, 0 };
			listapeces[1] = { 55, 5, true, 0 };
			listapeces[2] = { 85, 5, true, 0 };
			listapeces[3] = { 35, 13, true, 0 };
			listapeces[4] = { 65, 13, true, 0 };

			const int columnasHistorial = 4;
			int filasHistorial = 0;
			int** historial = crear_matriz(0, columnasHistorial);

			//Primer Fotograma
			portal();
			_sleep(2000);

			gatito_saltando(20, 12);
			Sleep(300);
			system("cls");

			//Segundo Fotograma
			portal();
			_sleep(200);

			gatito_saltando(71, 17);
			Sleep(300);
			system("cls");

			//Tercer Fotograma
			portal();
			_sleep(200);

			gatito_saltando(93, 22);
			Sleep(300);
			system("cls");

			//Escenario 0
			burbujas();
			gatito(60, 10);
			mostrar_mensaje4(38, 20);
			algas(0, 25);
			algas(20, 25);
			algas(40, 25);
			algas(60, 25);
			algas(80, 25);
			algas(93, 25);
			Sleep(4000);
			system("cls");

			//Escenario 1
			burbujas();
			pulpo(3, 3);
			gatito_derecha(35, 20);
			pez_globo_1(65, 10);
			algas(0, 25);
			algas(20, 25);
			algas(40, 25);
			algas(60, 25);
			algas(80, 25);
			algas(93, 25);
			Sleep(3000);
			system("cls");

			//Escenario 2
			burbujas();
			pez_globo_2(65, 7);
			mostrar_mensaje(42, 17);
			algas(0, 25);
			algas(20, 25);
			algas(40, 25);
			algas(60, 25);
			algas(80, 25);
			algas(93, 25);
			Sleep(3000);
			system("cls");

			//Escenario 3
			burbujas();
			pez_globo_2(60, 7);
			mostrar_mensaje1(28, 17);
			algas(0, 25);
			algas(20, 25);
			algas(40, 25);
			algas(60, 25);
			algas(80, 25);
			algas(93, 25);
			Sleep(3000);
			system("cls");

			//Escenario 4
			burbujas();
			pez_globo_2(60, 7);
			mostrar_mensaje2(38, 17);
			algas(0, 25);
			algas(20, 25);
			algas(40, 25);
			algas(60, 25);
			algas(80, 25);
			algas(93, 25);
			Sleep(4000);
			system("cls");

			//Escenario 5
			burbujas();
			pez_globo_2(60, 7);
			mostrar_mensaje3(30, 17);
			algas(0, 25);
			algas(20, 25);
			algas(40, 25);
			algas(60, 25);
			algas(80, 25);
			algas(93, 25);
			Sleep(5000);
			system("cls");

			//Juego
			while (vidas > 0 && peces < 10)
			{
				system("cls");
				tablero(vidas, peces);

				for (int i = 0; i < cantidadPeces; i++)
				{
					if (listapeces[i].visible == false)
					{
						if (time(0) - listapeces[i].tiempo_desaparicion >= 10)
							listapeces[i].visible = true;
					}
				}

				dibujarpeces(listapeces, cantidadPeces);
				algas(0, 25);
				algas(20, 25);
				algas(40, 25);
				algas(60, 25);
				algas(80, 25);
				algas(93, 25);

				// Dibujar gatito según dirección
				if (ultimaTecla == 75)
					gatito_izquierda(gatitoX, gatitoY);
				else
					gatito_derecha(gatitoX, gatitoY);

				int tecla = _getch();

				if (tecla == 224)
				{
					tecla = _getch();
					if (tecla == 72)
					{
						gatitoY--;
					}

					else if (tecla == 80)
					{
						gatitoY++;
					}

					else if (tecla == 75)
					{
						gatitoX--;
						ultimaTecla = 75;
					}
					else if (tecla == 77)
					{
						gatitoX++;
						ultimaTecla = 77;
					}

					while (_kbhit()) _getch();

				}

				for (int i = 0; i < cantidadPeces; i++)
				{
					if (listapeces[i].visible == true)
					{
						int diferenciaX = gatitoX - listapeces[i].x;
						int diferenciaY = gatitoY - listapeces[i].y;

						if (abs(diferenciaX) < 15 && abs(diferenciaY) < 3)
						{
							listapeces[i].visible = false;

							generar_division(1, dividendo, divisor, respuesta_correcta);

							system("cls");
							Console::SetCursorPosition(30, 10);
							cout << "Resuelve: " << dividendo << " / " << divisor << " = ?";
							Console::SetCursorPosition(30, 12);

							cout << "Tu respuesta: ";
							respuesta_jugador = 0;
							char c;

							while (_kbhit()) _getch(); // limpiar antes

							while (true)
							{
								c = _getch();
								if (c == 13) break;        // Enter = terminar
								if (c >= '0' && c <= '9')  // solo acepta números
								{
									respuesta_jugador = respuesta_jugador * 10 + (c - '0');
									cout << c;             // mostrar el número que escribió
								}
							}

							int correcto = (respuesta_jugador == respuesta_correcta) ? 1 : 0;

							historial = agregar_fila(historial, filasHistorial, columnasHistorial, dividendo, divisor, respuesta_jugador, correcto);
							filasHistorial++;

							if (correcto == 1)
							{
								peces++;
								listapeces[i].visible = false;
								listapeces[i].tiempo_desaparicion = time(0);  // guarda el momento actual
							}

							else
							{
								vidas--;
								listapeces[i].visible = false;
								listapeces[i].tiempo_desaparicion = time(0);
							}
						}
					}
				}
			}

			if (peces >= 10)
				pantalla_ganaste(peces, historial, filasHistorial);
			else
				pantalla_perdiste(historial, filasHistorial);

			_getch();

			liberar_matriz(historial, filasHistorial);
			delete[] listapeces;
		}

		else if (opcion == 2)
		{
			system("cls");
			cout << "Hecho por: " << endl;
			cout << "Miauyummi" << endl;

			playa(40, 0);

			cout << " " << endl;

			system("pause");
		}

		else if (opcion == 3)
		{
			system("cls");
			cout << "En pesca gatuna, te convertiras en un adorable gatito que atraviesa un portal magico y" << endl;
			cout << "cae directo a un mundo submarino lleno de burbujas, algas bailarinas, pulpos curiosos y peces globo gigantes." << endl;
			cout << "Nada de un lado a otro, esquiva errores, junta 10 peces matematicos antes de quedarte" << endl;
			cout << "sin tus tres vidas, y descubre si tu gatito logra abrir la puerta hacia el siguiente mundo..." << endl;
			cout << "o si el oceano te gana esta ronda." << endl;

			castillo(50, 10);

			cout << " " << endl;

			system("pause");
		}

		else if (opcion == 4)
		{
			system("cls");
			cout << "¡Gracias por jugar Pesca Gatuna! Nos vemos pronto." << endl;
		}

		else
		{
			cout << "Opcion invalida" << endl;
			system("pause");
		}

	} while (opcion != 4);

	return 0;
}