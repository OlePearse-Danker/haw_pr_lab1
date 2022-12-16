// Praktikumsaufgbabe 1
// Die Antwort auf alles 
// Autor: Jakob Sarich, Ole Pearse-Danker
// Datum: 12.10.2022
// Version: 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // Bibliothek beinhaltet die Funktion "system"


// Prototypen damit der Compiler weiß
// dass diese Methoden existieren
int ask_question();



int main()
{
   
    int ch;     // Variable für die Wiederholungseingabe
                // d.h für die Do-while Bedingung

    // Ausführung der Frage an den Nutzer und deren Wiederholung
    // Do-while damit die Bedingung überprüft wird
    // Aber erst nachdem die Frage gestellt wurde
    do
    {
        // Bildschirm löschen
        system("clear");



        // Benutzer grüßen
        printf("Hallo!\n\n");

        // Die Frage nach der Antwort auf alles stellen
        int  answer = ask_question();
        

        // Fragen ob man wiederholen möchte
        printf("Wollen Sie es nochmal probieren? ['j' fuer Ja | 'n' fuer Nein]: ");
        ch = getchar();
        // Eingabe Puffer leeren
    while ((getchar()) != '\n');

    } while (ch == 'j' );


    // return 0 falls die Ausführung in Ordnung ist
    return 0;
}

// Fragestellung implementieren
// 
// Fragestellung
// Eingabe erhalten
//
// Auf Eingabe antworten
// Eingabe Wert zurückgeben
int ask_question()
{
    // Variabeln für die Eingabe festlegen
    int i;

    // Die Frage stellen
    printf("Was ist die Antwort auf alles?\n");
    printf("->");

    // Eingabe lesen
    // Eingabe Format auslesen

    

    scanf("%d,", &i);
    
    

    // if-Bedingung, um auf die Eingabe zu antworten
    if (i == 42)
    {
        printf("Richtig, gut gemacht!\n");
    
    }
    else
    {
        printf("Leider nein.\n\n");
    }

    // Eingabe Puffer leeren
    while ((getchar()) != '\n') 

    // return Antwort zurückgeben für weitere Benutzung 
    return i;
}



