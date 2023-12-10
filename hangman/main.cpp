#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printHangMan1(){
    
    cout << "_______\n";
    cout << "|     |\n";
    cout << "|     |\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "==========\n";
    
}
void printHangMan2(){
    
    cout << "_______\n";
    cout << "|     |\n";
    cout << "|     |\n";
    cout << "|   ['.']\n";
    cout << "|\n";
    cout << "|\n";
    cout << "|\n";
    cout << "==========\n";
    
}
void printHangMan3(){
    
    cout << "_______\n";
    cout << "|     |\n";
    cout << "|     |\n";
    cout << "|   ['.']\n";
    cout << "|     |\n";
    cout << "|\n";
    cout << "|\n";
    cout << "==========\n";
    
}
void printHangMan4(){
    
    cout << "_______\n";
    cout << "|     |\n";
    cout << "|     |\n";
    cout << "|   ['.']\n";
    cout << "|     |\n";
    cout << "|    /\n";
    cout << "|\n";
    cout << "==========\n";
    
}
void printHangMan5(){
    
    cout << "_______\n";
    cout << "|     |\n";
    cout << "|     |\n";
    cout << "|   ['.']\n";
    cout << "|     |\n";
    cout << "|    /`\\ \n";
    cout << "|\n";
    cout << "==========\n";
    
}
void printHangMan6(){
    
    cout << "_______\n";
    cout << "|     |\n";
    cout << "|     |\n";
    cout << "|   ['.']\n";
    cout << "|    -|\n";
    cout << "|    /`\\ \n";
    cout << "|\n";
    cout << "==========\n";
    
}
void printHangMan7(){
    
    cout << "_______\n";
    cout << "|     |\n";
    cout << "|     |\n";
    cout << "|   ['.']\n";
    cout << "|    -|-\n";
    cout << "|    /`\\ \n";
    cout << "|\n";
    cout << "==========\n";
    
}
void printWelcome(){
    cout << "*******************\n";
    cout << " The Hang Man Game \n";
    cout << "*******************\n";
    cout << "  Enter Your Word  \n";
}

int main() {
   string word;
   
   char letter;
   string board;
   int misses = 0;
   vector<char> incorrect;
   printWelcome();
   getline(cin, word);
   cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   string answer(word.length(), '_');
   
   int temp = 0;
  
       printHangMan1();
       cout << "\nEnter a letter: ";
       cin >> letter;
   while (answer != word && misses < 7) {
       
       bool correctGuess = false;
   for(int i = 0; i < word.length(); i++){
       if(letter == word[i]){
           answer[i] = word[i];
           cout << answer[i];
           correctGuess = true;
       }
       
   }
           if (correctGuess) {
        cout << "\nCorrect Guess: " << answer << endl;
    } else {
        cout << "Guesses" << endl;
        incorrect.push_back(letter);
        
        for (int i = 0; i < incorrect.size(); i++) {
        cout << incorrect[i] << " ";
    }
    
    cout << endl;
        misses++;
    }
    switch (misses) {
            case 1: printHangMan1(); break;
            case 2: printHangMan2(); break;
            case 3: printHangMan3(); break;
            case 4: printHangMan4(); break;
            case 5: printHangMan5(); break;
            case 6: printHangMan6(); break;
            case 7: printHangMan7(); break;
        }
       cout << "\nCorrect Guess: " << answer << endl;
       cout << "Guesses" << endl;
        for (int i = 0; i < incorrect.size(); i++) {
        cout << incorrect[i] << " ";
    }
       cout << "\nTake another guess: \n";
       cin >> letter;
   }
   if(misses == 7){
       cout << "boohoo better luck next time\n";
   }else{
       cout << "GOOD JOB YOU WIN!\n";
   }
   
   
   
   
   
   return 0;
}