#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
ifstream inFile;
ofstream outFile;
inFile.open("inData.txt");
outFile.open("outData.txt");
int spaces=0;
string word;
string newWord1;
if(inFile.is_open()){
  while(getline(inFile,word)){
    for(int i=0; i<sizeof(word); i++){
      newWord1+= word[i];
      if(word[i]==' '){
        spaces += 1;
      }
    }
  }
}

    return 0;
}
