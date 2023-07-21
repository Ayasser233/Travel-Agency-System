#pragma once
#include"Header.h"
#include<string>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <dos.h>
#include <cstring>
#include <regex>
#include<cstdio>
#include<cmath>
#include <msclr\marshal_cppstd.h>
 
using namespace tay;
namespace FirstTrial {
	struct userInfo
	{
		string USER_NAME;
		string PASSWORD;
		string FIRST_NAME;
		string LAST_NAME;
		string EMAIL;
		string ADDRESS;
		string PHONE_NUMBER;
	};
	struct tripInfo
	{
		string tripID;
		string startDate;
		string endDate;
		string destination; 
		string transportaion;
		string hotelName;
		string hotelAddress;
		string maxNoOfReservations;
		string tripCost;
	};
	struct Reservation
	{
		string username;
		string tripID;
		string NoofPeople;
		string PaymentMethod;
	};
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;
	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:










	private: System::Windows::Forms::Panel^ panel4;









	public: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ Login;
	public:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ Register;
	private: System::Windows::Forms::Button^ register_btn;



	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::TextBox^ textBox9;

	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::TextBox^ textBox8;

	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::TextBox^ textBox6;


	private: System::Windows::Forms::Button^ back_btn;

	private: System::Windows::Forms::Panel^ lastname;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ firstname;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ admin_pn;









	private: System::Windows::Forms::Panel^ add_pn;
	private: System::Windows::Forms::Panel^ edit_pn;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ delete_pn;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ users_pn;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ user_pn;

	private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Panel^ reserve_pn;

	private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Panel^ change_pn;

	private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Panel^ cancel_pn;

	private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Panel^ history_pn;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label13;

private: System::Windows::Forms::Button^ history_btn;

private: System::Windows::Forms::Button^ cancel_btn;

private: System::Windows::Forms::Button^ change_btn;

private: System::Windows::Forms::Button^ reserve_btn;
private: System::Windows::Forms::TextBox^ tripID_txt;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ tripCost_txt;
private: System::Windows::Forms::TextBox^ hotelName_txt;
private: System::Windows::Forms::TextBox^ maxNumberRes_txt;
private: System::Windows::Forms::TextBox^ endDate_txt;
private: System::Windows::Forms::TextBox^ hotelAddress_txt;
private: System::Windows::Forms::TextBox^ transportation_txt;
private: System::Windows::Forms::TextBox^ destination_txt;
private: System::Windows::Forms::TextBox^ startDate_txt;


private: System::Windows::Forms::Button^ deleteTrip_btn;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ tripID_delete_txt;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Label^ label4;

private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ password_lbl;
private: System::Windows::Forms::Label^ address_lbl;
private: System::Windows::Forms::Label^ email_lbl;
private: System::Windows::Forms::Label^ phoneNumber_lbl;
private: System::Windows::Forms::Label^ username_lbl;
private: System::Windows::Forms::Label^ name_lbl;
private: System::Windows::Forms::Label^ nameOfUser_lbl;
private: System::Windows::Forms::Button^ addTheTrip_btn;
private: System::Windows::Forms::Label^ tripID_lbl;
private: System::Windows::Forms::Label^ tripCost_lbl;
private: System::Windows::Forms::Label^ maxNoRes_lbl;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ tripID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ startDate;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ endDate;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ destination;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ transportation;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ hotelName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ hotelAddress;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ maxNoOfReservations;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ tripCost;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ noOfReservations;
private: System::Windows::Forms::DataGridView^ userdatagradeview;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ username;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ password_grade;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ firstName_grade;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ lastName_grade;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ email_grade;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ address_grade;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ phoneNumber_grade;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;

































private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ tripCost_edit;
private: System::Windows::Forms::TextBox^ maxNoOfreserv_edit;
private: System::Windows::Forms::TextBox^ hotelName_edit;
private: System::Windows::Forms::TextBox^ transportation_edit;
private: System::Windows::Forms::TextBox^ endDate_edit;
private: System::Windows::Forms::TextBox^ startDate_edit;
private: System::Windows::Forms::TextBox^ hotelAddress_edit;
private: System::Windows::Forms::TextBox^ destination_edit;
private: System::Windows::Forms::TextBox^ tripID_edit;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Label^ maxNoOfRes_lbl_edit;
private: System::Windows::Forms::Label^ tripCost_lbl_edit;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Panel^ reservations;

private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn25;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Button^ delete_btn;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn26;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn27;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn28;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn29;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button1;














































