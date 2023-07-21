#pragma once
#include <iostream>
#include<fstream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <dos.h>
#include <cstring>
#include <regex>
#include<cstdio>
#include<cmath>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <ctime>
#include"MyForm.h"
using namespace std;


//change from system to std          msclr::interop::marshal_as<std::string>()
//String ^str=msclr::interop::marshal_as<String^>()
namespace tay
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;





	static public class functions
	{



	public: static bool checkEmail(string mail)
	{

		const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

		return regex_match(mail, pattern);
	}



		  // ***************   new   function    *********************


	// function that check spaces in string
	public: static bool checkNoSpaces(string s)
	{
		int stringSize, i, counterr = 0;

		stringSize = s.size();

		for (i = 0; i < stringSize; i++)
		{
			if (s[i] == ' ')
			{
				counterr++;
			}
		}

		//hyreturn true lw mafee4 spaces 
		if (counterr == 0)
			return true;

		else
			return false;
	}


		  // ***************   new   function    *********************


	public:	static void addNewUser(string firstName, string lastName, string username,
		string phoneNumber, string email, string address, string password)
	{
		fstream file("userDatabase.txt", ios::app);


		if (file.is_open())
		{
			file << username << endl << password << endl << firstName << endl
				<< lastName << endl << email << endl << address << endl << phoneNumber
				<< endl << endl << endl << endl << endl << endl << endl;
		}
		else
			file.open("userDatabase.txt");

		file.close();
	}



		  // ***************   new   function    *********************

	public: static bool checkNumbers(string s)
	{
		int stringSize, i, counterr = 0;

		stringSize = s.size();

		for (i = 0; i < stringSize; i++)
		{
			if ((s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' ||
				s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') && (stringSize == 11))
			{

			}
			else
				counterr++;
		}

		//will return true if all char are numbers of 11 char
		if (counterr == 0)
			return true;

		else
			return false;
	}



		  // ***************   new   function    *********************

	public:static bool checkUsernameExist(string s)
	{
		string str;
		int counter = 0;
		int lineCounter = 0;
		ifstream file;
		file.open("userDatabase.txt", ios::app);
		if (file.is_open())
		{
			lineCounter++;
			while (getline(file, str))
			{

				if ((s == str) && (lineCounter % 14 == 0 || lineCounter == 1))

				{
					counter++;
				}
			}

			if (counter != 0)
				return true;
			else
				return false;
		}
		else
			file.open("userDatabase.txt");
		file.close();
	}



		  // ***************   new   function    *********************

	public: static int UsernameLineNumber(string s)
	{
		int counter = 0;
		string line;
		ifstream file("userDatabase.txt");
		if (file.is_open())
		{
			while (getline(file, line))
			{
				counter++;
				if (s == line)
					break;
			}
			return counter;
		}
		else
			file.open("userDatabase.txt");

		file.close();
	}



		  // ***************   new   function    *********************


	public: static bool checkUserPass(int linenubmer, string pass)
	{
		linenubmer++;
		string str;
		int counter = 0;
		bool originalcounter = 0;
		ifstream file("userDatabase.txt");
		while (getline(file, str))
		{
			counter++;
			if (counter == linenubmer && str == pass)
			{

				originalcounter = 1;
				break;
			}
		}
		if (originalcounter == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}


		  // ***************   new   function    *********************

	public: static string getNameOfUser(int userLine)
	{
		int counter = 0;
		string line, firstname, lastname;
		ifstream file("userDatabase.txt");
		if (file.is_open())
		{
			while (getline(file, line))
			{
				counter++;
				if (counter == userLine + 2)
				{
					firstname = line;
				}
				else if (counter == userLine + 3)
				{
					lastname = line;
				}
			}

			return { firstname + " " + lastname };
		}

		else
		{
			file.open("userDatabase.txt");
		}

		file.close();
	}



		  // ***************   new   function    *********************

	public: static void addTrip(string tripID, string startDate, string endDate,
		string destination, string transportaion, string hotelName,
		string hotelAddress, string maxNoOfReservations, string tripCost)
	{
		fstream file("tripDatabase.txt", ios::app);
		if (file.is_open())
		{
			file << tripID << endl << startDate << "/" << endl << endDate << endl
				<< destination << endl << transportaion << endl << hotelName << endl << hotelAddress
				<< endl << maxNoOfReservations << endl << tripCost << endl << "0" << endl;
		}
		else
			file.open("tripDatabase.txt");

		file.close();

	}



		  // ***************   new   function    *********************

	public: static bool checkTripIDExist(string ID)
	{
		string str;
		int counter = 0;
		int lineCounter = 0;
		ifstream file;
		file.open("tripDatabase.txt", ios::app);
		if (file.is_open())
		{
			lineCounter++;
			while (getline(file, str))
			{
				if ((ID == str) && (lineCounter % 11 == 0 || lineCounter == 1))

				{
					counter++;
				}
			}

			if (counter != 0)
				return true;
			else
				return false;
		}
		else
			file.open("tripDatabase.txt");
		file.close();

	}



		  // ***************   new   function    *********************

	public: static bool checkNumbersss(string s)
	{
		int stringSize, i, counterr = 0;

		stringSize = s.size();

		for (i = 0; i < stringSize; i++)
		{
			if ((s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' ||
				s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9'))
			{

			}
			else
				counterr++;
		}

		//will return true if all char are numbers only
		if (counterr == 0)
			return true;

		else
			return false;
	}



		  // ***************   new   function    *********************

	public: static int tripIDLineNumber(string tripID)
	{
		int counter = 0;
		string line;
		ifstream file("tripDatabase.txt");
		if (file.is_open())
		{
			while (getline(file, line))
			{
				counter++;
				if (tripID == line)
					break;
			}
			return counter;
		}
		else
			file.open("tripDatabase.txt");

		file.close();
	}



		  // ***************   new   function    *********************

	public:  static void deleteTrip(int tripIDLine)
	{
		string line;
		int counter = 0;
		ifstream file;
		file.open("tripDatabase.txt");

		ofstream temp;
		temp.open("temp.txt");


		while (getline(file, line))
		{
			counter++;
			if (counter != tripIDLine && counter != tripIDLine + 1 && counter != tripIDLine + 2 && counter != tripIDLine + 3 &&
				counter != tripIDLine + 4 && counter != tripIDLine + 5 && counter != tripIDLine + 6 && counter != tripIDLine + 7 &&
				counter != tripIDLine + 8 && counter != tripIDLine + 9)
			{
				temp << line << endl;
			}
		}

		temp.close();
		file.close();
		remove("tripDatabase.txt");
		rename("temp.txt", "tripDatabase.txt");
	}


		  // ***************   new   function    *********************

	public: static void editTrip(int tripIDLine, string tripID, string startDate, string endDate,
		string destination, string transportaion, string hotelName,
		string hotelAddress, string maxNoOfReservations, string tripCost)
	{
		// delete function without history
		{
			string line;
			int counter = 0;
			ifstream file;
			file.open("tripDatabase.txt");

			ofstream temp;
			temp.open("temp.txt");


			while (getline(file, line))
			{
				counter++;
				if (counter != tripIDLine && counter != tripIDLine + 1 && counter != tripIDLine + 2 && counter != tripIDLine + 3 &&
					counter != tripIDLine + 4 && counter != tripIDLine + 5 && counter != tripIDLine + 6 && counter != tripIDLine + 7 &&
					counter != tripIDLine + 8 && counter != tripIDLine + 9)
				{
					temp << line << endl;
				}
			}

			temp.close();
			file.close();
			remove("tripDatabase.txt");
			rename("temp.txt", "tripDatabase.txt");
		}


		addTrip(tripID, startDate, endDate, destination, transportaion, hotelName, hotelAddress, maxNoOfReservations, tripCost);
	}



	public:	static  void addNewRecord(string username, string tripID, string NoofPeople, string PaymentMethod)
	{
		fstream file("recordData.txt", ios::app);


		if (file.is_open())
		{


			file << username << endl << tripID << endl << NoofPeople << endl << PaymentMethod << endl << endl;

		}
		else
			file.open("recordData.txt");

		file.close();
	}


	public: static bool checkUserReserve(string username) //Check if the user have reserved before
	{
		string str;
		int counter = 0;
		bool originalcounter = 0;
		ifstream file("recordData.txt");
		while (getline(file, str))
		{
			counter++;
			if (str == username)
			{

				originalcounter = 1;
				break;
			}
		}
		if (originalcounter == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


	public: static int UsernameLineNumberr(string tripID)
	{
		int counter = 0;
		string line;
		ifstream file("recordData.txt");
		if (file.is_open())
		{
			while (getline(file, line))
			{
				counter++;
				if (tripID == line)
				{

					return counter;
					break;


				}
			}

		}
		else
			file.open("recordData.txt");

		file.close();
	}





		  static void cancelTripp(int tripIDLine)
		  {
			  string line;
			  int counter = 0;
			  ifstream file;
			  file.open("recordData.txt");
			  fstream history("historyDatabase.txt", ios::app);

			  ofstream temp;
			  temp.open("temp.txt");


			  while (getline(file, line))
			  {
				  counter++;
				  {if (counter != tripIDLine && counter != tripIDLine + 1 && counter != tripIDLine + 2 &&
					  counter != tripIDLine + 3 && counter != tripIDLine + 4)
				  {
					  temp << line << endl;
				  }}

				  if (counter == tripIDLine)
				  {
					  history << line << endl;
				  }

				  else if (counter == tripIDLine + 1)
				  {
					  history << line << endl;
				  }

				  else if (counter == tripIDLine + 2)
				  {
					  history << line << endl;
				  }

				  else if (counter == tripIDLine + 3)
				  {
					  history << line << endl;
				  }

				  else if (counter == tripIDLine + 4)
				  {
					  history << line << endl;
				  }
			  }

			  temp.close();
			  file.close();
			  remove("recordData.txt");
			  rename("temp.txt", "recordData.txt");
		  }



	public: static  bool checkDate(int tripLine)
	{
		ifstream file("tripDatabase.txt");

		time_t t = time(0);   // get time now
		struct tm* now = localtime(&t);

		string line;
		string inp;

		int counter = 0;
		int counterr = 0;
		int y, m, d;

		while (getline(file, inp))
		{
			counterr++;

			if (counterr == tripLine)
			{
				while (getline(file, line, '/'))
				{
					counter++;
					if (counter == 1) {
						d = stoi(line);
					}

					else if (counter == 2) {
						m = stoi(line);
					}

					else if (counter == 3)
					{
						y = stoi(line);
					}

					if (counter > 3)
						break;

				}
			}

		}

		int days, n, months, years;
		days = (d - now->tm_mday);
		months = (m - now->tm_mon - 1);
		years = (y - now->tm_year - 1900);
		n = (now->tm_mday);

		if (days < 7 && months == 0 && years == 0)
		{
			return false;
		}

		else
			return true;

		file.close();
	}

	public: static int reservelinenumber(string tripID) //check the line of the username in record file
	{
		int counter = 0;
		string line;
		ifstream file("recordData.txt");
		if (file.is_open())
		{
			while (getline(file, line))
			{
				counter++;
				if (tripID == line)
					break;
			}
			return counter;
		}
		else
			file.open("recordData.txt");

		file.close();
	}


	public: static bool checkUsertrip(int linenubmer, string tripID) //check if this user has reserved this trip
	{
		linenubmer++;
		string str;
		int counter = 0;
		bool originalcounter = 0;
		ifstream file("recordData.txt");
		while (getline(file, str))
		{
			counter++;
			if (counter == linenubmer && str == tripID)
			{

				originalcounter = 1;
				break;
			}
		}
		if (originalcounter == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

		  static void editTripp(int tripIDLine)
		  {
			  string line;
			  int counter = 0;
			  ifstream file;
			  file.open("recordData.txt");
			  fstream history("trash.txt", ios::app);

			  ofstream temp;
			  temp.open("temp.txt");


			  while (getline(file, line))
			  {
				  counter++;
				  {if (counter != tripIDLine && counter != tripIDLine + 1 && counter != tripIDLine + 2 &&
					  counter != tripIDLine + 3 && counter != tripIDLine + 4)
				  {
					  temp << line << endl;
				  }}

				  if (counter == tripIDLine)
				  {
					  history << line << endl;
				  }

				  else if (counter == tripIDLine + 1)
				  {
					  history << line << endl;
				  }

				  else if (counter == tripIDLine + 2)
				  {
					  history << line << endl;
				  }

				  else if (counter == tripIDLine + 3)
				  {
					  history << line << endl;
				  }

				  else if (counter == tripIDLine + 4)
				  {
					  history << line << endl;
				  }
			  }

			  temp.close();
			  file.close();
			  history.close();
			  remove("trash.txt");
			  remove("recordData.txt");
			  rename("temp.txt", "recordData.txt");
		  }



	};


};




