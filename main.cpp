#include<iostream>
using namespace std;

//Generates random number between 1-100
int getNum(){
  srand(time(0));
  int answer = rand() %100 +1;
  return answer;
}

int main(){
  const int totalGuesses = 5;
  int guess;
  cout<<"You have 5 tries\n"; 
  // a list to store the guesses entered by the user
  int list [5] = {0, 0, 0, 0, 0}; 
  //use the getNum function to generate a new number
  int answer = getNum();
  int count = 0;
  //loop to check if guess was correct
  while (guess != answer && count < totalGuesses) {
    
    cout <<"Enter your guess between 1 and 100: ";  // Prompts user for name
    cin >> guess;
    list[count] = guess;
    if(guess > answer){
      cout<< "Guess was too high!\n";
      cout<< "Tries left: ";
      cout<< 4-count;
      cout<< "\n";
      }
    else if(guess< answer){
      cout<<"Guess was too low!\n";
      cout<<"Tries left: ";
      cout<<4-count;
      cout<<"\n";
      
    }
    else{
      cout<<"Congratulations, you got it! \n";
    }
    count++;
  }
  // Output the answer
  cout<<"The answer was: ";
  cout<<answer;
  // Output user guesses
  cout<<"\nThese were your guesses: ";
      for(int i =0; i < totalGuesses;i++){
        if(list[i] != 0){
          cout<<list[i];
          cout<<" ";
        }    
      }
  return 0;
}


