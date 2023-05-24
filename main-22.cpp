#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
string first_name;
string last_name;
string salary;
string increase;
string line;
int i=0;
fstream file;
file.open("Ch3_Ex5Data.txt");
while(getline(file,line)){
  for(int j=0; j<sizeof(line);j++){
    if(line[j]==' '){
      i=i+1;  
    }
    if(i==0){
      last_name+=line[j];
    }
    else if(i==1){
      first_name+=line[j];
    }
    else if(i==2){
      salary+=line[j];
    }
    else if(i==3){
      increase+=line[j];
      
    }
  }
  i=0;
  first_name="";
  last_name="";
  salary="";
  increase="";
}

    return 0;
}

