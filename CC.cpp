#include <iostream>
using namespace std;
int main(){
unordered_map<string, int> umap; 
umap["A"] = 1;
umap["B"] = 2;
umap["C"] = 3;
umap["D"] = 4;
umap["E"] = 5;
umap["F"] = 6;
umap["G"] = 7;
umap["H"] = 8;
umap["I"] = 9;
umap["J"] = 10;
umap["K"] = 11;
umap["L"] = 12;
umap["M"] = 13;
umap["N"] = 14;
umap["O"] = 15;
umap["P"] = 16;
umap["Q"] = 17;
umap["R"] = 18;
umap["S"] = 19;
umap["T"] = 20;
umap["U"] = 21;
umap["V"] = 22;
umap["W"] = 23;
umap["X"] = 24;
umap["Y"] = 25;
umap["Z"] = 27;


string word;
cout << " Hello Enter Word: ";
cin >> word; 
cout << endl;

int vall; 
string temp;

for (int i = 0; i < word.length(); i++){
  vall = 0; 
  temp = ""
  if (umap.find(word[i]) == umap.end()){
      umap.find(word[i]) = vall;
      umap.find(vall) = key;
      if ((vall + 3) > 26) {
          vall = vall % 26;
          
      }
      else{
        vall += 3; 
      
      }
     temp = umap.find(key) == val;
          string += temp;

  }

  cout << "Ceaser Cipher: " << word;

}


return 0;
}
