#include <iostream>
#include <string>
#include <ctime>
using namespace std;
static int c1=5,c2=5,c3=5,c4=5,c5=5,c6=5,c7=5;
void shape()
{
	system("cls");
	char matrix[6][7];
	for (int i=0;i<6;i++)
	for(int j=0;j<7;j++)
		matrix[i][j]='-';
	cout<<" \t\t\t\t\t\tConnect 4 Game "<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t | 1 | 2 | 3 | 4 | 5 | 6 | 7 |"<<endl<<endl;
for (int i=0;i<6;i++)
{
	for(int j=0;j<7;j++)
	{
		if(i==0 && j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
		else if(i==1 && j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
					else if(i==2&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
				else if(i==3&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
						else if(i==4&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
						else if(i==5&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
								else if(i==6&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
								else
									cout<<matrix[i][j]<< " | ";
	}
	cout<<endl<<endl;
}
}
bool check(char matrix [6][7], char u)

{
	for(int i = 5 ; i>=0 ; i--)

	{
		
	
     for(int j=6 ; j>=0 ; j--)
	 {
        if(matrix[i][j]==u && matrix[i-1][j]==u && matrix[i-2][j]==u&& matrix[i-3][j]==u &&i>=3)
			return true ;
		else   if (matrix[i][j]==u && matrix[i-1][1-j]==u && matrix[i-2][2-j]==u&& matrix[i-3][3-j]==u&&j>=3&&i>=3)
			return true;
		else   if (matrix[i][j]==u && matrix[i-1][1+j]==u && matrix[i-2][2+j]==u&& matrix[i-3][3+j]==u&&j<=3&&i>=3)
			return true;
		else   if (matrix[i][j]==u && matrix[i][1-j]==u && matrix[i][2-j]==u&& matrix[i][3-j]==u&&j>=3)
			return true;
		else   if(matrix[i][j]==u && matrix[i+1][j]==u && matrix[i+2][j]==u&& matrix[i+3][j]==u &&i>=3)
			return true ;
		else   if (matrix[i][j]==u && matrix[i+1][1+j]==u && matrix[i+2][2+j]==u&& matrix[i+3][3+j]==u&&j<=3&&i>=3)
			return true;
		else   if (matrix[i][j]==u && matrix[i+1][1+j]==u && matrix[i+2][2+j]==u&& matrix[i+3][3+j]==u&&j<=3&&i>=3)
			return true;
		else   if (matrix[i][j]==u && matrix[i][1+j]==u && matrix[i][2+j]==u&& matrix[i][3+j]==u&&j<=3)
			return true;
		}

	}
	return false;
}
void put(string &num,char matrix[6][7],char u)
{
	re:
if(num == "1" && matrix[c1][0]=='-' && c1>=0)
	{
	matrix[c1][0]=u;
	c1--;
	}
else if(num == "2" && matrix[c2][1]=='-' && c2>=0)
	{
	matrix[c2][1]=u;
	c2--;
	}
else if(num == "3" && matrix[c3][2]=='-' && c3>=0)
	{
	matrix[c3][2]=u;
	c3--;
	}
else if(num == "4"&& matrix[c4][3]=='-' && c4>=0)
	{
	matrix[c4][3]=u;
	c4--;
	}
else if(num == "5" && matrix[c5][4]=='-' && c5>=0)
	{
		matrix[c5][4]=u;
	c5--;
	}
else if(num == "6" && matrix[c6][5]=='-' && c6>=0)
	{
		matrix[c6][5]=u;
	c6--;
	}
else if(num == "7" && matrix[c7][6]=='-' && c7>=0)
	{
		matrix[c7][6]=u;
	c7--;
	}
else
	{
cout<<"error \n" <<"Plese Enter in correct place"<<endl;
cin>>num;
goto re;
	}
if(check(matrix,u)==1)
	c1=5,c2=5,c3=5,c4=5,c5=5,c6=5,c7=5;
//*****************************************************//
system("cls");
cout<<" \t\t\t\t\t\tConnect 4 Game "<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t | 1 | 2 | 3 | 4 | 5 | 6 | 7 |"<<endl<<endl;
for (int i=0;i<6;i++)
{
	for(int j=0;j<7;j++)
	{
		if(i==0 && j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
		else if(i==1 && j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
					else if(i==2&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
				else if(i==3&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
						else if(i==4&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
						else if(i==5&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
								else if(i==6&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
								else
									cout<<matrix[i][j]<< " | ";
	}
	cout<<endl<<endl;
}
}
void putc(string &num,char matrix[6][7],char &u)
{
	re:
if(num == "1" && matrix[c1][0]=='-' && c1>=0)
	{
	matrix[c1][0]=u;
	c1--;
	}
else if(num == "2" && matrix[c2][1]=='-' && c2>=0)
	{
	matrix[c2][1]=u;
	c2--;
	}
else if(num == "3" && matrix[c3][2]=='-' && c3>=0)
	{
	matrix[c3][2]=u;
	c3--;
	}
else if(num == "4"&& matrix[c4][3]=='-' && c4>=0)
	{
	matrix[c4][3]=u;
	c4--;
	}
else if(num == "5" && matrix[c5][4]=='-' && c5>=0)
	{
		matrix[c5][4]=u;
	c5--;
	}
else if(num == "6" && matrix[c6][5]=='-' && c6>=0)
	{
		matrix[c6][5]=u;
	c6--;
	}
else if(num == "7" && matrix[c7][6]=='-' && c7>=0)
	{
		matrix[c7][6]=u;
	c7--;
	}
else
	{

			time_t current_time;

		current_time = time(NULL);
		num= (current_time %9)+'0';
goto re;
	}
if(check(matrix,u)==1)
	c1=5,c2=5,c3=5,c4=5,c5=5,c6=5,c7=5;
//*****************************************************//
system("cls");
cout<<" \t\t\t\t\t\tConnect 4 Game "<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t | 1 | 2 | 3 | 4 | 5 | 6 | 7 |"<<endl<<endl;
for (int i=0;i<6;i++)
{
	for(int j=0;j<7;j++)
	{
		if(i==0 && j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
		else if(i==1 && j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
					else if(i==2&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
				else if(i==3&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
						else if(i==4&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
						else if(i==5&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
								else if(i==6&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
								else
									cout<<matrix[i][j]<< " | ";
	}
	cout<<endl<<endl;
}
}
void putch(string &num,char matrix[6][7],char &u)
{
for(int i = 4 ; i>=0 ; i--)

	{

     for(int j=6 ; j>=0 ; j--)
	 {
        if(matrix[i][j]==u && matrix[i-1][j]==u && matrix[i-2][j]==u &&i>=3)
		{
			num= j+1+'0';
			putc(num,matrix,u);
		}
		else   if (matrix[i][j]==u && matrix[i-1][1-j]==u && matrix[i-2][2-j]==u&& matrix[i-3][3-j]==u&&j>=3&&i>=3)
		{}
		else   if (matrix[i][j]==u && matrix[i-1][1+j]==u && matrix[i-2][2+j]==u&& matrix[i-3][3+j]==u&&j<=3&&i>=3)
		{}
		//******************************************* Horizontal *******************************************//
		else   if (matrix[i][j]==u && matrix[i][1-j]==u && matrix[i][2-j]==u&&j>=3)
		{
			num=3-j+1+'0';
				putc(num,matrix,u);
		}
		else   if (matrix[i][j]==u && matrix[i][1-j]==u && matrix[i][3-j]==u&&j>=3)
		{	
	 num=2-j+1+'0';
			putc(num,matrix,u);
		}
		else   if (matrix[i][j]==u && matrix[i][2-j]==u && matrix[i][3-j]==u&&j>=3)
		{
			num=1-j+1+'0';
			putc(num,matrix,u);
		}
		else   if (matrix[i][1-j]==u && matrix[i][2-j]==u && matrix[i][3-j]==u&&j>=3)
		{
		num=j+1+'0';
			putc(num,matrix,u);
		}
		else   if (matrix[i][j]==u && matrix[i][1+j]==u && matrix[i][2+j]==u&&j<=3)
		{
		num=3+j+1+'0';
		}
		else   if (matrix[i][j]==u && matrix[i][1+j]==u && matrix[i][3+j]==u&&j<=3)
		{
		num=2+j+1+'0';
		}
		else   if (matrix[i][j]==u && matrix[i][2+j]==u && matrix[i][3+j]==u&&j<=3)
		{
		num=1+j+1+'0';
		}
		else   if (matrix[i][1+j]==u && matrix[i][2+j]==u && matrix[i][3+j]==u&&j<=3)
		{
			num=j+1+'0';
		 	putc(num,matrix,u);
		}
		//*************************************************************************************************//
		else   if(matrix[i][j]==u && matrix[i+1][j]==u && matrix[i+2][j]==u&& matrix[i+3][j]==u &&i>=3)
		{}
		else   if (matrix[i][j]==u && matrix[i+1][1+j]==u && matrix[i+2][2+j]==u&& matrix[i+3][3+j]==u&&j<=3&&i>=3)
		{}
		else   if (matrix[i][j]==u && matrix[i+1][1+j]==u && matrix[i+2][2+j]==u&& matrix[i+3][3+j]==u&&j<=3&&i>=3)
		{}
		}
	}
	time_t current_time;
		current_time = time(NULL);
		num= (current_time %9)+'0';
		putc(num,matrix,u);
//*****************************************************//
system("cls");
cout<<" \t\t\t\t\t\tConnect 4 Game "<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t | 1 | 2 | 3 | 4 | 5 | 6 | 7 |"<<endl<<endl;
for (int i=0;i<6;i++)
{
	for(int j=0;j<7;j++)
	{
		if(i==0 && j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
		else if(i==1 && j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
					else if(i==2&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
				else if(i==3&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
						else if(i==4&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
						else if(i==5&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
								else if(i==6&& j==0)
			cout<<"\t\t\t\t\t | "<<matrix[i][j]<< " | ";
								else
									cout<<matrix[i][j]<< " | ";
	}
	cout<<endl<<endl;
}
}
int main()
{
	string c;
ret4:
	system("Title Connect 4 Game ");
	system("color f5");
	 cout<<"                \t\t\t\t       Connect 4 Game"<<endl<<endl<<endl;
	cout<<" If you want to play with tow users Enter (1)"<<endl<<" If you want to play with computer Enter  (2)"<<endl;
	cin>>c;
	if (c == "1")
	{
shape();

	char matrix[6][7];
	for (int i=0;i<6;i++)
	for(int j=0;j<7;j++)
		matrix[i][j]='-';	
char u1,u2;
string num,ask;
ret:
cout<<"Choose X Or O"<<endl;
 cin>>u1;
 if(u1=='X' || u1=='x')
 u2='O';
 else if(u1=='O' || u1=='o')          
 u2='X';
 else 
 {
 cout<<"Erorr"<<endl;
 goto ret ;
 }
 int count=0;
 do			{
	 if(count%2==0)
	{ 
		ret1:
		cout<<"player1 enter the position \n" ;
	 cin>>num;
	 if(num>"7")
	      {
	 cout<<"Please Enter number less than 8 "<<endl;
	 goto ret1;
	      }
	 else if(num<"0")
	 {
	 	 cout<<"Please Enter number greater  than 0 "<<endl;
	 goto ret1;
	 }
	 put(num , matrix ,u1);
	 count++;
	if(check(matrix,u1)== 1)
	   {
		   cout<<"\a user1 win \n"<<"\a";
		   le:
	       	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0; 
		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le;
		   }
	   }
	 	  else if( count == 42 && check(matrix,u1)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le1:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le1;
		   }
	  }

	}
	 else if(count%2!=0)
{	
	ret2:
	cout<<"player2 enter the position \n" ;
	 cin>>num; 
	 	 if(num >"7")
	 {
	 cout<<"Please Enter number less than 8 "<<endl;
	 goto ret2;
	 }
	  put(num , matrix , u2);
	count++;
	 if(check(matrix,u2)== 1)
	   {
		   cout<<"\a user2 win \n"<<"\a";
		   le3:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le3;
		   }
	   }
	  	  else if( count == 42 && check(matrix,u2)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le4:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le4;
		   }
	  }
}
			}while(count<42);
 //**************************************************************************************//
	}
else if(c=="2")
	{
		shape();
         //********************  Play with computer  ********************//
		string level;
		ret10:
		cout<<"Enter (1) to Easy level"<<endl<<"Enter (2) to Hard level"<<endl;
		cin>>level;
		if(level=="1")
			//****************************Easy Level **********************//
		{
				char matrix[6][7];
	for (int i=0;i<6;i++)
	for(int j=0;j<7;j++)
		matrix[i][j]='-';	
char u1,u2;
string num,ask;
ret5:
cout<<"Choose X Or O"<<endl;
 cin>>u1;
 if(u1=='X' || u1=='x')
 u2='O';
 else if(u1=='O' || u1=='o')          
 u2='X';
 else 
 {
 cout<<"Erorr"<<endl;
 goto ret5 ;
 }
 int count=0;
 do			{
	 if(count%2==0)
	{ 
		ret6:
		cout<<"player1 enter the position \n" ;
	 cin>>num;
	 if(num>"7")
	      {
	 cout<<"Please Enter number less than 8 "<<endl;
	 goto ret6;
	      }
	 else if(num<"0")
	 {
	 	 cout<<"Please Enter number greater  than 0 "<<endl;
	 goto ret6;
	 }
	 put(num , matrix ,u1);
	 count++;
	if(check(matrix,u1)== 1)
	   {
		   cout<<"\a user1 win \n"<<"\a";
		   le2:
	       	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0; 
		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le2;
		   }
	   }
	 	  else if( count == 42 && check(matrix,u1)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le5:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le5;
		   }
	  }

	}
	 else if(count%2!=0)
{	
		time_t current_time;
	current_time = time(NULL);
	num= (current_time %7)+'0'; 
	  putc(num , matrix , u2);
	count++;
	  if(check(matrix,u2)== 1)
	   {
		   cout<<"\a Computer win \n"<<"\a";
		   le7:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le7;
		   }
	   }
	  	  else if( count == 42 && check(matrix,u2)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le8:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le8;
		   }
	  }
}
			}while(count<42);

	}

	//****************************************************************************************//
	else  if(level == "2")
			//*********************** Hard level ************************//
	{
					char matrix[6][7];
	for (int i=0;i<6;i++)
	for(int j=0;j<7;j++)
		matrix[i][j]='-';	
char u1,u2;
string num,ask;
ret15:
cout<<"Choose X Or O"<<endl;
 cin>>u1;
 if(u1=='X' || u1=='x')
 u2='O';
 else if(u1=='O' || u1=='o')          
 u2='X';
 else 
 {
 cout<<"Erorr"<<endl;
 goto ret15 ;
 }
 int count=0;
 do			{
	 if(count%2==0)
	{ 
		ret11:
		cout<<"player1 enter the position \n" ;
	 cin>>num;
	 if(num>"7")
	      {
	 cout<<"Please Enter number less than 8 "<<endl;
	 goto ret11;
	      }
	 else if(num<"0")
	 {
	 	 cout<<"Please Enter number greater  than 0 "<<endl;
	 goto ret11;
	 }
	 put(num , matrix ,u1);
	 count++;
	if(check(matrix,u1)== 1)
	   {
		   cout<<"\a user1 win \n"<<"\a";
		   le15:
	       	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0; 
		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le15;
		   }
	   }
	 	  else if( count == 42 && check(matrix,u1)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le10:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le10;
		   }
	  }

	}
	 else if(count%2!=0)
{	
		time_t current_time;
	current_time = time(NULL);
	  putch(num , matrix , u2);
	count++;
	  if(check(matrix,u2)== 1)
	   {
		   cout<<"\a Computer win \n"<<"\a";
		   le12:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le12;
		   }
	   }
	  	  else if( count == 42 && check(matrix,u2)==0)
	  {
	  		   cout<<"\a Drow !! \n"<<"\a";
			   le13:
	       cout<<" If you want to play again Enter (Y) if you want to Exit Enter (N) \n";
		   cin>>ask;
		   if (ask=="y" || ask=="Y")
			   goto ret4;
		   else if(ask=="n" || ask=="N")
			   return 0;
		   		   else
		   {
		   cout<<"Enter correct choice "<<endl;
		   goto le13;
		   }
	  }
}
			}while(count<42);

	}
	else
		{
			cout<<"Wrong choose Please Enter correct choose"<<endl;

			goto ret10;
		}
	}
	else
	{cout<<"Wrong choose Please Enter correct choose"<<endl;
	goto ret4;
	}
}
 