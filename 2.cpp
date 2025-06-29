/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */

#include <iostream>
#include <algorithm>

using namespace std;

bool isAnagram(string word1, string word2){
  
  if (word1 != word2 && word1.size() == word2.size())
  {
    int wordSize = word1.size();
    int check = 0;
    transform(word2.begin(), word2.end(), word2.begin(),
      [](unsigned char c){ return std::tolower(c); });

    for (int i = 0; i <= (wordSize - 1); i++)
    {
      char letter = tolower(word1[i]);
      check = count((word2.begin()), (word2.end()), letter) + check;
    }
    if (check == wordSize){
      return true;
    }else{
     return false;
    }
  }
  return false;
}

int main() {
  cout<<isAnagram("La Tele Letal", "La LetalTele");
  return 0;
}