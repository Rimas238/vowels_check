


#include <iostream>
using namespace std;
//by Rimas Faiz
bool isVowel(char X) {
  if(X=='a'||X=='A'){
    return true;
  }//by Rimas Faiz

    else if (X=='e'||X=='E'){
      return true;
    }//by Rimas Faiz

      else if (X=='i'||X=='I') {  
      return true;
      }//by Rimas Faiz

      else if (X=='o'||X=='O'){
         return true;
      }//by Rimas Faiz

        else if (X=='u'||X=='U'){
          return true;
        }
        else{
           return false;
        }//by Rimas Faiz


  }
   //by Rimas Faiz

int main() {
    int count = 0;
    char Vowel_Letter;
//by Rimas Faiz

    char do_continue= 'y';
//by Rimas Faiz

    while (do_continue == 'y') {
        cout << "Enter a value of ch: ";
        cin >> input;

        if (isVowel(Vowel_Letter)) {
            count++;
        }//by Rimas Faiz


        cout << "Do you want to continue (y/n)? : ";
//by Rimas Faiz

        cin >> do_continue;
    }//by Rimas Faiz


    cout << "Number of vowels entered: " << count << endl;//by Rimas Faiz

//by Rimas Faiz

    return 0;
}
