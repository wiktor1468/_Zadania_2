//
// Created by wikto on 04.03.2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktura reprezentująca studenta
typedef struct {
    char imie[50];
    float ocenaKoncowa;
} Student;

// Funkcja sortująca studenci w porządku malejącym według oceny końcowej
void sortujStudentow(Student *studenci, int rozmiar) {
    for (int i = 0; i < rozmiar - 1; ++i) {
        for (int j = 0; j < rozmiar - i - 1; ++j) {
            if (studenci[j].ocenaKoncowa < studenci[j + 1].ocenaKoncowa) {
                // Zamiana miejscami
                Student temp = studenci[j];
                studenci[j] = studenci[j + 1];
                studenci[j + 1] = temp;
            }
        }
    }
}

int main() {

    const int liczbaStudentow = 100;
    Student studenci[liczbaStudentow];

    char dostepneImiona[][15] = {"Anna", "Bartosz", "Cecylia", "Dariusz", "Ewa",
                                 "Filip", "Grazyna", "Hubert", "Irena", "Jerzy"};



    for (int i = 0; i < liczbaStudentow; ++i) {
        int losowyIndeks = rand() % 10;
        sprintf(studenci[i].imie, dostepneImiona[losowyIndeks]);
        studenci[i].ocenaKoncowa = rand() % 41 / 10.0 +1.0;  // Losowa ocena z zakresu 0.0 do 5.0
    }

    // Wywołaj funkcję sortującą
    sortujStudentow(studenci, liczbaStudentow);

    // Wypisz posortowaną listę studentów wraz z ich ocenami
    printf("Posortowana lista studentow:\n");
    for (int i = 0; i < liczbaStudentow; ++i) {
        printf("%s - %.1f\n", studenci[i].imie, studenci[i].ocenaKoncowa);
    }

    return 0;
}