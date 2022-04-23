#include <iostream>
#include <string>

enum note
{
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};

int main() {
    char note_c;
    int notes, note_i, melody_1[12], melody_2[12], melody_3[12];
    std::string melody, accord;
    std::cout << "Enter the note code from 0 to 6: \n";
    std::cin >> melody;

    for (int i = 0, t = 0, j = 0; i < melody.length(); i++) {
        note_c = melody[i];
        note_i = note_c - '0';

        if (i < 12) {
            melody_1[i] = note_i;
        }
        if (i >= 12 && i < 24) {
            melody_2[t] = note_i;
            t++;
        }
        if (i >= 24 && i < 36) {
            melody_3[j] = note_i;
            j++;
        }
    }
   std::cout << "The first melody:";
    for(int l = 0; l < 12; l++) {
        notes = 1 << melody_1[l];
        if (notes & DO) {
            std::cout << "DO" << " ";
        }
        if (notes & RE) {
            std::cout << "RE" << " ";
        }
        if (notes & MI) {
            std::cout << "MI" << " ";
        }
        if (notes & FA) {
            std::cout << "FA" << " ";
        }
        if (notes & SOL) {
            std::cout << "SOL" << " ";
        }
        if (notes & LA) {
            std::cout << "LA" << " ";
        }
        if (notes & SI) {
            std::cout << "SI" << " ";
        }
        }
    notes = 0;
    std::cout << "\nThe second melody:";
    for(int j = 0; j < 12; j++) {
        notes = 1 << melody_2[j];
        if (notes & DO) {
            std::cout << "DO" << " ";
        }
        if (notes & RE) {
            std::cout << "RE" << " ";
        }
        if (notes & MI) {
            std::cout << "MI" << " ";
        }
        if (notes & FA) {
            std::cout << "FA" << " ";
        }
        if (notes & SOL) {
            std::cout << "SOL" << " ";
        }
        if (notes & LA) {
            std::cout << "LA" << " ";
        }
        if (notes & SI) {
            std::cout << "SI" << " ";
        }
    }
    notes = 0;
    std::cout << "\nThe third melody:";
    for(int y = 0; y < 12; y++) {
        notes = 1 << melody_3[y];
        if (notes & DO) {
            std::cout << "DO" << " ";
        }
        if (notes & RE) {
            std::cout << "RE" << " ";
        }
        if (notes & MI) {
            std::cout << "MI" << " ";
        }
        if (notes & FA) {
            std::cout << "FA" << " ";
        }
        if (notes & SOL) {
            std::cout << "SOL" << " ";
        }
        if (notes & LA) {
            std::cout << "LA" << " ";
        }
        if (notes & SI) {
            std::cout << "SI" << " ";
        }
    }
    return 0;
}
