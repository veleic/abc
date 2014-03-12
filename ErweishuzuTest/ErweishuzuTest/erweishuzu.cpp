#include <iostream>
using namespace std;


int main(void){

	// char str[3][10]
	 char** str;
	 str = new char*[3];
	  for (int i = 0; i<3; i++){
		  str[i] = new char[10];
	  }

	  for (int i = 0; i<3; i++){
		  delete[] str[i];
	  }
	  delete str;

	  //----------------------------

	  struct a{
		  char* name;
		  a(){printf("%s\n","aaa");}
		  a(char* n){
			  name = new char[20]; 
			  strcpy(name, n);
			  printf("%s\n", name);
		  }
	  };

	  a aaa();  //Õâ¾ä                                                     
	   //a aaa;
	  a bbb("bbb");
	  system("pause");
	  return 0;
}