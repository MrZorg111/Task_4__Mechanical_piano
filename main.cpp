#include <iostream>
#include <string>
#include <cstdlib>

/*
 * Создайте упрощённую модель механического пианино.
 * Всего у данного пианино семь клавиш, которые соответствуют семи нотам.
 * Каждая клавиша кодируется уникальной битовой маской, которая записывается в enum.
 * В начале программы пользователь вводит мелодию.
 * Ввод осуществляется с помощью цифр на клавиатуре, от 1 до 7 включительно (от ноты до до ноты си).
 * В результате из чисел может быть составлена любая комбинация нот. К примеру 512 или 154.
 * После ввода комбинации вводится следующая. Всего таких комбинаций нот — 12.
 * Как только все комбинации были введены пользователем, мелодия проигрывается.
 * Для этого каждая комбинация нот последовательно выводится на экран.
 * Однако на этот раз она печатается «красиво», то есть все ноты указываются словами, а не цифрами.
 * При этом слова разделяются пробелами.
 * Рекомендации
 * Для вычленения отдельных символов-цифр из строки с нотами используйте оператор индексации строки.
 * Для дальнейшей конвертации символа в строку используйте соответствующий конструктор.
 * Для простоты, чтобы из индекса ноты получить саму ноту-флаг из enum, используйте оператор сдвига.
 * Общая формула такова: 1 << индекс ноты (начинается с нуля).
 * К примеру, 1 << 0 — битовый флаг ноты до, 1 << 6 — битовая маска ноты си.
 */
enum note
{
    DO = 1,
    RE = 2,
    MI = 3,
    FA = 4,
    SOL = 5,
    LA = 6,
    SI = 7
};

int main() {
    int melody[12];
    std::cout << "Enter the note code from 1 to 7: \n";
    for( int i = 0; i < 12; i++) {
        std::cin >> melody[i];
    }

    for(int l = 0; l < 12; l++) {
        if (melody[l] == DO) {
            std::cout << "DO";
        }
        if (melody[l] == RE) {
            std::cout << "RE";
        }
        if (melody[l]== MI) {
            std::cout << "MI";
        }
        if (melody[l] == FA) {
            std::cout << "FA";
        }
        if (melody[l] == SOL) {
            std::cout << "SOL";
        }
        if (melody[l] == LA) {
            std::cout << "LA";
        }
        if (melody[l] == SI) {
            std::cout << "SI";
        }
        if (l == 2 || 5 || 8 ) {
            std::cout << " ";
        }


        }
    return 0;
}
