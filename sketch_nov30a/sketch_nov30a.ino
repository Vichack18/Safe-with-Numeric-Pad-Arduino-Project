#include <Keypad.h>

const byte FILAS=4; // PQ vamos a usar 4 filas del pad //
const byte COLUMNAS=3; // " " columnas //
char keys[FILAS][COLUMNAS]{
  {'1','2','3'}, 
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
}; // QUE ES LO QUE el arduino tiene que leer cada vez q apretemos botones, esta expresado de manera
// textual //

// En donde estan conectadas las filas y columnas //
byte pinesFilas[FILAS]={8,7,6,5};
byte pinesColumnas[COLUMNAS]={4,3,2};

Keypad teclado=Keypad(makeKeymap(keys), pinesFilas, pinesColumnas, FILAS, COLUMNAS); 
// Funcion de la libreria //
char TECLA; // Almacenara la tecla que presionemos del pad


void setup() {
  // put your setup code here, to run once:
 Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  TECLA=teclado.getKey(); // tecla = a lo que lea de mi teclado // A lo que presione se guarda en TECLA
  if (TECLA){
    Serial.println(TECLA); // Imprimir que teclas estamos apretando
  }

}
