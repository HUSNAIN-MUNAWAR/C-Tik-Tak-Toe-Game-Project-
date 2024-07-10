#include<iostream>
using namespace std;
int main()
{
	
// VARIABLES DECLARE SECTION.
char a[3][3];
int i,p1,p2;
a[0][0]='1';
a[0][1]='2';
a[0][2]='3';
a[1][0]='4';
a[1][1]='5';
a[1][2]='6';
a[2][0]='7';
a[2][1]='8';
a[2][2]='9';

	
	
	
	
// MENUE SECTION.
cout<<"                   2 PLAYERS GAME ";
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"   PLAYER I :x ";
cout<<"                      PLAYER II:o";
cout<<"\n";

	
// GAME FIRST OUTLOOK.

cout<<"\n";
cout<<"\n";
cout<<"                  1 | 2 | 3 ";
cout<<"\n";
cout<<"                 ___|___|___ ";
cout<<"\n";
cout<<"                  4 | 5 | 6 ";
cout<<"\n";
cout<<"                 ___|___|___";
cout<<"\n";
cout<<"                  7 | 8 | 9 ";
cout<<"\n";
cout<<"                    |   |   ";
cout<<"\n";
cout<<"\n";
cout<<"NOTE: See The game OutLook Carefully And Write the Number Of the ";
cout<<"\n";
cout<<"        Place In Your Turn Where You Want to Mark Your Symbol ";
cout<<"\n";
cout<<"\n";


// GAME PLAYING SECTION.

for(i=0; i<4; i++)
{
cout<<"\n";
cout<<"\n";
cout<<"       "<<a[0][0]<<" |"<<a[0][1]<<"  |" <<a[0][2]  ;
cout<<"\n";
cout<<"      ___|___|___ ";
cout<<"\n";
cout<<"       "<<a[1][0]<<" |"<<a[1][1]<<"  |" <<a[1][2]  ;
cout<<"\n";
cout<<"      ___|___|___";
cout<<"\n";
cout<<"       "<<a[2][0]<<" |"<<a[2][1]<<"  |" <<a[2][2]  ;
cout<<"\n";
cout<<"         |   |   ";
cout<<"\n";
cout<<"\n";
cout<<"  PLAYER I: ";
cin>>p1;
if(p1==1)
{
	a[0][0]='x';
}
if(p1==2)
{
	a[0][1]='x';	
}
if(p1==3)
{
	a[0][2]='x';
}
if(p1==4)
{
	a[1][0]='x';
}
if(p1==5)
{
	a[1][1]='x';
}
if(p1==6)
{
	a[1][2]='x';
}
if(p1==7)
{
	a[2][0]='x';
}
if(p1==8)
{
	a[2][1]='x';
}
if(p1==9)
{
	a[2][2]='x';
}	

// RESULT CHECK.
if (a[2][0]==a[2][1] && a[2][0]==a[2][2] && a[2][1]==a[2][2] ||a[1][0]==a[1][1] && a[1][0]==a[1][2] && a[1][1]==a[1][2] || a[0][0]==a[0][1] && a[0][0]==a[0][2] && a[0][1]==a[0][2] || a[0][0]==a[1][0] && a[0][0]==a[2][0] && a[1][0]==a[2][0] || a[0][1]==a[1][1] && a[0][1]==a[2][1] && a[1][1]==a[2][1] ||a[0][2]==a[1][2] && a[0][2]==a[2][2] && a[1][2]==a[2][2] || a[0][0]==a[1][1] && a[0][0]==a[2][2] && a[1][1]==a[2][2] || a[0][2]==a[1][1] && a[0][2]==a[2][0] && a[1][1]==a[2][0] )
{
	cout<<"\n";
  cout<<"         CONGRADULATION PLAYER I YOU  WIN" ;  
  i=i+5;   
}
else 
{
cout<<"\n";
cout<<"       "<<a[0][0]<<" |"<<a[0][1]<<"  |" <<a[0][2]  ;
cout<<"\n";
cout<<"      ___|___|___ ";
cout<<"\n";
cout<<"       "<<a[1][0]<<" |"<<a[1][1]<<"  |" <<a[1][2]  ;
cout<<"\n";
cout<<"      ___|___|___";
cout<<"\n";
cout<<"       "<<a[2][0]<<" |"<<a[2][1]<<"  |" <<a[2][2]  ;
cout<<"\n";
cout<<"         |   |   ";
cout<<"\n";
cout<<"\n";	
cout<<"  PLAYER II : ";
cin>>p2;
if(p2==1)
{
	a[0][0]='o';
}
if(p2==2)
{
	a[0][1]='o';	
}
if(p2==3)
{
	a[0][2]='o';
}
if(p2==4)
{
	a[1][0]='o';
}
if(p2==5)
{
	a[1][1]='o';
}
if(p2==6)
{
	a[1][2]='o';
}
if(p2==7)
{
	a[2][0]='o';
}
if(p2==8)
{
	a[2][1]='o';
}
if(p2==9)
{
	a[2][2]='o';
}
// RESULT CHECK.
if (a[2][0]==a[2][1] && a[2][0]==a[2][2] && a[2][1]==a[2][2] ||a[1][0]==a[1][1] && a[1][0]==a[1][2] && a[1][1]==a[1][2] || a[0][0]==a[0][1] && a[0][0]==a[0][2] && a[0][1]==a[0][2] || a[0][0]==a[1][0] && a[0][0]==a[2][0] && a[1][0]==a[2][0] || a[0][1]==a[1][1] && a[0][1]==a[2][1] && a[1][1]==a[2][1] ||a[0][2]==a[1][2] && a[0][2]==a[2][2] && a[1][2]==a[2][2] || a[0][0]==a[1][1] && a[0][0]==a[2][2] && a[1][1]==a[2][2] || a[0][2]==a[1][1] && a[0][2]==a[2][0] && a[1][1]==a[2][0] )
{
  cout<<"\n";
  cout<<"          CONGRADULATION PLAYER II YOU  WIN" ;
  i=i+5;     
}
if(i==3)
{
	cout<<"               NO ONE WIN         ";
}
}
}
	
}	

