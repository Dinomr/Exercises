/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */

#include <iostream>
#include <cstring>

using namespace std;

bool isAnagram(string word1, string word2)
{
    if (word1 == word2 || word1.size() != word2.size())
    {
        return false;
    }
    int check1 = 0, check2 = 0;
    for (int i = 0; i <= word1.size() - 1; i++)
    {
        check1 += tolower(word1[i]);
        check2 += tolower(word2[i]);
    }
    if (check1 == check2)
    {
        return true;
    }
    return false;
}

int main ()
{
    cout<<isAnagram("mar", "RAM");
}