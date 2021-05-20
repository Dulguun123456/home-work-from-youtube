#include<iostream>
using namespace std;
int main()
{
	int secretNum=9;	  //nuuts toogoo uguw.
	int guess;            //taah too.
	int guessCount=0;     //0-s ehleed taah hyazgaart ugsun too hvrtel tool.
	int guessLimit=3;     //taah hyazgaarn.
	bool outOfGuesses=false;  //taahn hudal bol.
	
	while(secretNum !=guess && !outOfGuesses){
		if(guessCount<guessLimit){
		
		cout<<"Enter guess: ";  // herew taasan too hyazgaaraas dawaagvi bol vrgeljlvvl
		cin>>guess;              // tegeed taahiig vrgeljlvvlne
		guessCount++;            //taahn nemegden toologdono
	}else {
		outOfGuesses=true;	      //herew taasan n taarsan bol
	}	
	
	}
	if(outOfGuesses){
		cout<<"You Lose!";	  //herew taahn  hudal bgaad 3n bolwol
	}else {
		cout<<"You are win!"; // vvnees uur vr dvn bol 
	}
	return 0;
}
