
		/*1.Beta Version
		Game works. Logic is set. UI has to be worked on.
		*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<iomanip.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
#include<ctype.h>

 void display(char mat[10][10])
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			cout<<mat[i][j]<<" ";

		cout<<endl;
	}

}

void crossout(char mat[10][10],int i, int j,int ch,char c)
{
	int a;
	if(c=='V')
	{
		switch(ch)
		{
			case 1: { for(a=i;a<(i+5);a++)
						mat[a][j]='C';
						break;
						}

			case 2:	{ for(a=i;a<(i+4);a++)
						mat[a][j]='B';
						break;
						}
			case 3:	{ for(a=i;a<(i+3);a++)
						mat[a][j]='R';
						break;
							}
			case 4:	{ for(a=i;a<(i+3);a++)
						mat[a][j]='S';
						break;
						}
			case 5:  { for(a=i;a<(i+2);a++)
						mat[a][j]='D';
						break;
						}
		}
	}

	if(c=='H')
	{
		switch(ch)
		{
			case 1: { for(a=j;a<(j+5);a++)
						mat[i][a]='C';
						break;
						}

			case 2:	{ for(a=j;a<(j+4);a++)
						mat[i][a]='B';
						break;
						}
			case 3:	{ for(a=j;a<(j+3);a++)
						mat[i][a]='R';
						break;
							}
			case 4:	{ for(a=j;a<(j+3);a++)
						mat[i][a]='S';
						break;
						}
			case 5:  { for(a=j;a<(j+2);a++)
						mat[i][a]='D';
						break;
						}
		}
	}



}
 void defaul(char mat[10][10],char arr[10][10])
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		mat[i][j]='0';
	}

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		arr[i][j]='0';
	}
}


void shipposition(char mat[10][10],char arr[10][10])    //Checking whether position goes out of
{                                                       //board or if it overlaps and stuff like that.
	int i,j,ctr=0;
	ifstream fin;
	char string[80],c;

	int ch;

		display(mat);
		cout<<"\nPlayer 1 input the positions of your ships. Press enter to begin";
		getch();
		clrscr();

		while(ctr<5)

		{
			clrscr();
			cout<<"\n1.You have one CARRIER. Occupies 5 spaces on your 10 X 10 grid.";
			cout<<"\n2.You have one BATTLESHIP. Occupies 4 spaces on your 10 X 10 grid.";
			cout<<"\n3.You have one CRUISER. Occupies 3 spaces on your 10 X 10 grid.";
			cout<<"\n4.You have one SUBMARINE. Occupies 3 spaces on your 10 X 10 grid.";
			cout<<"\n5.You have one DESTROYER. Occupies 2 spaces on your 10 X 10 grid.";
			cout<<"Enter choice:";
			cin>>ch;
			clrscr();
			fin.open("Grid.txt");

			while(fin)
				{
					fin.getline(string,80);
					cout<<string<<endl;
				}
			fin.close();
			if(ch==1)
			{
				display(mat);
				cout<<"\nEnter V if placing vertical(Will be filled downwards). H if placing horizontal(Will be filled to right)";
				cin>>c;
				if(c=='V')
				{		cout<<"Enter the column number";
						cin>>j;
						cout<<"Enter the starting row-number";
						cin>>i;
						crossout(mat,i,j,ch,c);
				}
				if(c=='H')
				{		cout<<"Enter the row number";
						cin>>i;
						cout<<"Enter the starting column-number";
						cin>>j;
						crossout(mat,i,j,ch,c);
				}


				ctr++;
			}
			else
			if(ch==2)
			{
				display(mat);
				cout<<"\n Enter V if placing vertical(Will be filled downwards). H if placing horizontal(Will be filled to right)";
				cin>>c;
				if(c=='V')
				{		cout<<"Enter the column number";
						cin>>j;
						cout<<"Enter the starting row-number";
						cin>>i;
						crossout(mat,i,j,ch,c);
				}
				if(c=='H')
				{		cout<<"Enter the row number";
						cin>>i;
						cout<<"Enter the starting column-number";
						cin>>j;
						crossout(mat,i,j,ch,c);
				}


				ctr++;
			}
			else
			if(ch==3)
			{
				display(mat);
				cout<<"\n Enter V if placing vertical(Will be filled downwards). H if placing horizontal(Will be filled to right)";
				cin>>c;
				if(c=='V')
				{		cout<<"Enter the column number";
						cin>>j;
						cout<<"Enter the starting row-number";
						cin>>i;
						crossout(mat,i,j,ch,c);
				}
				if(c=='H')
				{		cout<<"Enter the row number";
						cin>>i;
						cout<<"Enter the starting column-number";
						cin>>j;
						crossout(mat,i,j,ch,c);
				}


				ctr++;
			}
			else
			if(ch==4)
			{
				display(mat);
				cout<<"\n Enter V if placing vertical(Will be filled downwards). H if placing horizontal(Will be filled to right)";
				cin>>c;
				if(c=='V')
				{		cout<<"Enter the column number";
						cin>>j;
						cout<<"Enter the starting row-number";
						cin>>i;
						crossout(mat,i,j,ch,c);
				}
				if(c=='H')
				{		cout<<"Enter the row number";
						cin>>i;
						cout<<"Enter the starting column-number";
						cin>>j;
						crossout(mat,i,j,ch,c);
				}


				ctr++;
			}
			if(ch==5)
			{
				display(mat);
				cout<<"\n Enter V if placing vertical(Will be filled downwards). H if placing horizontal(Will be filled to right)";
				cin>>c;
				if(c=='V')
				{		cout<<"Enter the column number";
						cin>>j;
						cout<<"Enter the starting row-number";
						cin>>i;
						crossout(mat,i,j,ch,c);
				}
				if(c=='H')
				{		cout<<"Enter the row number";
						cin>>i;
						cout<<"Enter the starting column-number";
						cin>>j;
						crossout(mat,i,j,ch,c);
				}


				ctr++;
			}
		}
		clrscr();
		ctr=0;
		display(arr);
		cout<<"\nPlayer 2 input the positions of your ships. Press enter to begin";
		getch();
		clrscr();


		while(ctr<5)

		{
			clrscr();
			cout<<"\n1.You have one CARRIER. Occupies 5 spaces on your 10 X 10 grid.";
			cout<<"\n2.You have one BATTLESHIP. Occupies 4 spaces on your 10 X 10 grid.";
			cout<<"\n3.You have one CRUISER. Occupies 3 spaces on your 10 X 10 grid.";
			cout<<"\n4.You have one SUBMARINE. Occupies 3 spaces on your 10 X 10 grid.";
			cout<<"\n5.You have one DESTROYER. Occupies 2 spaces on your 10 X 10 grid.";
			cout<<"Enter choice:";
			cin>>ch;
			clrscr();

			fin.open("Grid.txt");
			while(fin)
				{
					fin.getline(string,80);
					cout<<string;
					cout<<endl;
				}
			fin.close();
			if(ch==1)
			{
				display(arr);
				cout<<"\n Enter V if placing vertical(Will be filled downwards). H if placing horizontal(Will be filled to right)";
				cin>>c;
				if(c=='V')
				{		cout<<"Enter the column number";
						cin>>j;
						cout<<"Enter the starting row-number";
						cin>>i;
						crossout(arr,i,j,ch,c);
				}
				if(c=='H')
				{		cout<<"Enter the row number";
						cin>>i;
						cout<<"Enter the starting column-number";
						cin>>j;
						crossout(arr,i,j,ch,c);
				}


				ctr++;
			}
			else
			if(ch==2)
			{
				display(arr);
				cout<<"\n Enter V if placing vertical(Will be filled downwards). H if placing horizontal(Will be filled to right)";
				cin>>c;
				if(c=='V')
				{		cout<<"Enter the column number";
						cin>>j;
						cout<<"Enter the starting row-number";
						cin>>i;
						crossout(arr,i,j,ch,c);
				}
				if(c=='H')
				{		cout<<"Enter the row number";
						cin>>i;
						cout<<"Enter the starting column-number";
						cin>>j;
						crossout(arr,i,j,ch,c);
				}


				ctr++;
			}
			else
			if(ch==3)
			{
				display(arr);
				cout<<"\n Enter V if placing vertical(Will be filled downwards). H if placing horizontal(Will be filled to right)";
				cin>>c;
				if(c=='V')
				{		cout<<"Enter the column number";
						cin>>j;
						cout<<"Enter the starting row-number";
						cin>>i;
						crossout(arr,i,j,ch,c);
				}
				if(c=='H')
				{		cout<<"Enter the row number";
						cin>>i;
						cout<<"Enter the starting column-number";
						cin>>j;
						crossout(arr,i,j,ch,c);
				}


				ctr++;
			}
			else
			if(ch==4)
			{
				display(arr);
				cout<<"\n Enter V if placing vertical(Will be filled downwards). H if placing horizontal(Will be filled to right)";
				cin>>c;
				if(c=='V')
				{		cout<<"Enter the column number";
						cin>>j;
						cout<<"Enter the starting row-number";
						cin>>i;
						crossout(arr,i,j,ch,c);
				}
				if(c=='H')
				{		cout<<"Enter the row number";
						cin>>i;
						cout<<"Enter the starting column-number";
						cin>>j;
						crossout(arr,i,j,ch,c);
				}


				ctr++;
			}
			if(ch==5)
			{
				display(arr);
				cout<<"\n Enter V if placing vertical(Will be filled downwards). H if placing horizontal(Will be filled to right)";
				cin>>c;
				if(c=='V')
				{		cout<<"Enter the column number";
						cin>>j;
						cout<<"Enter the starting row-number";
						cin>>i;
						crossout(arr,i,j,ch,c);
				}
				if(c=='H')
				{		cout<<"Enter the row number";
						cin>>i;
						cout<<"Enter the starting column-number";
						cin>>j;
						crossout(arr,i,j,ch,c);
				}


				ctr++;
			}
		}
		fin.close();

}


void hitormiss(char arr[10][10],char bord2[10][10],int i,int j)
{
	if(isalpha(arr[i][j])!=0)
		{
			arr[i][j]='0';
		  bord2[i][j]='H';
		}
	else
	{
		bord2[i][j]='M';

	}

}

int resultcheck(char mat[10][10])
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			{
				if(isalpha(mat[i][j])!=0)
					return 1;
			}

	}

	return 0;
}


void borddisplay(char bord1[10][10],char bord2[10][10])
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			{
				cout<<bord1[i][j];
			}
		cout<<endl;
	}

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			{
				cout<<bord2[i][j];
			}
		cout<<endl;
	}
}

void actualgame(char mat[10][10],char arr[10][10],char bord1[10][10],char bord2[10][10])
{
  ifstream fin;
  int ch1=1,ch2=1,ctr1=0,ctr2=0,i,j;
  char string[80];

  while(ch1==1&&ch2==1)
  {

	  borddisplay(bord1,bord2);               //Have to check wheteher i or j>9
	  fin.open("Grid.txt");                  //Have to check whether position is repeated.
			while(fin)                         //Not very necessary.
				{
					fin.getline(string,80);
					cout<<string<<endl;
				}
	  fin.close();
	  cout<<"Player 1 enter the position where you wish to attack(row,column)";
	  cin>>i>>j;
	  hitormiss(arr,bord2,i,j);
	  ctr1++;                                      //Have to define hitormiss

	  clrscr();
																  //What if player one wins? No need to do the next.
	  borddisplay(bord1,bord2);
	  fin.open("Grid.txt");
			while(fin)
				{
					fin.getline(string,80);
					cout<<string<<endl;
				}
	  fin.close();
	  cout<<"Player 2 enter the position where you wish to attack(row,column)";
	  cin>>i>>j;
	  hitormiss(mat,bord1,i,j);
	  ctr2++;

	  ch1=resultcheck(mat);
	  ch2=resultcheck(arr);       //Define resultcheck
  }
  if(ch1==0)
	{
		clrscr();
		cout<<"PLAYER TWO WINS!";
		getch();
	}
  else
  if(ch2==0)
  {
		clrscr();
		cout<<"PLAYER ONE WINS!";
		getch();
  }
}

void main()
{
	char mat[10][10],arr[10][10],bord1[10][10],bord2[10][10];
	defaul(mat,arr);
	defaul(bord1,bord2);
	shipposition(mat,arr);
	actualgame(mat,arr,bord1,bord2);

}