	private:

























	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->Login = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Register = (gcnew System::Windows::Forms::Panel());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->address_lbl = (gcnew System::Windows::Forms::Label());
			this->email_lbl = (gcnew System::Windows::Forms::Label());
			this->phoneNumber_lbl = (gcnew System::Windows::Forms::Label());
			this->username_lbl = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->lastname = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->firstname = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->register_btn = (gcnew System::Windows::Forms::Button());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->admin_pn = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->add_pn = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->addTheTrip_btn = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tripCost_lbl = (gcnew System::Windows::Forms::Label());
			this->maxNoRes_lbl = (gcnew System::Windows::Forms::Label());
			this->tripID_lbl = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tripCost_txt = (gcnew System::Windows::Forms::TextBox());
			this->hotelName_txt = (gcnew System::Windows::Forms::TextBox());
			this->maxNumberRes_txt = (gcnew System::Windows::Forms::TextBox());
			this->endDate_txt = (gcnew System::Windows::Forms::TextBox());
			this->hotelAddress_txt = (gcnew System::Windows::Forms::TextBox());
			this->transportation_txt = (gcnew System::Windows::Forms::TextBox());
			this->destination_txt = (gcnew System::Windows::Forms::TextBox());
			this->startDate_txt = (gcnew System::Windows::Forms::TextBox());
			this->tripID_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->edit_pn = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->maxNoOfRes_lbl_edit = (gcnew System::Windows::Forms::Label());
			this->tripCost_lbl_edit = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tripID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->startDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->endDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->destination = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->transportation = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hotelName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hotelAddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->maxNoOfReservations = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tripCost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->noOfReservations = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tripCost_edit = (gcnew System::Windows::Forms::TextBox());
			this->maxNoOfreserv_edit = (gcnew System::Windows::Forms::TextBox());
			this->hotelName_edit = (gcnew System::Windows::Forms::TextBox());
			this->transportation_edit = (gcnew System::Windows::Forms::TextBox());
			this->endDate_edit = (gcnew System::Windows::Forms::TextBox());
			this->startDate_edit = (gcnew System::Windows::Forms::TextBox());
			this->hotelAddress_edit = (gcnew System::Windows::Forms::TextBox());
			this->destination_edit = (gcnew System::Windows::Forms::TextBox());
			this->tripID_edit = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->delete_pn = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->deleteTrip_btn = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tripID_delete_txt = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->users_pn = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->userdatagradeview = (gcnew System::Windows::Forms::DataGridView());
			this->username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->password_grade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->firstName_grade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastName_grade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email_grade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->address_grade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phoneNumber_grade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->reservations = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->user_pn = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->nameOfUser_lbl = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->history_btn = (gcnew System::Windows::Forms::Button());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->change_btn = (gcnew System::Windows::Forms::Button());
			this->reserve_btn = (gcnew System::Windows::Forms::Button());
			this->reserve_pn = (gcnew System::Windows::Forms::Panel());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->change_pn = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->cancel_pn = (gcnew System::Windows::Forms::Panel());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->history_pn = (gcnew System::Windows::Forms::Panel());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->Login->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->Register->SuspendLayout();
			this->panel8->SuspendLayout();
			this->lastname->SuspendLayout();
			this->firstname->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel21->SuspendLayout();
			this->admin_pn->SuspendLayout();
			this->panel6->SuspendLayout();
			this->add_pn->SuspendLayout();
			this->edit_pn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->delete_pn->SuspendLayout();
			this->users_pn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userdatagradeview))->BeginInit();
			this->reservations->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->user_pn->SuspendLayout();
			this->panel13->SuspendLayout();
			this->reserve_pn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->change_pn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->cancel_pn->SuspendLayout();
			this->history_pn->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Controls->Add(this->panel1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1421, 779);
			this->panel4->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(420, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1001, 779);
			this->panel1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel5->Controls->Add(this->Login);
			this->panel5->Controls->Add(this->Register);
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(420, 779);
			this->panel5->TabIndex = 4;
			// 
			// Login
			// 
			this->Login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Login->Controls->Add(this->button4);
			this->Login->Controls->Add(this->button3);
			this->Login->Controls->Add(this->panel3);
			this->Login->Controls->Add(this->panel2);
			this->Login->Controls->Add(this->label1);
			this->Login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Login->Location = System::Drawing::Point(0, 0);
			this->Login->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(420, 779);
			this->Login->TabIndex = 9;
			this->Login->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Login_Paint);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(44, 580);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(333, 71);
			this->button4->TabIndex = 8;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(44, 457);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(333, 71);
			this->button3->TabIndex = 7;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Location = System::Drawing::Point(44, 327);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(333, 75);
			this->panel3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(13, 30);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(307, 30);
			this->textBox2->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(44, 194);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(333, 75);
			this->panel2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Transparent;
			this->textBox1->Location = System::Drawing::Point(13, 26);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(307, 34);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)));
			this->label1->Location = System::Drawing::Point(57, 14);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(283, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"T     r     i     p           T     i     c     k";
			// 
			// Register
			// 
			this->Register->Controls->Add(this->password_lbl);
			this->Register->Controls->Add(this->address_lbl);
			this->Register->Controls->Add(this->email_lbl);
			this->Register->Controls->Add(this->phoneNumber_lbl);
			this->Register->Controls->Add(this->username_lbl);
			this->Register->Controls->Add(this->name_lbl);
			this->Register->Controls->Add(this->panel8);
			this->Register->Controls->Add(this->lastname);
			this->Register->Controls->Add(this->firstname);
			this->Register->Controls->Add(this->label2);
			this->Register->Controls->Add(this->register_btn);
			this->Register->Controls->Add(this->panel18);
			this->Register->Controls->Add(this->panel19);
			this->Register->Controls->Add(this->panel20);
			this->Register->Controls->Add(this->panel21);
			this->Register->Controls->Add(this->back_btn);
			this->Register->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Register->Location = System::Drawing::Point(0, 0);
			this->Register->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(420, 779);
			this->Register->TabIndex = 2;
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->BackColor = System::Drawing::Color::Transparent;
			this->password_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_lbl->ForeColor = System::Drawing::Color::Red;
			this->password_lbl->Location = System::Drawing::Point(40, 617);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(0, 19);
			this->password_lbl->TabIndex = 17;
			// 
			// address_lbl
			// 
			this->address_lbl->AutoSize = true;
			this->address_lbl->BackColor = System::Drawing::Color::Transparent;
			this->address_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address_lbl->ForeColor = System::Drawing::Color::Red;
			this->address_lbl->Location = System::Drawing::Point(34, 519);
			this->address_lbl->Name = L"address_lbl";
			this->address_lbl->Size = System::Drawing::Size(0, 19);
			this->address_lbl->TabIndex = 17;
			this->address_lbl->Click += gcnew System::EventHandler(this, &MyForm::address_lbl_Click);
			// 
			// email_lbl
			// 
			this->email_lbl->AutoSize = true;
			this->email_lbl->BackColor = System::Drawing::Color::Transparent;
			this->email_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_lbl->ForeColor = System::Drawing::Color::Red;
			this->email_lbl->Location = System::Drawing::Point(34, 421);
			this->email_lbl->Name = L"email_lbl";
			this->email_lbl->Size = System::Drawing::Size(0, 19);
			this->email_lbl->TabIndex = 17;
			this->email_lbl->Click += gcnew System::EventHandler(this, &MyForm::email_lbl_Click);
			// 
			// phoneNumber_lbl
			// 
			this->phoneNumber_lbl->AutoSize = true;
			this->phoneNumber_lbl->BackColor = System::Drawing::Color::Transparent;
			this->phoneNumber_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phoneNumber_lbl->ForeColor = System::Drawing::Color::Red;
			this->phoneNumber_lbl->Location = System::Drawing::Point(34, 324);
			this->phoneNumber_lbl->Name = L"phoneNumber_lbl";
			this->phoneNumber_lbl->Size = System::Drawing::Size(0, 19);
			this->phoneNumber_lbl->TabIndex = 17;
			this->phoneNumber_lbl->Click += gcnew System::EventHandler(this, &MyForm::phoneNumber_lbl_Click);
			// 
			// username_lbl
			// 
			this->username_lbl->AutoSize = true;
			this->username_lbl->BackColor = System::Drawing::Color::Transparent;
			this->username_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_lbl->ForeColor = System::Drawing::Color::Red;
			this->username_lbl->Location = System::Drawing::Point(34, 225);
			this->username_lbl->Name = L"username_lbl";
			this->username_lbl->Size = System::Drawing::Size(0, 19);
			this->username_lbl->TabIndex = 17;
			this->username_lbl->Click += gcnew System::EventHandler(this, &MyForm::username_lbl_Click);
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->BackColor = System::Drawing::Color::Transparent;
			this->name_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_lbl->ForeColor = System::Drawing::Color::Red;
			this->name_lbl->Location = System::Drawing::Point(34, 131);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(0, 19);
			this->name_lbl->TabIndex = 17;
			this->name_lbl->Click += gcnew System::EventHandler(this, &MyForm::name_lbl_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel8->Controls->Add(this->textBox5);
			this->panel8->Location = System::Drawing::Point(34, 170);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(340, 53);
			this->panel8->TabIndex = 16;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(16, 20);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(309, 20);
			this->textBox5->TabIndex = 1;
			// 
			// lastname
			// 
			this->lastname->BackColor = System::Drawing::Color::Transparent;
			this->lastname->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lastname.BackgroundImage")));
			this->lastname->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->lastname->Controls->Add(this->textBox4);
			this->lastname->Location = System::Drawing::Point(205, 72);
			this->lastname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(165, 53);
			this->lastname->TabIndex = 15;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(16, 18);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(133, 20);
			this->textBox4->TabIndex = 1;
			// 
			// firstname
			// 
			this->firstname->BackColor = System::Drawing::Color::Transparent;
			this->firstname->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstname.BackgroundImage")));
			this->firstname->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->firstname->Controls->Add(this->textBox3);
			this->firstname->Location = System::Drawing::Point(32, 72);
			this->firstname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(165, 53);
			this->firstname->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(16, 18);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(133, 20);
			this->textBox3->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)));
			this->label2->Location = System::Drawing::Point(57, 14);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(283, 23);
			this->label2->TabIndex = 13;
			this->label2->Text = L"T     r     i     p           T     i     c     k";
			// 
			// register_btn
			// 
			this->register_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->register_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"register_btn.BackgroundImage")));
			this->register_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->register_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->register_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->register_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->register_btn->Location = System::Drawing::Point(213, 678);
			this->register_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->register_btn->Name = L"register_btn";
			this->register_btn->Size = System::Drawing::Size(157, 50);
			this->register_btn->TabIndex = 11;
			this->register_btn->UseVisualStyleBackColor = true;
			this->register_btn->Click += gcnew System::EventHandler(this, &MyForm::register_btn_Click);
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::Transparent;
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel18->Controls->Add(this->textBox9);
			this->panel18->Location = System::Drawing::Point(34, 562);
			this->panel18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(340, 53);
			this->panel18->TabIndex = 4;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(16, 20);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(309, 20);
			this->textBox9->TabIndex = 1;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::Transparent;
			this->panel19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel19.BackgroundImage")));
			this->panel19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel19->Controls->Add(this->textBox8);
			this->panel19->Location = System::Drawing::Point(34, 464);
			this->panel19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(340, 53);
			this->panel19->TabIndex = 5;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(16, 20);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(309, 20);
			this->textBox8->TabIndex = 1;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::Transparent;
			this->panel20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel20.BackgroundImage")));
			this->panel20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel20->Controls->Add(this->textBox7);
			this->panel20->Location = System::Drawing::Point(34, 366);
			this->panel20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(340, 53);
			this->panel20->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(16, 20);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(309, 20);
			this->textBox7->TabIndex = 1;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::Transparent;
			this->panel21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel21.BackgroundImage")));
			this->panel21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel21->Controls->Add(this->textBox6);
			this->panel21->Location = System::Drawing::Point(34, 268);
			this->panel21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(340, 53);
			this->panel21->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(16, 20);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(309, 20);
			this->textBox6->TabIndex = 1;
			// 
			// back_btn
			// 
			this->back_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->back_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_btn.BackgroundImage")));
			this->back_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->back_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->back_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->back_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back_btn->Location = System::Drawing::Point(32, 678);
			this->back_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(157, 50);
			this->back_btn->TabIndex = 12;
			this->back_btn->UseVisualStyleBackColor = true;
			this->back_btn->Click += gcnew System::EventHandler(this, &MyForm::back_btn_Click);
			// 
			// admin_pn
			// 
			this->admin_pn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->admin_pn->Controls->Add(this->panel6);
			this->admin_pn->Controls->Add(this->add_pn);
			this->admin_pn->Controls->Add(this->edit_pn);
			this->admin_pn->Controls->Add(this->delete_pn);
			this->admin_pn->Controls->Add(this->users_pn);
			this->admin_pn->Controls->Add(this->reservations);
			this->admin_pn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->admin_pn->Location = System::Drawing::Point(0, 0);
			this->admin_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->admin_pn->Name = L"admin_pn";
			this->admin_pn->Size = System::Drawing::Size(1421, 779);
			this->admin_pn->TabIndex = 9;
			this->admin_pn->Visible = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel6->Controls->Add(this->button9);
			this->panel6->Controls->Add(this->label4);
			this->panel6->Controls->Add(this->button7);
			this->panel6->Controls->Add(this->button6);
			this->panel6->Controls->Add(this->button5);
			this->panel6->Controls->Add(this->button2);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(420, 779);
			this->panel6->TabIndex = 1;
			// 
			// button9
			// 
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button9->Location = System::Drawing::Point(-21, 649);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(459, 71);
			this->button9->TabIndex = 6;
			this->button9->Text = L"RESERVATIONS";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(57, 14);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(283, 23);
			this->label4->TabIndex = 5;
			this->label4->Text = L"T     r     i     p           T     i     c     k";
			// 
			// button7
			// 
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button7->Location = System::Drawing::Point(-21, 514);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(459, 71);
			this->button7->TabIndex = 0;
			this->button7->Text = L"USERS";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button6->Location = System::Drawing::Point(-21, 379);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(459, 71);
			this->button6->TabIndex = 0;
			this->button6->Text = L"DELETE TRIPS";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button5->Location = System::Drawing::Point(-21, 244);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(459, 71);
			this->button5->TabIndex = 0;
			this->button5->Text = L"EDIT TRIPS";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->button2->Location = System::Drawing::Point(-21, 109);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(459, 71);
			this->button2->TabIndex = 0;
			this->button2->Text = L"ADD TRIPS";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// add_pn
			// 
			this->add_pn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->add_pn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->add_pn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_pn.BackgroundImage")));
			this->add_pn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->add_pn->Controls->Add(this->button13);
			this->add_pn->Controls->Add(this->label37);
			this->add_pn->Controls->Add(this->label36);
			this->add_pn->Controls->Add(this->addTheTrip_btn);
			this->add_pn->Controls->Add(this->label23);
			this->add_pn->Controls->Add(this->label20);
			this->add_pn->Controls->Add(this->label17);
			this->add_pn->Controls->Add(this->label22);
			this->add_pn->Controls->Add(this->label19);
			this->add_pn->Controls->Add(this->label16);
			this->add_pn->Controls->Add(this->label21);
			this->add_pn->Controls->Add(this->label18);
			this->add_pn->Controls->Add(this->tripCost_lbl);
			this->add_pn->Controls->Add(this->maxNoRes_lbl);
			this->add_pn->Controls->Add(this->tripID_lbl);
			this->add_pn->Controls->Add(this->label15);
			this->add_pn->Controls->Add(this->tripCost_txt);
			this->add_pn->Controls->Add(this->hotelName_txt);
			this->add_pn->Controls->Add(this->maxNumberRes_txt);
			this->add_pn->Controls->Add(this->endDate_txt);
			this->add_pn->Controls->Add(this->hotelAddress_txt);
			this->add_pn->Controls->Add(this->transportation_txt);
			this->add_pn->Controls->Add(this->destination_txt);
			this->add_pn->Controls->Add(this->startDate_txt);
			this->add_pn->Controls->Add(this->tripID_txt);
			this->add_pn->Controls->Add(this->label5);
			this->add_pn->Location = System::Drawing::Point(420, 0);
			this->add_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_pn->Name = L"add_pn";
			this->add_pn->Size = System::Drawing::Size(1001, 779);
			this->add_pn->TabIndex = 2;
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(888, 732);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(101, 36);
			this->button13->TabIndex = 11;
			this->button13->Text = L"Log out";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label37->Location = System::Drawing::Point(855, 127);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(119, 19);
			this->label37->TabIndex = 10;
			this->label37->Text = L"dd/mm/yyyy";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label36->Location = System::Drawing::Point(512, 127);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(119, 19);
			this->label36->TabIndex = 10;
			this->label36->Text = L"dd/mm/yyyy";
			// 
			// addTheTrip_btn
			// 
			this->addTheTrip_btn->BackColor = System::Drawing::Color::Transparent;
			this->addTheTrip_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->addTheTrip_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DeepSkyBlue;
			this->addTheTrip_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addTheTrip_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addTheTrip_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->addTheTrip_btn->Location = System::Drawing::Point(414, 673);
			this->addTheTrip_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addTheTrip_btn->Name = L"addTheTrip_btn";
			this->addTheTrip_btn->Size = System::Drawing::Size(178, 55);
			this->addTheTrip_btn->TabIndex = 3;
			this->addTheTrip_btn->Text = L"A D D";
			this->addTheTrip_btn->UseVisualStyleBackColor = false;
			this->addTheTrip_btn->Click += gcnew System::EventHandler(this, &MyForm::addTheTrip_btn_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(732, 435);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(75, 19);
			this->label23->TabIndex = 2;
			this->label23->Text = L"Trip cost";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(732, 281);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(104, 19);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Hotel name";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(732, 127);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(81, 19);
			this->label17->TabIndex = 2;
			this->label17->Text = L"End date";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(389, 435);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(237, 19);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Max number of reservations";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(389, 281);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(121, 19);
			this->label19->TabIndex = 2;
			this->label19->Text = L"Transportation";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(389, 127);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(84, 19);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Start date";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(58, 435);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(121, 19);
			this->label21->TabIndex = 2;
			this->label21->Text = L"Hotel address";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(58, 281);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(98, 19);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Destination";
			// 
			// tripCost_lbl
			// 
			this->tripCost_lbl->AutoSize = true;
			this->tripCost_lbl->BackColor = System::Drawing::Color::Transparent;
			this->tripCost_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tripCost_lbl->ForeColor = System::Drawing::Color::Red;
			this->tripCost_lbl->Location = System::Drawing::Point(745, 500);
			this->tripCost_lbl->Name = L"tripCost_lbl";
			this->tripCost_lbl->Size = System::Drawing::Size(0, 20);
			this->tripCost_lbl->TabIndex = 2;
			// 
			// maxNoRes_lbl
			// 
			this->maxNoRes_lbl->AutoSize = true;
			this->maxNoRes_lbl->BackColor = System::Drawing::Color::Transparent;
			this->maxNoRes_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maxNoRes_lbl->ForeColor = System::Drawing::Color::Red;
			this->maxNoRes_lbl->Location = System::Drawing::Point(398, 500);
			this->maxNoRes_lbl->Name = L"maxNoRes_lbl";
			this->maxNoRes_lbl->Size = System::Drawing::Size(0, 20);
			this->maxNoRes_lbl->TabIndex = 2;
			// 
			// tripID_lbl
			// 
			this->tripID_lbl->AutoSize = true;
			this->tripID_lbl->BackColor = System::Drawing::Color::Transparent;
			this->tripID_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tripID_lbl->ForeColor = System::Drawing::Color::Red;
			this->tripID_lbl->Location = System::Drawing::Point(67, 194);
			this->tripID_lbl->Name = L"tripID_lbl";
			this->tripID_lbl->Size = System::Drawing::Size(0, 20);
			this->tripID_lbl->TabIndex = 2;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(58, 127);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(58, 19);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Trip ID";
			// 
			// tripCost_txt
			// 
			this->tripCost_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->tripCost_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tripCost_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tripCost_txt->ForeColor = System::Drawing::Color::White;
			this->tripCost_txt->Location = System::Drawing::Point(736, 457);
			this->tripCost_txt->Multiline = true;
			this->tripCost_txt->Name = L"tripCost_txt";
			this->tripCost_txt->Size = System::Drawing::Size(238, 40);
			this->tripCost_txt->TabIndex = 1;
			this->tripCost_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// hotelName_txt
			// 
			this->hotelName_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->hotelName_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->hotelName_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hotelName_txt->ForeColor = System::Drawing::Color::White;
			this->hotelName_txt->Location = System::Drawing::Point(736, 303);
			this->hotelName_txt->Multiline = true;
			this->hotelName_txt->Name = L"hotelName_txt";
			this->hotelName_txt->Size = System::Drawing::Size(238, 40);
			this->hotelName_txt->TabIndex = 1;
			this->hotelName_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maxNumberRes_txt
			// 
			this->maxNumberRes_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->maxNumberRes_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maxNumberRes_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maxNumberRes_txt->ForeColor = System::Drawing::Color::White;
			this->maxNumberRes_txt->Location = System::Drawing::Point(393, 457);
			this->maxNumberRes_txt->Multiline = true;
			this->maxNumberRes_txt->Name = L"maxNumberRes_txt";
			this->maxNumberRes_txt->Size = System::Drawing::Size(238, 40);
			this->maxNumberRes_txt->TabIndex = 1;
			this->maxNumberRes_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// endDate_txt
			// 
			this->endDate_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->endDate_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->endDate_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->endDate_txt->ForeColor = System::Drawing::Color::White;
			this->endDate_txt->Location = System::Drawing::Point(736, 149);
			this->endDate_txt->Multiline = true;
			this->endDate_txt->Name = L"endDate_txt";
			this->endDate_txt->Size = System::Drawing::Size(238, 40);
			this->endDate_txt->TabIndex = 1;
			this->endDate_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// hotelAddress_txt
			// 
			this->hotelAddress_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->hotelAddress_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->hotelAddress_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hotelAddress_txt->ForeColor = System::Drawing::Color::White;
			this->hotelAddress_txt->Location = System::Drawing::Point(62, 457);
			this->hotelAddress_txt->Multiline = true;
			this->hotelAddress_txt->Name = L"hotelAddress_txt";
			this->hotelAddress_txt->Size = System::Drawing::Size(238, 40);
			this->hotelAddress_txt->TabIndex = 1;
			this->hotelAddress_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// transportation_txt
			// 
			this->transportation_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->transportation_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->transportation_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transportation_txt->ForeColor = System::Drawing::Color::White;
			this->transportation_txt->Location = System::Drawing::Point(393, 303);
			this->transportation_txt->Multiline = true;
			this->transportation_txt->Name = L"transportation_txt";
			this->transportation_txt->Size = System::Drawing::Size(238, 40);
			this->transportation_txt->TabIndex = 1;
			this->transportation_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// destination_txt
			// 
			this->destination_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->destination_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->destination_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->destination_txt->ForeColor = System::Drawing::Color::White;
			this->destination_txt->Location = System::Drawing::Point(62, 303);
			this->destination_txt->Multiline = true;
			this->destination_txt->Name = L"destination_txt";
			this->destination_txt->Size = System::Drawing::Size(238, 40);
			this->destination_txt->TabIndex = 1;
			this->destination_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// startDate_txt
			// 
			this->startDate_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->startDate_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->startDate_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startDate_txt->ForeColor = System::Drawing::Color::White;
			this->startDate_txt->Location = System::Drawing::Point(393, 149);
			this->startDate_txt->Multiline = true;
			this->startDate_txt->Name = L"startDate_txt";
			this->startDate_txt->Size = System::Drawing::Size(238, 40);
			this->startDate_txt->TabIndex = 1;
			this->startDate_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tripID_txt
			// 
			this->tripID_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->tripID_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tripID_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tripID_txt->ForeColor = System::Drawing::Color::White;
			this->tripID_txt->Location = System::Drawing::Point(62, 149);
			this->tripID_txt->Multiline = true;
			this->tripID_txt->Name = L"tripID_txt";
			this->tripID_txt->Size = System::Drawing::Size(238, 40);
			this->tripID_txt->TabIndex = 1;
			this->tripID_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label5->Location = System::Drawing::Point(431, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(138, 34);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Add Trips";
			// 
			// edit_pn
			// 
			this->edit_pn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->edit_pn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->edit_pn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edit_pn.BackgroundImage")));
			this->edit_pn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->edit_pn->Controls->Add(this->button1);
			this->edit_pn->Controls->Add(this->label35);
			this->edit_pn->Controls->Add(this->label34);
			this->edit_pn->Controls->Add(this->maxNoOfRes_lbl_edit);
			this->edit_pn->Controls->Add(this->tripCost_lbl_edit);
			this->edit_pn->Controls->Add(this->label43);
			this->edit_pn->Controls->Add(this->dataGridView1);
			this->edit_pn->Controls->Add(this->label33);
			this->edit_pn->Controls->Add(this->label30);
			this->edit_pn->Controls->Add(this->label32);
			this->edit_pn->Controls->Add(this->label28);
			this->edit_pn->Controls->Add(this->label31);
			this->edit_pn->Controls->Add(this->label25);
			this->edit_pn->Controls->Add(this->label29);
			this->edit_pn->Controls->Add(this->label27);
			this->edit_pn->Controls->Add(this->label26);
			this->edit_pn->Controls->Add(this->tripCost_edit);
			this->edit_pn->Controls->Add(this->maxNoOfreserv_edit);
			this->edit_pn->Controls->Add(this->hotelName_edit);
			this->edit_pn->Controls->Add(this->transportation_edit);
			this->edit_pn->Controls->Add(this->endDate_edit);
			this->edit_pn->Controls->Add(this->startDate_edit);
			this->edit_pn->Controls->Add(this->hotelAddress_edit);
			this->edit_pn->Controls->Add(this->destination_edit);
			this->edit_pn->Controls->Add(this->tripID_edit);
			this->edit_pn->Controls->Add(this->label6);
			this->edit_pn->Controls->Add(this->button10);
			this->edit_pn->Location = System::Drawing::Point(420, 0);
			this->edit_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit_pn->Name = L"edit_pn";
			this->edit_pn->Size = System::Drawing::Size(1001, 779);
			this->edit_pn->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(888, 732);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Log out";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label35->Location = System::Drawing::Point(800, 418);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(119, 19);
			this->label35->TabIndex = 9;
			this->label35->Text = L"dd/mm/yyyy";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label34->Location = System::Drawing::Point(485, 416);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(119, 19);
			this->label34->TabIndex = 9;
			this->label34->Text = L"dd/mm/yyyy";
			// 
			// maxNoOfRes_lbl_edit
			// 
			this->maxNoOfRes_lbl_edit->AutoSize = true;
			this->maxNoOfRes_lbl_edit->BackColor = System::Drawing::Color::Transparent;
			this->maxNoOfRes_lbl_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maxNoOfRes_lbl_edit->ForeColor = System::Drawing::Color::Red;
			this->maxNoOfRes_lbl_edit->Location = System::Drawing::Point(374, 672);
			this->maxNoOfRes_lbl_edit->Name = L"maxNoOfRes_lbl_edit";
			this->maxNoOfRes_lbl_edit->Size = System::Drawing::Size(0, 20);
			this->maxNoOfRes_lbl_edit->TabIndex = 8;
			// 
			// tripCost_lbl_edit
			// 
			this->tripCost_lbl_edit->AutoSize = true;
			this->tripCost_lbl_edit->BackColor = System::Drawing::Color::Transparent;
			this->tripCost_lbl_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tripCost_lbl_edit->ForeColor = System::Drawing::Color::Red;
			this->tripCost_lbl_edit->Location = System::Drawing::Point(689, 673);
			this->tripCost_lbl_edit->Name = L"tripCost_lbl_edit";
			this->tripCost_lbl_edit->Size = System::Drawing::Size(0, 20);
			this->tripCost_lbl_edit->TabIndex = 8;
			// 
			// label43
			// 
			this->label43->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label43->Location = System::Drawing::Point(404, 14);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(193, 34);
			this->label43->TabIndex = 1;
			this->label43->Text = L"Update a Trip";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->tripID,
					this->startDate, this->endDate, this->destination, this->transportation, this->hotelName, this->hotelAddress, this->maxNoOfReservations,
					this->tripCost, this->noOfReservations
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 74);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(950, 313);
			this->dataGridView1->TabIndex = 2;
			// 
			// tripID
			// 
			this->tripID->HeaderText = L"trip ID";
			this->tripID->MinimumWidth = 6;
			this->tripID->Name = L"tripID";
			this->tripID->ReadOnly = true;
			this->tripID->Width = 125;
			// 
			// startDate
			// 
			this->startDate->HeaderText = L"start date";
			this->startDate->MinimumWidth = 6;
			this->startDate->Name = L"startDate";
			this->startDate->ReadOnly = true;
			this->startDate->Width = 125;
			// 
			// endDate
			// 
			this->endDate->HeaderText = L"end date";
			this->endDate->MinimumWidth = 6;
			this->endDate->Name = L"endDate";
			this->endDate->ReadOnly = true;
			this->endDate->Width = 125;
			// 
			// destination
			// 
			this->destination->HeaderText = L"destination";
			this->destination->MinimumWidth = 6;
			this->destination->Name = L"destination";
			this->destination->ReadOnly = true;
			this->destination->Width = 125;
			// 
			// transportation
			// 
			this->transportation->HeaderText = L"transportation";
			this->transportation->MinimumWidth = 6;
			this->transportation->Name = L"transportation";
			this->transportation->ReadOnly = true;
			this->transportation->Width = 125;
			// 
			// hotelName
			// 
			this->hotelName->HeaderText = L"hotel name";
			this->hotelName->MinimumWidth = 6;
			this->hotelName->Name = L"hotelName";
			this->hotelName->ReadOnly = true;
			this->hotelName->Width = 125;
			// 
			// hotelAddress
			// 
			this->hotelAddress->HeaderText = L"hotel address";
			this->hotelAddress->MinimumWidth = 6;
			this->hotelAddress->Name = L"hotelAddress";
			this->hotelAddress->ReadOnly = true;
			this->hotelAddress->Width = 125;
			// 
			// maxNoOfReservations
			// 
			this->maxNoOfReservations->HeaderText = L"max no of reservations";
			this->maxNoOfReservations->MinimumWidth = 6;
			this->maxNoOfReservations->Name = L"maxNoOfReservations";
			this->maxNoOfReservations->ReadOnly = true;
			this->maxNoOfReservations->Width = 125;
			// 
			// tripCost
			// 
			this->tripCost->HeaderText = L"trip cost";
			this->tripCost->MinimumWidth = 6;
			this->tripCost->Name = L"tripCost";
			this->tripCost->ReadOnly = true;
			this->tripCost->Width = 125;
			// 
			// noOfReservations
			// 
			this->noOfReservations->HeaderText = L"no of reservations";
			this->noOfReservations->MinimumWidth = 6;
			this->noOfReservations->Name = L"noOfReservations";
			this->noOfReservations->ReadOnly = true;
			this->noOfReservations->Width = 125;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(678, 604);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(75, 19);
			this->label33->TabIndex = 5;
			this->label33->Text = L"Trip cost";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(363, 604);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(195, 19);
			this->label30->TabIndex = 5;
			this->label30->Text = L"Max no of reservations";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(678, 509);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(104, 19);
			this->label32->TabIndex = 5;
			this->label32->Text = L"Hotel name";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(363, 509);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(121, 19);
			this->label28->TabIndex = 5;
			this->label28->Text = L"Transportation";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(677, 416);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(81, 19);
			this->label31->TabIndex = 5;
			this->label31->Text = L"End date";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(362, 416);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(84, 19);
			this->label25->TabIndex = 5;
			this->label25->Text = L"Start date";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(32, 604);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(121, 19);
			this->label29->TabIndex = 6;
			this->label29->Text = L"Hotel address";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(32, 509);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(98, 19);
			this->label27->TabIndex = 6;
			this->label27->Text = L"Destination";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(31, 416);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(58, 19);
			this->label26->TabIndex = 6;
			this->label26->Text = L"Trip ID";
			// 
			// tripCost_edit
			// 
			this->tripCost_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->tripCost_edit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tripCost_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tripCost_edit->ForeColor = System::Drawing::Color::White;
			this->tripCost_edit->Location = System::Drawing::Point(682, 630);
			this->tripCost_edit->Multiline = true;
			this->tripCost_edit->Name = L"tripCost_edit";
			this->tripCost_edit->Size = System::Drawing::Size(238, 40);
			this->tripCost_edit->TabIndex = 3;
			this->tripCost_edit->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maxNoOfreserv_edit
			// 
			this->maxNoOfreserv_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->maxNoOfreserv_edit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maxNoOfreserv_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maxNoOfreserv_edit->ForeColor = System::Drawing::Color::White;
			this->maxNoOfreserv_edit->Location = System::Drawing::Point(367, 630);
			this->maxNoOfreserv_edit->Multiline = true;
			this->maxNoOfreserv_edit->Name = L"maxNoOfreserv_edit";
			this->maxNoOfreserv_edit->Size = System::Drawing::Size(238, 40);
			this->maxNoOfreserv_edit->TabIndex = 3;
			this->maxNoOfreserv_edit->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// hotelName_edit
			// 
			this->hotelName_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->hotelName_edit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->hotelName_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hotelName_edit->ForeColor = System::Drawing::Color::White;
			this->hotelName_edit->Location = System::Drawing::Point(682, 537);
			this->hotelName_edit->Multiline = true;
			this->hotelName_edit->Name = L"hotelName_edit";
			this->hotelName_edit->Size = System::Drawing::Size(238, 40);
			this->hotelName_edit->TabIndex = 3;
			this->hotelName_edit->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// transportation_edit
			// 
			this->transportation_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->transportation_edit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->transportation_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transportation_edit->ForeColor = System::Drawing::Color::White;
			this->transportation_edit->Location = System::Drawing::Point(367, 537);
			this->transportation_edit->Multiline = true;
			this->transportation_edit->Name = L"transportation_edit";
			this->transportation_edit->Size = System::Drawing::Size(238, 40);
			this->transportation_edit->TabIndex = 3;
			this->transportation_edit->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// endDate_edit
			// 
			this->endDate_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->endDate_edit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->endDate_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->endDate_edit->ForeColor = System::Drawing::Color::White;
			this->endDate_edit->Location = System::Drawing::Point(681, 444);
			this->endDate_edit->Multiline = true;
			this->endDate_edit->Name = L"endDate_edit";
			this->endDate_edit->Size = System::Drawing::Size(238, 40);
			this->endDate_edit->TabIndex = 3;
			this->endDate_edit->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// startDate_edit
			// 
			this->startDate_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->startDate_edit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->startDate_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startDate_edit->ForeColor = System::Drawing::Color::White;
			this->startDate_edit->Location = System::Drawing::Point(366, 444);
			this->startDate_edit->Multiline = true;
			this->startDate_edit->Name = L"startDate_edit";
			this->startDate_edit->Size = System::Drawing::Size(238, 40);
			this->startDate_edit->TabIndex = 3;
			this->startDate_edit->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// hotelAddress_edit
			// 
			this->hotelAddress_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->hotelAddress_edit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->hotelAddress_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hotelAddress_edit->ForeColor = System::Drawing::Color::White;
			this->hotelAddress_edit->Location = System::Drawing::Point(36, 630);
			this->hotelAddress_edit->Multiline = true;
			this->hotelAddress_edit->Name = L"hotelAddress_edit";
			this->hotelAddress_edit->Size = System::Drawing::Size(238, 40);
			this->hotelAddress_edit->TabIndex = 4;
			this->hotelAddress_edit->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// destination_edit
			// 
			this->destination_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->destination_edit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->destination_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->destination_edit->ForeColor = System::Drawing::Color::White;
			this->destination_edit->Location = System::Drawing::Point(36, 537);
			this->destination_edit->Multiline = true;
			this->destination_edit->Name = L"destination_edit";
			this->destination_edit->Size = System::Drawing::Size(238, 40);
			this->destination_edit->TabIndex = 4;
			this->destination_edit->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tripID_edit
			// 
			this->tripID_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->tripID_edit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tripID_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tripID_edit->ForeColor = System::Drawing::Color::White;
			this->tripID_edit->Location = System::Drawing::Point(35, 444);
			this->tripID_edit->Multiline = true;
			this->tripID_edit->Name = L"tripID_edit";
			this->tripID_edit->Size = System::Drawing::Size(238, 40);
			this->tripID_edit->TabIndex = 4;
			this->tripID_edit->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label6->Location = System::Drawing::Point(448, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 34);
			this->label6->TabIndex = 1;
			this->label6->Text = L"edit trips";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DeepSkyBlue;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button10->Location = System::Drawing::Point(411, 697);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(178, 55);
			this->button10->TabIndex = 7;
			this->button10->Text = L"Update";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// delete_pn
			// 
			this->delete_pn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->delete_pn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->delete_pn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delete_pn.BackgroundImage")));
			this->delete_pn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->delete_pn->Controls->Add(this->button14);
			this->delete_pn->Controls->Add(this->deleteTrip_btn);
			this->delete_pn->Controls->Add(this->label24);
			this->delete_pn->Controls->Add(this->tripID_delete_txt);
			this->delete_pn->Controls->Add(this->label7);
			this->delete_pn->Location = System::Drawing::Point(420, 0);
			this->delete_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->delete_pn->Name = L"delete_pn";
			this->delete_pn->Size = System::Drawing::Size(1001, 779);
			this->delete_pn->TabIndex = 3;
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(888, 732);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(101, 36);
			this->button14->TabIndex = 6;
			this->button14->Text = L"Log out";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// deleteTrip_btn
			// 
			this->deleteTrip_btn->BackColor = System::Drawing::Color::Transparent;
			this->deleteTrip_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->deleteTrip_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DeepSkyBlue;
			this->deleteTrip_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteTrip_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteTrip_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->deleteTrip_btn->Location = System::Drawing::Point(411, 673);
			this->deleteTrip_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->deleteTrip_btn->Name = L"deleteTrip_btn";
			this->deleteTrip_btn->Size = System::Drawing::Size(178, 55);
			this->deleteTrip_btn->TabIndex = 3;
			this->deleteTrip_btn->Text = L"DELETE";
			this->deleteTrip_btn->UseVisualStyleBackColor = false;
			this->deleteTrip_btn->Click += gcnew System::EventHandler(this, &MyForm::deleteTrip_btn_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(379, 325);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(58, 19);
			this->label24->TabIndex = 5;
			this->label24->Text = L"Trip ID";
			// 
			// tripID_delete_txt
			// 
			this->tripID_delete_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->tripID_delete_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tripID_delete_txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tripID_delete_txt->ForeColor = System::Drawing::Color::White;
			this->tripID_delete_txt->Location = System::Drawing::Point(383, 347);
			this->tripID_delete_txt->Multiline = true;
			this->tripID_delete_txt->Name = L"tripID_delete_txt";
			this->tripID_delete_txt->Size = System::Drawing::Size(238, 40);
			this->tripID_delete_txt->TabIndex = 4;
			this->tripID_delete_txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label7->Location = System::Drawing::Point(408, 14);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(184, 34);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Delete a Trip";
			// 
			// users_pn
			// 
			this->users_pn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->users_pn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->users_pn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"users_pn.BackgroundImage")));
			this->users_pn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->users_pn->Controls->Add(this->button15);
			this->users_pn->Controls->Add(this->userdatagradeview);
			this->users_pn->Controls->Add(this->label8);
			this->users_pn->Location = System::Drawing::Point(420, 0);
			this->users_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->users_pn->Name = L"users_pn";
			this->users_pn->Size = System::Drawing::Size(1001, 779);
			this->users_pn->TabIndex = 4;
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(888, 732);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(101, 36);
			this->button15->TabIndex = 4;
			this->button15->Text = L"Log out";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// userdatagradeview
			// 
			this->userdatagradeview->AllowUserToAddRows = false;
			this->userdatagradeview->AllowUserToDeleteRows = false;
			this->userdatagradeview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->userdatagradeview->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->username,
					this->password_grade, this->firstName_grade, this->lastName_grade, this->email_grade, this->address_grade, this->phoneNumber_grade,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->userdatagradeview->Location = System::Drawing::Point(36, 88);
			this->userdatagradeview->Name = L"userdatagradeview";
			this->userdatagradeview->ReadOnly = true;
			this->userdatagradeview->RowHeadersWidth = 51;
			this->userdatagradeview->RowTemplate->Height = 24;
			this->userdatagradeview->Size = System::Drawing::Size(929, 603);
			this->userdatagradeview->TabIndex = 3;
			// 
			// username
			// 
			this->username->HeaderText = L"username";
			this->username->MinimumWidth = 6;
			this->username->Name = L"username";
			this->username->ReadOnly = true;
			this->username->Width = 125;
			// 
			// password_grade
			// 
			this->password_grade->HeaderText = L"password";
			this->password_grade->MinimumWidth = 6;
			this->password_grade->Name = L"password_grade";
			this->password_grade->ReadOnly = true;
			this->password_grade->Width = 125;
			// 
			// firstName_grade
			// 
			this->firstName_grade->HeaderText = L"first name";
			this->firstName_grade->MinimumWidth = 6;
			this->firstName_grade->Name = L"firstName_grade";
			this->firstName_grade->ReadOnly = true;
			this->firstName_grade->Width = 125;
			// 
			// lastName_grade
			// 
			this->lastName_grade->HeaderText = L"last name";
			this->lastName_grade->MinimumWidth = 6;
			this->lastName_grade->Name = L"lastName_grade";
			this->lastName_grade->ReadOnly = true;
			this->lastName_grade->Width = 125;
			// 
			// email_grade
			// 
			this->email_grade->HeaderText = L"email";
			this->email_grade->MinimumWidth = 6;
			this->email_grade->Name = L"email_grade";
			this->email_grade->ReadOnly = true;
			this->email_grade->Width = 125;
			// 
			// address_grade
			// 
			this->address_grade->HeaderText = L"address";
			this->address_grade->MinimumWidth = 6;
			this->address_grade->Name = L"address_grade";
			this->address_grade->ReadOnly = true;
			this->address_grade->Width = 125;
			// 
			// phoneNumber_grade
			// 
			this->phoneNumber_grade->HeaderText = L"phone number";
			this->phoneNumber_grade->MinimumWidth = 6;
			this->phoneNumber_grade->Name = L"phoneNumber_grade";
			this->phoneNumber_grade->ReadOnly = true;
			this->phoneNumber_grade->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Visible = false;
			this->Column1->Width = 6;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Visible = false;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Visible = false;
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Visible = false;
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Visible = false;
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Visible = false;
			this->Column6->Width = 125;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label8->Location = System::Drawing::Point(458, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 34);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Users";
			// 
			// reservations
			// 
			this->reservations->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->reservations->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->reservations->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reservations.BackgroundImage")));
			this->reservations->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reservations->Controls->Add(this->button16);
			this->reservations->Controls->Add(this->dataGridView2);
			this->reservations->Controls->Add(this->label45);
			this->reservations->Location = System::Drawing::Point(420, 0);
			this->reservations->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->reservations->Name = L"reservations";
			this->reservations->Size = System::Drawing::Size(1001, 779);
			this->reservations->TabIndex = 7;
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(888, 732);
			this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(101, 36);
			this->button16->TabIndex = 13;
			this->button16->Text = L"Log out";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn8
			});
			this->dataGridView2->Location = System::Drawing::Point(36, 88);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(929, 603);
			this->dataGridView2->TabIndex = 3;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"UserName";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"TripID";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"No. of People";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Payment Method";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Column1";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Visible = false;
			this->dataGridViewTextBoxColumn8->Width = 6;
			// 
			// label45
			// 
			this->label45->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::Transparent;
			this->label45->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label45->Location = System::Drawing::Point(408, 14);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(184, 34);
			this->label45->TabIndex = 0;
			this->label45->Text = L"Reservations";
			// 
			// user_pn
			// 
			this->user_pn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->user_pn->Controls->Add(this->history_pn);
			this->user_pn->Controls->Add(this->button8);
			this->user_pn->Controls->Add(this->panel13);
			this->user_pn->Controls->Add(this->reserve_pn);
			this->user_pn->Controls->Add(this->change_pn);
			this->user_pn->Controls->Add(this->cancel_pn);
			this->user_pn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->user_pn->Location = System::Drawing::Point(0, 0);
			this->user_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->user_pn->Name = L"user_pn";
			this->user_pn->Size = System::Drawing::Size(1421, 779);
			this->user_pn->TabIndex = 10;
			this->user_pn->Visible = false;
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(217)));
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(1307, 730);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(101, 36);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Log out";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel13->Controls->Add(this->nameOfUser_lbl);
			this->panel13->Controls->Add(this->label13);
			this->panel13->Controls->Add(this->history_btn);
			this->panel13->Controls->Add(this->cancel_btn);
			this->panel13->Controls->Add(this->change_btn);
			this->panel13->Controls->Add(this->reserve_btn);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel13->Location = System::Drawing::Point(0, 0);
			this->panel13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(420, 779);
			this->panel13->TabIndex = 1;
			// 
			// nameOfUser_lbl
			// 
			this->nameOfUser_lbl->AutoSize = true;
			this->nameOfUser_lbl->BackColor = System::Drawing::Color::Transparent;
			this->nameOfUser_lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameOfUser_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->nameOfUser_lbl->Location = System::Drawing::Point(12, 90);
			this->nameOfUser_lbl->Name = L"nameOfUser_lbl";
			this->nameOfUser_lbl->Size = System::Drawing::Size(0, 23);
			this->nameOfUser_lbl->TabIndex = 6;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(57, 14);
			this->label13->Name = L"label13";
			this->label13->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label13->Size = System::Drawing::Size(283, 23);
			this->label13->TabIndex = 5;
			this->label13->Text = L"T     r     i     p           T     i     c     k";
			// 
			// history_btn
			// 
			this->history_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->history_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->history_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->history_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->history_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->history_btn->Location = System::Drawing::Point(-21, 576);
			this->history_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->history_btn->Name = L"history_btn";
			this->history_btn->Size = System::Drawing::Size(459, 71);
			this->history_btn->TabIndex = 0;
			this->history_btn->Text = L"HISTORY";
			this->history_btn->UseVisualStyleBackColor = true;
			this->history_btn->Click += gcnew System::EventHandler(this, &MyForm::history_btn_Click);
			// 
			// cancel_btn
			// 
			this->cancel_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cancel_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->cancel_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->cancel_btn->Location = System::Drawing::Point(-21, 431);
			this->cancel_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(459, 71);
			this->cancel_btn->TabIndex = 0;
			this->cancel_btn->Text = L"CANCEL RESERVATION";
			this->cancel_btn->UseVisualStyleBackColor = true;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &MyForm::cancel_btn_Click);
			// 
			// change_btn
			// 
			this->change_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->change_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->change_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->change_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->change_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->change_btn->Location = System::Drawing::Point(-21, 286);
			this->change_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->change_btn->Name = L"change_btn";
			this->change_btn->Size = System::Drawing::Size(459, 71);
			this->change_btn->TabIndex = 0;
			this->change_btn->Text = L"CHANGE RESERVATION";
			this->change_btn->UseVisualStyleBackColor = true;
			this->change_btn->Click += gcnew System::EventHandler(this, &MyForm::change_btn_Click);
			// 
			// reserve_btn
			// 
			this->reserve_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->reserve_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->reserve_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reserve_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserve_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->reserve_btn->Location = System::Drawing::Point(-21, 141);
			this->reserve_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->reserve_btn->Name = L"reserve_btn";
			this->reserve_btn->Size = System::Drawing::Size(459, 71);
			this->reserve_btn->TabIndex = 0;
			this->reserve_btn->Text = L"RESERVE A TRIP";
			this->reserve_btn->UseVisualStyleBackColor = true;
			this->reserve_btn->Click += gcnew System::EventHandler(this, &MyForm::reserve_btn_Click);
			// 
			// reserve_pn
			// 
			this->reserve_pn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->reserve_pn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->reserve_pn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reserve_pn.BackgroundImage")));
			this->reserve_pn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->reserve_pn->Controls->Add(this->dataGridView4);
			this->reserve_pn->Controls->Add(this->button11);
			this->reserve_pn->Controls->Add(this->label38);
			this->reserve_pn->Controls->Add(this->label39);
			this->reserve_pn->Controls->Add(this->label40);
			this->reserve_pn->Controls->Add(this->label41);
			this->reserve_pn->Controls->Add(this->textBox13);
			this->reserve_pn->Controls->Add(this->textBox17);
			this->reserve_pn->Controls->Add(this->textBox18);
			this->reserve_pn->Controls->Add(this->label9);
			this->reserve_pn->Location = System::Drawing::Point(420, 0);
			this->reserve_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->reserve_pn->Name = L"reserve_pn";
			this->reserve_pn->Size = System::Drawing::Size(1001, 779);
			this->reserve_pn->TabIndex = 2;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn16,
					this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19, this->dataGridViewTextBoxColumn20,
					this->dataGridViewTextBoxColumn21, this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24,
					this->dataGridViewTextBoxColumn25
			});
			this->dataGridView4->Location = System::Drawing::Point(36, 88);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(929, 428);
			this->dataGridView4->TabIndex = 60;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"trip ID";
			this->dataGridViewTextBoxColumn16->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->ReadOnly = true;
			this->dataGridViewTextBoxColumn16->Width = 125;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"start date";
			this->dataGridViewTextBoxColumn17->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->ReadOnly = true;
			this->dataGridViewTextBoxColumn17->Width = 125;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"end date";
			this->dataGridViewTextBoxColumn18->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->ReadOnly = true;
			this->dataGridViewTextBoxColumn18->Width = 125;
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"destination";
			this->dataGridViewTextBoxColumn19->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			this->dataGridViewTextBoxColumn19->ReadOnly = true;
			this->dataGridViewTextBoxColumn19->Width = 125;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"transportation";
			this->dataGridViewTextBoxColumn20->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->ReadOnly = true;
			this->dataGridViewTextBoxColumn20->Width = 125;
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"hotel name";
			this->dataGridViewTextBoxColumn21->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			this->dataGridViewTextBoxColumn21->ReadOnly = true;
			this->dataGridViewTextBoxColumn21->Width = 125;
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->HeaderText = L"hotel address";
			this->dataGridViewTextBoxColumn22->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			this->dataGridViewTextBoxColumn22->ReadOnly = true;
			this->dataGridViewTextBoxColumn22->Width = 125;
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->HeaderText = L"max no of reservations";
			this->dataGridViewTextBoxColumn23->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			this->dataGridViewTextBoxColumn23->ReadOnly = true;
			this->dataGridViewTextBoxColumn23->Width = 125;
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"trip cost";
			this->dataGridViewTextBoxColumn24->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			this->dataGridViewTextBoxColumn24->ReadOnly = true;
			this->dataGridViewTextBoxColumn24->Width = 125;
			// 
			// dataGridViewTextBoxColumn25
			// 
			this->dataGridViewTextBoxColumn25->HeaderText = L"no of reservations";
			this->dataGridViewTextBoxColumn25->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
			this->dataGridViewTextBoxColumn25->ReadOnly = true;
			this->dataGridViewTextBoxColumn25->Width = 125;
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DeepSkyBlue;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button11->Location = System::Drawing::Point(399, 685);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(203, 55);
			this->button11->TabIndex = 59;
			this->button11->Text = L"R E S E R V E ";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label38
			// 
			this->label38->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(659, 601);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(148, 19);
			this->label38->TabIndex = 58;
			this->label38->Text = L"Payment Method";
			// 
			// label39
			// 
			this->label39->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(379, 601);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(125, 19);
			this->label39->TabIndex = 57;
			this->label39->Text = L"NO. of People";
			// 
			// label40
			// 
			this->label40->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::Red;
			this->label40->Location = System::Drawing::Point(109, 633);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(0, 20);
			this->label40->TabIndex = 56;
			// 
			// label41
			// 
			this->label41->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(103, 601);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(58, 19);
			this->label41->TabIndex = 55;
			this->label41->Text = L"Trip ID";
			// 
			// textBox13
			// 
			this->textBox13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->ForeColor = System::Drawing::Color::White;
			this->textBox13->Location = System::Drawing::Point(662, 623);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(238, 40);
			this->textBox13->TabIndex = 53;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox17
			// 
			this->textBox17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->ForeColor = System::Drawing::Color::White;
			this->textBox17->Location = System::Drawing::Point(383, 623);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(238, 40);
			this->textBox17->TabIndex = 54;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox18
			// 
			this->textBox18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->ForeColor = System::Drawing::Color::White;
			this->textBox18->Location = System::Drawing::Point(107, 623);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(238, 40);
			this->textBox18->TabIndex = 52;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label9->Location = System::Drawing::Point(399, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(202, 34);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Reserve a Trip";
			// 
			// change_pn
			// 
			this->change_pn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->change_pn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->change_pn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"change_pn.BackgroundImage")));
			this->change_pn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->change_pn->Controls->Add(this->dataGridView3);
			this->change_pn->Controls->Add(this->button12);
			this->change_pn->Controls->Add(this->label46);
			this->change_pn->Controls->Add(this->label47);
			this->change_pn->Controls->Add(this->textBox14);
			this->change_pn->Controls->Add(this->label42);
			this->change_pn->Controls->Add(this->label44);
			this->change_pn->Controls->Add(this->label48);
			this->change_pn->Controls->Add(this->label49);
			this->change_pn->Controls->Add(this->textBox10);
			this->change_pn->Controls->Add(this->textBox11);
			this->change_pn->Controls->Add(this->textBox12);
			this->change_pn->Controls->Add(this->label10);
			this->change_pn->Location = System::Drawing::Point(420, 0);
			this->change_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->change_pn->Name = L"change_pn";
			this->change_pn->Size = System::Drawing::Size(1001, 779);
			this->change_pn->TabIndex = 3;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14,
					this->dataGridViewTextBoxColumn15
			});
			this->dataGridView3->Location = System::Drawing::Point(36, 63);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(929, 428);
			this->dataGridView3->TabIndex = 61;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"trip ID";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"start date";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"end date";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 125;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"destination";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"transportation";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 125;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"hotel name";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 125;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"hotel address";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Width = 125;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"max no of reservations";
			this->dataGridViewTextBoxColumn13->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			this->dataGridViewTextBoxColumn13->Width = 125;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"trip cost";
			this->dataGridViewTextBoxColumn14->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			this->dataGridViewTextBoxColumn14->Width = 125;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"no of reservations";
			this->dataGridViewTextBoxColumn15->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			this->dataGridViewTextBoxColumn15->Width = 125;
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DeepSkyBlue;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button12->Location = System::Drawing::Point(400, 660);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(203, 55);
			this->button12->TabIndex = 50;
			this->button12->Text = L"C H A N G E ";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label46
			// 
			this->label46->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::Transparent;
			this->label46->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::Red;
			this->label46->Location = System::Drawing::Point(346, 631);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(0, 20);
			this->label46->TabIndex = 60;
			// 
			// label47
			// 
			this->label47->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::Transparent;
			this->label47->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(104, 576);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(101, 19);
			this->label47->TabIndex = 59;
			this->label47->Text = L"New Trip ID";
			// 
			// textBox14
			// 
			this->textBox14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->ForeColor = System::Drawing::Color::White;
			this->textBox14->Location = System::Drawing::Point(108, 598);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(238, 40);
			this->textBox14->TabIndex = 58;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label42
			// 
			this->label42->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(658, 576);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(148, 19);
			this->label42->TabIndex = 57;
			this->label42->Text = L"Payment Method";
			// 
			// label44
			// 
			this->label44->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::Transparent;
			this->label44->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(378, 576);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(125, 19);
			this->label44->TabIndex = 56;
			this->label44->Text = L"NO. of People";
			// 
			// label48
			// 
			this->label48->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::Transparent;
			this->label48->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::Color::Red;
			this->label48->Location = System::Drawing::Point(115, 534);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(0, 20);
			this->label48->TabIndex = 55;
			// 
			// label49
			// 
			this->label49->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::Transparent;
			this->label49->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(104, 494);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(92, 19);
			this->label49->TabIndex = 54;
			this->label49->Text = L"Old Trip ID";
			// 
			// textBox10
			// 
			this->textBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(660, 598);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(238, 40);
			this->textBox10->TabIndex = 52;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(384, 598);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(238, 40);
			this->textBox11->TabIndex = 53;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::Color::White;
			this->textBox12->Location = System::Drawing::Point(108, 516);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(238, 40);
			this->textBox12->TabIndex = 51;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label10->Location = System::Drawing::Point(342, 14);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(316, 34);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Change a Reservation";
			// 
			// cancel_pn
			// 
			this->cancel_pn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cancel_pn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->cancel_pn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancel_pn.BackgroundImage")));
			this->cancel_pn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cancel_pn->Controls->Add(this->delete_btn);
			this->cancel_pn->Controls->Add(this->label50);
			this->cancel_pn->Controls->Add(this->label51);
			this->cancel_pn->Controls->Add(this->textBox19);
			this->cancel_pn->Controls->Add(this->label11);
			this->cancel_pn->Location = System::Drawing::Point(420, 0);
			this->cancel_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancel_pn->Name = L"cancel_pn";
			this->cancel_pn->Size = System::Drawing::Size(1001, 779);
			this->cancel_pn->TabIndex = 3;
			// 
			// delete_btn
			// 
			this->delete_btn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->delete_btn->BackColor = System::Drawing::Color::Transparent;
			this->delete_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->delete_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DeepSkyBlue;
			this->delete_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->delete_btn->Location = System::Drawing::Point(399, 660);
			this->delete_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(203, 55);
			this->delete_btn->TabIndex = 49;
			this->delete_btn->Text = L"C A N C E L";
			this->delete_btn->UseVisualStyleBackColor = false;
			this->delete_btn->Click += gcnew System::EventHandler(this, &MyForm::delete_btn_Click);
			// 
			// label50
			// 
			this->label50->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::Transparent;
			this->label50->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::Color::Red;
			this->label50->Location = System::Drawing::Point(388, 263);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(0, 20);
			this->label50->TabIndex = 48;
			// 
			// label51
			// 
			this->label51->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::Transparent;
			this->label51->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(379, 352);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(58, 19);
			this->label51->TabIndex = 47;
			this->label51->Text = L"Trip ID";
			// 
			// textBox19
			// 
			this->textBox19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->ForeColor = System::Drawing::Color::White;
			this->textBox19->Location = System::Drawing::Point(383, 374);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(238, 40);
			this->textBox19->TabIndex = 46;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label11->Location = System::Drawing::Point(347, 14);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(306, 34);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Cancel a Reservation";
			// 
			// history_pn
			// 
			this->history_pn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->history_pn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->history_pn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"history_pn.BackgroundImage")));
			this->history_pn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->history_pn->Controls->Add(this->dataGridView5);
			this->history_pn->Controls->Add(this->label12);
			this->history_pn->Location = System::Drawing::Point(420, 0);
			this->history_pn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->history_pn->Name = L"history_pn";
			this->history_pn->Size = System::Drawing::Size(1001, 779);
			this->history_pn->TabIndex = 4;
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn26,
					this->dataGridViewTextBoxColumn27, this->dataGridViewTextBoxColumn28, this->dataGridViewTextBoxColumn29, this->Column7
			});
			this->dataGridView5->Location = System::Drawing::Point(36, 97);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(929, 584);
			this->dataGridView5->TabIndex = 52;
			// 
			// dataGridViewTextBoxColumn26
			// 
			this->dataGridViewTextBoxColumn26->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn26->HeaderText = L"username";
			this->dataGridViewTextBoxColumn26->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn26->Name = L"dataGridViewTextBoxColumn26";
			this->dataGridViewTextBoxColumn26->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn27
			// 
			this->dataGridViewTextBoxColumn27->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn27->HeaderText = L"trip ID";
			this->dataGridViewTextBoxColumn27->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn27->Name = L"dataGridViewTextBoxColumn27";
			this->dataGridViewTextBoxColumn27->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn28
			// 
			this->dataGridViewTextBoxColumn28->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn28->HeaderText = L"Number of People";
			this->dataGridViewTextBoxColumn28->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn28->Name = L"dataGridViewTextBoxColumn28";
			this->dataGridViewTextBoxColumn28->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn29
			// 
			this->dataGridViewTextBoxColumn29->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn29->HeaderText = L"Payment";
			this->dataGridViewTextBoxColumn29->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn29->Name = L"dataGridViewTextBoxColumn29";
			this->dataGridViewTextBoxColumn29->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Column7";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Visible = false;
			this->Column7->Width = 125;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label12->Location = System::Drawing::Point(448, 14);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(104, 34);
			this->label12->TabIndex = 0;
			this->label12->Text = L"History";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1421, 779);
			this->Controls->Add(this->user_pn);
			this->Controls->Add(this->admin_pn);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Travel Agency";
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->Login->ResumeLayout(false);
			this->Login->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->Register->ResumeLayout(false);
			this->Register->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->lastname->ResumeLayout(false);
			this->lastname->PerformLayout();
			this->firstname->ResumeLayout(false);
			this->firstname->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->admin_pn->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->add_pn->ResumeLayout(false);
			this->add_pn->PerformLayout();
			this->edit_pn->ResumeLayout(false);
			this->edit_pn->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->delete_pn->ResumeLayout(false);
			this->delete_pn->PerformLayout();
			this->users_pn->ResumeLayout(false);
			this->users_pn->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userdatagradeview))->EndInit();
			this->reservations->ResumeLayout(false);
			this->reservations->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->user_pn->ResumeLayout(false);
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->reserve_pn->ResumeLayout(false);
			this->reserve_pn->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->change_pn->ResumeLayout(false);
			this->change_pn->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->cancel_pn->ResumeLayout(false);
			this->cancel_pn->PerformLayout();
			this->history_pn->ResumeLayout(false);
			this->history_pn->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//clearing all text boxes in Register.
	{
		
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		textBox8->Clear();
		textBox9->Clear();
	}
	Register->BringToFront();
	Login->Hide();
}
private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
	Register->SendToBack();
	Login->Show();
}
private: System::Void Login_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   
private: System::Void register_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	int counter = 0;

	{if ((functions::checkNoSpaces(msclr::interop::marshal_as<std::string>(textBox3->Text)) && (functions::checkNoSpaces(msclr::interop::marshal_as<std::string>(textBox4->Text)))))
	{
		name_lbl->Text = "";
	}
	else
	{
		name_lbl->Text = "dont use spaces";
		counter++;
	}
	}


	{if ((functions::checkNoSpaces(msclr::interop::marshal_as<std::string>(textBox5->Text))))
	{
		username_lbl->Text = "";
	}
	else
	{
		username_lbl->Text = "dont use spaces";
		counter++;
	}
	}


	{if ((functions::checkNumbers(msclr::interop::marshal_as<std::string>(textBox6->Text))))
	{
		phoneNumber_lbl->Text = "";
	}
	else
	{
		phoneNumber_lbl->Text = "use 11 numbers only";
		counter++;
	}
	}

	{if (functions::checkEmail(msclr::interop::marshal_as<std::string>(textBox7->Text)))
	{
		email_lbl->Text = "";

	}
	else
	{
		email_lbl->Text = "incorrect email format";
		counter++;
	}
	}



	{if (functions::checkUsernameExist(msclr::interop::marshal_as<std::string>(textBox5->Text)))
	{
		username_lbl->Text = "this user already exists";
		counter++;
	}
	else
		username_lbl->Text = "";
	}





	{if (functions::checkNoSpaces(msclr::interop::marshal_as<std::string>(textBox8->Text)))
	{
		address_lbl->Text = "";
	}
	else
	{
		address_lbl->Text = "don't use spaces";
		counter++;
	}
	}




	
	{if (functions::checkNoSpaces(msclr::interop::marshal_as<std::string>(textBox9->Text)))
	{
		password_lbl->Text = "";

	}
	else
	{
		password_lbl->Text = "don't use spaces";
		counter++;
	}
	}





	{if ((textBox3->Text == "")|| (textBox4->Text == "")|| (textBox5->Text == "") ||(textBox6->Text == "")|| (textBox7->Text == "")
		|| (textBox8->Text == "")|| (textBox9->Text == ""))
	{
		MessageBox::Show("enter all information");
		counter++;
	}





	}
	if (counter <= 0)
	{
		functions::addNewUser(msclr::interop::marshal_as<std::string>(textBox3->Text), msclr::interop::marshal_as<std::string>(textBox4->Text),
			msclr::interop::marshal_as<std::string>(textBox5->Text), msclr::interop::marshal_as<std::string>(textBox6->Text),
			msclr::interop::marshal_as<std::string>(textBox7->Text), msclr::interop::marshal_as<std::string>(textBox8->Text),
			msclr::interop::marshal_as<std::string>(textBox9->Text));

		MessageBox::Show("successful registeration\nnow you can login");

		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		textBox8->Clear();
		textBox9->Clear();
	}

	counter = 0;
	
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "admin" && textBox2->Text == "admin")
	{
		admin_pn->Show();
	}

	else if (functions::checkUsernameExist(msclr::interop::marshal_as<std::string>(textBox1->Text)))
	{
		if (functions::checkUserPass(functions::UsernameLineNumber(msclr::interop::marshal_as<std::string>(textBox1->Text)), msclr::interop::marshal_as<std::string>(textBox2->Text)))
		{

			string nameOfUser;
			user_pn->Show();																						// You should pass struct with the info taken from the form, just remove name for example and put the value you get from the form. 
			nameOfUser = functions::getNameOfUser(functions::UsernameLineNumber(msclr::interop::marshal_as<std::string>(textBox1->Text)));
			nameOfUser_lbl->Text = "Welcome " + msclr::interop::marshal_as<String^>(nameOfUser);
			{

				dataGridView4->Rows->Clear();
				ifstream file("tripDatabase.txt");
				string line;


				for (int i = 0; true; i++)
				{
					dataGridView4->Rows->Add();
					for (int c = 0; c < 10; c++)
					{
						while (getline(file, line))
						{
							dataGridView4->Rows[i]->Cells[c]->Value = msclr::interop::marshal_as<String^>(line);
							break;
						}
					}

					if (file.eof())
					{
						file.close();
						break;
					}
				}
			}
		
		}
		else
			MessageBox::Show("wrong password");
		
	}

	else
		MessageBox::Show("user not exist");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	admin_pn->Hide();
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	edit_pn->BringToFront();
	button1->BringToFront();
	{
		
		dataGridView1->Rows->Clear();
		ifstream file("tripDatabase.txt");
		string line;
		
		
		for (int i = 0; true; i++)
		{
			dataGridView1->Rows->Add();
			for (int c = 0; c < 10; c++)
			{
				while (getline(file, line))
				{
					dataGridView1->Rows[i]->Cells[c]->Value = msclr::interop::marshal_as<String^>(line);
					break;
				}
			}

			if (file.eof())
			{
				file.close();
				break;
			}
		}
    }
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	add_pn->BringToFront();
	button1->BringToFront();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	delete_pn->BringToFront();
	button1->BringToFront();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	users_pn->BringToFront();
	button1->BringToFront();
	{

		userdatagradeview->Rows->Clear();
		ifstream file("userDatabase.txt");
		string line;


		for (int i = 0; true; i++)
		{
			userdatagradeview->Rows->Add();
			for (int c = 0; c < 13; c++)
			{
				while (getline(file, line))
				{
					userdatagradeview->Rows[i]->Cells[c]->Value = msclr::interop::marshal_as<String^>(line);
					break;
				}
			}

			if (file.eof())
			{
				file.close();
				break;
			}
		}
	}
}
private: System::Void reserve_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	reserve_pn->BringToFront();
	button8->BringToFront();
}
private: System::Void change_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	change_pn->BringToFront();
	button8->BringToFront();
	change_pn->BringToFront();
	button8->BringToFront();
	{

		dataGridView3->Rows->Clear();
		ifstream file("tripDatabase.txt");
		string line;


		for (int i = 0; true; i++)
		{
			dataGridView3->Rows->Add();
			for (int c = 0; c < 10; c++)
			{
				while (getline(file, line))
				{
					dataGridView3->Rows[i]->Cells[c]->Value = msclr::interop::marshal_as<String^>(line);
					break;
				}
			}

			if (file.eof())
			{
				file.close();
				break;
			}
		}
	}
}
private: System::Void cancel_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	cancel_pn->BringToFront();
	button8->BringToFront();
}
private: System::Void history_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	history_pn->BringToFront();
	button8->BringToFront();
	{
		dataGridView5->Rows->Clear();
		ifstream file("historyDatabase.txt");
		string username, tripID, noOfPeople, paymentMethod, blank, line;
		int counter = 0, counter2 = 0;
		while (getline(file, line))
		{

			counter++;
			if (counter == 1 || counter % 5 == 1)
			{
				username = line;
			}
			else if (counter == 2 || counter % 5 == 2)
			{
				tripID = line;
			}
			else if (counter == 3 || counter % 5 == 3)
			{
				noOfPeople = line;
			}
			else if (counter == 4 || counter % 5 == 4)
			{
				paymentMethod = line;
			}
			else if (counter % 5 == 0)
			{
				blank = line;
			}

			if (counter % 5 == 0 && username == msclr::interop::marshal_as<std::string>(textBox1->Text))
			{

				counter2++;
				dataGridView5->Rows->Add();
				dataGridView5->Rows[counter2 - 1]->Cells[0]->Value = msclr::interop::marshal_as<String^>(username);
				dataGridView5->Rows[counter2 - 1]->Cells[1]->Value = msclr::interop::marshal_as<String^>(tripID);
				dataGridView5->Rows[counter2 - 1]->Cells[2]->Value = msclr::interop::marshal_as<String^>(noOfPeople);
				dataGridView5->Rows[counter2 - 1]->Cells[3]->Value = msclr::interop::marshal_as<String^>(paymentMethod);
				dataGridView5->Rows[counter2 - 1]->Cells[4]->Value = msclr::interop::marshal_as<String^>(blank);
				username = "";
				tripID = "";
				noOfPeople = "";
				paymentMethod = "";
			}



			if (file.eof())
				file.close();
		}
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	user_pn->Hide();

}
private: System::Void name_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void username_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void phoneNumber_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void email_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void address_lbl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addTheTrip_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	int errorCounter = 0;
	tripInfo trip;
	trip.tripID = msclr::interop::marshal_as<std::string>(tripID_txt->Text);
	trip.startDate = msclr::interop::marshal_as<std::string>(startDate_txt->Text);
	trip.endDate = msclr::interop::marshal_as<std::string>(endDate_txt->Text);
	trip.destination = msclr::interop::marshal_as<std::string>(destination_txt->Text);
	trip.transportaion = msclr::interop::marshal_as<std::string>(transportation_txt->Text);
	trip.hotelName = msclr::interop::marshal_as<std::string>(hotelName_txt->Text);
	trip.hotelAddress = msclr::interop::marshal_as<std::string>(hotelAddress_txt->Text);
	trip.maxNoOfReservations = msclr::interop::marshal_as<std::string>(maxNumberRes_txt->Text);
	trip.tripCost = msclr::interop::marshal_as<std::string>(tripCost_txt->Text);

	if (functions::checkTripIDExist(trip.tripID))
	{
		tripID_lbl->Text = "this ID already exists try anothor";
		errorCounter++;
	}
	else
	{
		if (functions::checkNoSpaces(trip.tripID))
		{
			
			if (functions::checkNumbersss(trip.tripID))
			{
				tripID_lbl->Text = "";

			}
			else
			{
				tripID_lbl->Text = "use numbers only";
				errorCounter++;
			}
		}
		else
		{
			tripID_lbl->Text = "dont use spaces";
			errorCounter++;
		}
		
	}


	if(functions::checkNumbersss(trip.maxNoOfReservations))
	{
		maxNoRes_lbl->Text = "";
	}
	else
	{
		maxNoRes_lbl->Text = "use numbers only";
		errorCounter++;
	}


	if (functions::checkNumbersss(trip.tripCost))
	{
		tripCost_lbl->Text = "";
	}
	else
	{
		tripCost_lbl->Text = "use numbers only";
		errorCounter++;
	}

	if (tripID_txt->Text == "" || startDate_txt->Text == "" || endDate_txt->Text == "" || destination_txt->Text == "" || 
		transportation_txt->Text == "" || hotelName_txt->Text == "" || hotelAddress_txt->Text == "" 
		|| maxNumberRes_txt->Text == "" || tripCost_txt->Text == "" )
	{
		errorCounter++;
		MessageBox::Show("please enter all information");
	}


		if (errorCounter == 0)
		{
			functions::addTrip(trip.tripID, trip.startDate, trip.endDate, trip.destination, trip.transportaion
				, trip.hotelName, trip.hotelAddress, trip.maxNoOfReservations, trip.tripCost);
			MessageBox::Show("Trip is successfully added");
			tripID_txt->Clear();
			startDate_txt->Clear();
			endDate_txt->Clear();
			destination_txt->Clear();
			transportation_txt->Clear();
			hotelName_txt->Clear();
			hotelAddress_txt->Clear();
			maxNumberRes_txt->Clear();
			tripCost_txt->Clear();
		}

		errorCounter = 0;
	
}


