#include <iostream>
#include <cctype> //this is a decipher header 
using namespace std;

//Elikem Kalitsi Submitted May 1st 6:50PM 

/* Thank you for a great semester Dr. Lawrence :D 

   - Elikem K

*/
// Ceaser Cipher takes in a string, make sure it is a string and returns string with shift 3


int main(){
  
   
   ///string e;
   string str;
   string out;
   cout << "Enter word: ";
   getline(cin, str);
   
   for (int i = 0; i < str.length(); i++){
    char x = str[i];
    int number = (int(x) + 3);
    if(isalpha(x)){
        char b = islower(x) ? 'a' : 'A';
        x = b + (x - b + 3 + 26) % 26;
    }
     out  += x; 
    
   
   }
    
    //if (static_cast<unsigned char>(number) == '#'){
    //e += ' ';
   
   // else{
       // e += static_cast<unsigned char>(number);
    //}

  // }
   
  
   cout << "Decipher: " << out;


  return 0;

}