private: System::Void deleteTrip_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if(functions::checkTripIDExist(msclr::interop::marshal_as<std::string>(tripID_delete_txt->Text)))
	{
		functions::deleteTrip(functions::tripIDLineNumber(msclr::interop::marshal_as<std::string>(tripID_delete_txt->Text)));
		MessageBox::Show("trip is successfully deleted");
		tripID_delete_txt->Clear();

	}
	else
	{
		MessageBox::Show("this trip is not exist");
	}
}



private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	{
		
		tripInfo edit;
			int errorCounter = 0;
			edit.tripID = msclr::interop::marshal_as<std::string>(tripID_edit->Text);
			edit.startDate = msclr::interop::marshal_as<std::string>(startDate_edit->Text);
			edit.endDate = msclr::interop::marshal_as<std::string>(endDate_edit->Text);
			edit.destination = msclr::interop::marshal_as<std::string>(destination_edit->Text);
			edit.transportaion = msclr::interop::marshal_as<std::string>(transportation_edit->Text);
			edit.hotelName = msclr::interop::marshal_as<std::string>(hotelName_edit->Text);
			edit.hotelAddress = msclr::interop::marshal_as<std::string>(hotelAddress_edit->Text);
			edit.maxNoOfReservations = msclr::interop::marshal_as<std::string>(maxNoOfreserv_edit->Text);
			edit.tripCost = msclr::interop::marshal_as<std::string>(tripCost_edit->Text);


		if (functions::checkNumbersss(edit.maxNoOfReservations))
		{
			maxNoOfRes_lbl_edit->Text = "";
		}
		else
		{
			maxNoOfRes_lbl_edit->Text = "use numbers only";
			errorCounter++;
		}


		if (functions::checkNumbersss(edit.tripCost))
		{
			tripCost_lbl_edit->Text = "";
		}
		else
		{
			tripCost_lbl_edit->Text = "use numbers only";
			errorCounter++;
		}

		if (tripID_edit->Text == "" || startDate_edit->Text == "" || endDate_edit->Text == "" || destination_edit->Text == "" ||
			transportation_edit->Text == "" || hotelName_edit->Text == "" || hotelAddress_edit->Text == ""
			|| maxNoOfreserv_edit->Text == "" || tripCost_edit->Text == "")
		{
			errorCounter++;
			MessageBox::Show("please enter all information");
		}

		if (errorCounter == 0)
		{
			if (functions::checkTripIDExist(msclr::interop::marshal_as<std::string>(tripID_edit->Text)))
			{
				
				functions::editTrip(functions::tripIDLineNumber(edit.tripID), edit.tripID, edit.startDate, edit.endDate, edit.destination,
					edit.transportaion, edit.hotelName, edit.hotelAddress, edit.maxNoOfReservations, edit.tripCost);
				MessageBox::Show("trip successfully edited");
				tripID_edit->Clear();
				startDate_edit->Clear();
				endDate_edit->Clear();
				destination_edit->Clear();
				transportation_edit->Clear();
				hotelName_edit->Clear();
				hotelAddress_edit->Clear();
				maxNoOfreserv_edit->Clear();
				tripCost_edit->Clear();
			}
			else
			{
				MessageBox::Show("this trip does not exist");
			}
		}
		errorCounter = 0;

		dataGridView1->Rows->Clear();
		ifstream file("tripDatabase.txt");
		string line;


		for (int i = 0; true; i++)
		{
			dataGridView1->Rows->Add();
			for (int c = 0; c < 10; c++)
			{
				while (getline(file, line))
				{
					dataGridView1->Rows[i]->Cells[c]->Value = msclr::interop::marshal_as<String^>(line);
					break;
				}
			}

			if (file.eof())
			{
				file.close();
				break;
			}
		}
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	reservations->BringToFront();
	button1->BringToFront();
	{
		dataGridView2->Rows->Clear();
		ifstream file("recordData.txt");
		string line;
		for (int i = 0; true; i++)
		{
			dataGridView2->Rows->Add();
			for (int c = 0; c < 5; c++)
			{
				while (getline(file, line))
				{
					dataGridView2->Rows[i]->Cells[c]->Value = msclr::interop::marshal_as<String^>(line);
					break;
				}
			}

			if (file.eof())
			{
				file.close();
				break;
			}
		}
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (functions::checkTripIDExist(msclr::interop::marshal_as<std::string>(textBox18->Text)))
	{
		Reservation obj;
		obj.username = msclr::interop::marshal_as<std::string>(textBox1->Text);
		obj.tripID = msclr::interop::marshal_as<std::string>(textBox18->Text);
		obj.NoofPeople = msclr::interop::marshal_as<std::string>(textBox17->Text);
		obj.PaymentMethod = msclr::interop::marshal_as<std::string>(textBox13->Text);
		if (obj.PaymentMethod == "cash" || obj.PaymentMethod == "credit" || obj.PaymentMethod == "debit")
		{
			if (functions::checkUserReserve(msclr::interop::marshal_as<std::string>(textBox1->Text)))
			{
				functions::addNewRecord(obj.username, obj.tripID, obj.NoofPeople, obj.PaymentMethod);
				MessageBox::Show("Reservation Has Succeeded");
				textBox18->Clear();
				textBox17->Clear();
				textBox13->Clear();


			}
			else
			{
				MessageBox::Show("This User Has Already Reserved a Trip");
				textBox18->Clear();
				textBox17->Clear();
				textBox13->Clear();
			}
		}
		else
		{
			MessageBox::Show("Invalid Payment Method");
			textBox13->Clear();
		}
	}
	else
	{
		MessageBox::Show("This Trip is not Found\nPlease Enter Another Trip ID");
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (functions::checkUsertrip(functions::reservelinenumber(msclr::interop::marshal_as<std::string>(textBox1->Text)), (msclr::interop::marshal_as<std::string>(textBox12->Text))))
	{
		if (textBox12->Text == "" || textBox14->Text == "" || textBox11->Text == "" || textBox10->Text == "")
		{
			MessageBox::Show("Please Enter All The Information");
		}
		else
		{
			Reservation edit;
			edit.username = msclr::interop::marshal_as<std::string>(textBox1->Text);
			edit.tripID = msclr::interop::marshal_as<std::string>(textBox14->Text);
			edit.NoofPeople = msclr::interop::marshal_as<std::string>(textBox11->Text);
			edit.PaymentMethod = msclr::interop::marshal_as<std::string>(textBox10->Text);
			if (edit.PaymentMethod == "cash" || edit.PaymentMethod == "credit" || edit.PaymentMethod == "debit")
			{
				if (functions::checkTripIDExist(msclr::interop::marshal_as<std::string>(textBox14->Text)))
				{
					functions::editTripp(functions::UsernameLineNumberr(msclr::interop::marshal_as<std::string>(textBox1->Text)));
					functions::addNewRecord(edit.username, edit.tripID, edit.NoofPeople, edit.PaymentMethod);
					MessageBox::Show("Reservation Has Changed");
					textBox12->Clear();
					textBox14->Clear();
					textBox11->Clear();
					textBox10->Clear();
				}
				else
				{
					MessageBox::Show("This Trip is Not Found, Try Another Trip");
					textBox14->Clear();
				}

			}
			else
			{
				textBox10->Clear();
				MessageBox::Show("Invalid Payment Method");
			}
		}
	}

	else
	{
		MessageBox::Show("You Haven't Reserved This Trip");
		textBox12->Clear();
	}

}
private: System::Void delete_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox19->Text == "")
	{
		MessageBox::Show("Please Enter The Trip You Want to Cancel");
	}
	else
	{
		if (functions::checkDate(functions::tripIDLineNumber(msclr::interop::marshal_as<std::string>(textBox19->Text))))
		{
			if (functions::checkUsertrip(functions::reservelinenumber(msclr::interop::marshal_as<std::string>(textBox1->Text)), (msclr::interop::marshal_as<std::string>(textBox19->Text))))
			{
				functions::cancelTripp(functions::UsernameLineNumberr(msclr::interop::marshal_as<std::string>(textBox1->Text)));
				MessageBox::Show("Trip Deleted Successfully");
				textBox19->Clear();
			}
			else
			{
				MessageBox::Show("This Trip is Not Reserved");
			}
		}
		else
		{
			MessageBox::Show("Sorry, There is Less Than 1 Week Before The Start of Trip");
			textBox19->Clear();
		}
	}
}

private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	admin_pn->Hide();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	admin_pn->Hide();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	admin_pn->Hide();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	admin_pn->Hide();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	admin_pn->Hide();
}
};
}
