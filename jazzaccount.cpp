#include <iostream>
using namespace std;
main()
{
  int a, b, c,d;
  cout << "\t\t\t\t\t\tSend money method" << endl;
  cout << "1. JazzCash" << endl;
  cout << "2. EasyPaisa\n"<< endl;
  cin  >> a;
  cout << endl;

  switch (a)
  {
  case 1:
    cout << "USSD Code running................" << endl;
    cout << "\t\t\t\t\t\t Send Instruction" << endl;
    cout << "1.Send Money" << endl;
    cout << "2.Pay Bills" << endl;
    cout << "3.Mobile Load & Bundles" << endl;
    cout << "4.ReadyCash" << endl;
    cout << "5.payments" << endl;
    cout << "6.My Account" << endl;
    cout << "7.Invite & Earn" << endl;
    cout << "8.Savings & Insurance" << endl;
    cout << "9.Rs 100 Jazzload" << endl;
    cout << "10.Till Payments" << endl;
    cout << "00.Back" << endl;
    cout << "---------------------------------" << endl;
    cout << "Cancel\t\t|\tSend" << endl;
    cout << "\n"<< endl;
    cin  >> b;

    switch (b)
    {
    case 1:
      cout << "1:To Mobile Account" << endl;
      cout << "2:To CNIC" << endl;
      cout << "3:To Bank" << endl;
      cout << "4:RAAST" << endl;
      cout << "5:My Favourite" << endl;
      cout << "00:Main Menu" << endl;
      cout << "---------------------------------" << endl;
      cout << "Cancel\t\t|\tSend" << endl;
      cout << "\n"<< endl;
      cin  >> c;
      if(c==1){
        cout<<"Enter mobile number"<<endl;
        cin>>d;
        cout<<"Enter Amount you have to send"<<endl;
        cin>>d;
        cout<<"Your money has be send successfully"<<endl;
        return 0;
      }
      if(c==2){
        cout<<"Enter National CNIC number"<<endl;
        cin>>d;
        cout<<"Enter Amount you have to send"<<endl;
        cin>>d;
        cout<<"Your money has be send successfully"<<endl;
        return 0;
      }
      if(c==3){
        cout<<"Enter Bank Account Number"<<endl;
        cin>>d;
        cout<<"Enter Amount you have to send"<<endl;
        cin>>d;
        cout<<"Your money has be send successfully"<<endl;
        return 0;
      }
      if(c==4){
        cout<<"Enter Raast Id"<<endl;
        cin>>d;
        cout<<"Enter Amount you have to send"<<endl;
        cin>>d;
        cout<<"Your money has be send successfully"<<endl;
        return 0;
      }
      if(c==5){
        cout<<"Send to Hammad Zeeshan"<<endl;
        cout<<"Enter Amount you have to send"<<endl;
        cin>>d;
        cout<<"Your money has be send successfully"<<endl;
        return 0;
      }
      if(c==00){
        cout<<"You back to the main menu"<<endl;
        return 0;
      }
      break;

    case 2:
      cout << "1:Electricity" << endl;
      cout << "2:Gas" << endl;
      cout << "3:Water" << endl;
      cout << "4:Telephone" << endl;
      cout << "5:Internet" << endl;
      cout << "6:Internet Bundles" << endl;
      cout << "7:Mobile Postpaid" << endl;
      cout << "8:My Favourites" << endl;
      cout << "00:Main Menu" << endl;
      cout << "---------------------------------" << endl;
      cout << "Cancel\t\t|\tSend" << endl;
      cout << "\n"<< endl;
      cin  >> c;
      if(c==1){
        cout<<"Enter your Electricity unique code"<<endl;
        cin>>d;
        cout<<"Enter Ammount you have to send"<<endl;
        cin>>d;
        cout<<"Your electricity bill paid successfully"<<endl;
        return 0;
      }
      if(c==2){
        cout<<"Enter your Gas unique code"<<endl;
        cin>>d;
        cout<<"Enter Ammount you have to send"<<endl;
        cin>>d;
        cout<<"Your gas bill paid successfully"<<endl;
        return 0;
      }
      if(c==3){
        cout<<"Enter your Water unique code"<<endl;
        cin>>d;
        cout<<"Enter Ammount you have to send"<<endl;
        cin>>d;
        cout<<"Your water bill paid successfully"<<endl;
        return 0;
      }
      if(c==4){
        cout<<"Enter your telephone unique code"<<endl;
        cin>>d;
        cout<<"Enter Ammount you have to send"<<endl;
        cin>>d;
        cout<<"Your telephone bill paid successfully"<<endl;
        return 0;
      }
      if(c==5){
        cout<<"Enter your Internet unique code"<<endl;
        cin>>d;
        cout<<"Enter Ammount you have to send"<<endl;
        cin>>d;
        cout<<"Your internet bill paid successfully"<<endl;
        return 0;
      }
      if(c==6){
        cout<<"Select Monthly Internet Bundles"<<endl;
        cout<<"\n";
        cout<<"1.20Gb internet in 1500 for month"<<endl;
        cout<<"2.50Gb internet in 2500 for month"<<endl;
        cin>>d;
        cout<<"Enter Ammount you have to send"<<endl;
        cin>>d;
        cout<<"Your Purchaise Monthly internet bundle successfully"<<endl;
        return 0;
      }
      if(c==7){
        cout<<"Select Monthly Internet Postpaid Sim Bundles"<<endl;
        cout<<"\n";
        cout<<"1.5Gb internet in 150 for month"<<endl;
        cout<<"2.12Gb internet in 250 for month"<<endl;
        cin>>d;
        cout<<"Enter Ammount you have to send"<<endl;
        cin>>d;
        cout<<"Your Purchaise Monthly sim internet bundle successfully"<<endl;
        return 0;
      }
      if(c==8){
        cout<<"Enter your Local Internet unique code"<<endl;
        cin>>d;
        cout<<"You have to pay Rs.1000 to enjoy umlimited mbs internet service"<<endl;
        cin>>d;
        cout<<"Your Purchaise Monthly umlimited mbs internet service successfully"<<endl;
        return 0;
      }
      if(c==00){
        cout<<"You back to the main menu"<<endl;
        return 0;
      }
      break;

    case 3:
      cout << "1:Jazz Load" << endl;
      cout << "2:Telenor Load" << endl;
      cout << "3:Zong Load" << endl;
      cout << "4:Ufone Load" << endl;
      cout << "00:Main Menu" << endl;
      cout << "---------------------------------" << endl;
      cout << "Cancel\t\t|\tSend" << endl;
      cout << "\n"<< endl;
      cin  >> c;
      if(c==1){
        cout<<"Enter Jazz/Warid Number (11 digits)"<<endl;
        cin>>d;
        cout<<"Enter Ammount (Minimum Rs 49);"<<endl;
        cin>>d;
        cout<<"You Load is succesfully"<<endl;
        return 0;
      }
      if(c==2){
        cout<<"Enter Telenor Number (11 digits)"<<endl;
        cin>>d;
        cout<<"Enter Ammount (Minimum Rs 49);"<<endl;
        cin>>d;
        cout<<"You Load is succesfully"<<endl;
        return 0;
      }
      if(c==3){
        cout<<"Enter Zong Number (11 digits)"<<endl;
        cin>>d;
        cout<<"Enter Ammount (Minimum Rs 49);"<<endl;
        cin>>d;
        cout<<"You Load is succesfully"<<endl;
        return 0;
      }
      if(c==4){
        cout<<"Enter ufone Number (11 digits)"<<endl;
        cin>>d;
        cout<<"Enter Ammount (Minimum Rs 49);"<<endl;
        cin>>d;
        cout<<"You Load is succesfully"<<endl;
        return 0;
      }
      if(c==00){
        cout<<"You back to the main menu"<<endl;
        return 0;
      }

      break;

    case 4:
      cout << "1:Apply for ReadyCash" << endl;
      cout << "2:Repay Readycash" << endl;
      cout << "3:ReadyCash Repayment History" << endl;
      cout << "00:Main Menu" << endl;
      cout << "---------------------------------" << endl;
      cout << "Cancel\t\t|\tSend" << endl;
      cout << "\n"<< endl;
      cin  >> c;
      if(c==1){
        cout<<"Enter you CNIC Number"<<endl;
        cin>>d;
        cout<<"Enter you Mobile Number"<<endl;
        cin>>d;
        cout<<"Your ReadyCash request has been recived succesfully"<<endl;
        return 0;
      }
      if(c==2){
        cout<<"You have to pay Rs.1000 Readycash loan"<<endl;
        cout<<"Enter ammount to repay Readycash"<<endl;
        cin>>d;
        cout<<"You Repay ReadyCash successfully"<<endl;
        return 0;
      }
      if(c==3){
        cout<<"You send 5000 to Hammad\n You send 3500 to Aman\n You recived 5000 from Ali"<<endl;
        return 0;
      }
      if(c==00){
        cout<<"You back to the main menu"<<endl;
        return 0;
      }
      break;

    case 5:
      cout << "1:Loan Repayments" << endl;
      cout << "2:Govt. of Punjab tax Payments" << endl;
      cout << "3:Careem Voucher" << endl;
      cout << "4:Donate" << endl;
      cout << "5:Education Payments" << endl;
      cout << "6:Islamabad Traffic Police" << endl;
      cout << "7:Vaccination Certificate" << endl;
      cout << "8:Insurance" << endl;
      cout << "---------------------------------" << endl;
      cout << "Cancel\t\t|\tSend" << endl;
      cout << "\n"<< endl;
      cin  >> c;
      if(c==1){
        cout<<"Enter Ammont you have to pay"<<endl;
        cin>>d;
        cout<<"Your Load is deduted from you JazzCash account"<<endl;
        return 0;
      }
      if(c==2){
        cout<<"Enter Ammont you have to pay Govt. of Punjab tax"<<endl;
        cin>>d;
        cout<<"You have pay Govt. of Punjab tax successfully"<<endl;
        return 0;
      }
      if(c==3){
        cout<<"Enter ammount to purchase Careem voucher"<<endl;
        cin>>d;
        cout<<"You successfully purchase careem voucher"<<endl;
        return 0;
      }
      if(c==4){
        cout<<"Enter the unique code of Ngo where you have donate charity fund"<<endl;
        cin>>d;
        cout<<"Enter the ammont you have to send"<<endl;
        cin>>d;
        cout<<"You successfully donate money from your JazzCash account"<<endl;
        return 0;
      }
      if(c==5){
        cout<<"Enter the Account number of institute where you send mone"<<endl;
        cin>>d;
        cout<<"Enter the ammont you have to send"<<endl;
        cin>>d;
        cout<<"You successfully pay money from your JazzCash account"<<endl;
        return 0;
      }
      if(c==6){
        cout<<"Enter the traffic challan number"<<endl;
        cin>>d;
        cout<<"Enter the ammont you have to pay"<<endl;
        cin>>d;
        cout<<"You successfully pay traffic challan from your JazzCash account"<<endl;
        return 0;
      }
      if(c==7){
        cout<<"Enter the vaccination certificate code"<<endl;
        cin>>d;
        cout<<"Enter the ammont you have to pay"<<endl;
        cin>>d;
        cout<<"You successfully pay vaccination certificate fee from your JazzCash account"<<endl;
        return 0;
      }
      if(c==8){
        cout<<"Enter your insurance company bank account number"<<endl;
        cin>>d;
        cout<<"Enter the ammont you have to pay"<<endl;
        cin>>d;
        cout<<"You successfully pay your insurance fee from your JazzCash account"<<endl;
        return 0;
      }

      break;

    case 6:
      cout << "1:Manage MPIN" << endl;
      cout << "2:Check Balance" << endl;
      cout << "3:Mini Statment" << endl;
      cout << "4:CNIC expiry update" << endl;
      cout << "5:Check limit" << endl;
      cout << "00:Main Menu" << endl;
      cout << "---------------------------------" << endl;
      cout << "Cancel\t\t|\tSend" << endl;
      cout << "\n"<< endl;
      cin  >> c;
    if(c==1){
      cout<<"Enter you current MPIN"<<endl;
      cin>>d;
      cout<<"Enter you New MPIN"<<endl;
      cin>>d;
      cout<<"Your MPIN is changed successfully"<<endl;
      cout<<"Your new PIN is:"<<d<<endl;
      return 0;
    }
    if(c==2){
      cout<<"Enter your JazzCash pin to check your balance"<<endl;
      cin>>d;
      cout<<"Your JazzCash current balance is 4500"<<endl;
    }
    if(c==3){
      cout<<"You send 5000 to Hammad\nYou send 3500 to Aman\nYou recived 5000 from Ali"<<endl;
      return 0;
    }
    if(c==4){
      cout<<"Enter your CNIC number"<<endl;
      cin>>d;
      cout<<"expiry date: 12-04-2025"<<endl;
      return 0;
    }
    if(c==5){
      cout<<"Enter you PIN to check your account limit"<<endl;
      cin>>d;
      cout<<"Your account limit is Rs.50,000"<<endl;
      return 0;
    }
    if(c==00){
        cout<<"You back to the main menu"<<endl;
        return 0;
    }
    
      break;

    case 7:
      cout << "1:Please enter Friend's Jazz or Warid number (03*********)" << endl;
      cout << "00:Main Menu" << endl;
      cout << "---------------------------------" << endl;
      cout << "Cancel\t\t|\tSend" << endl;
      cout << "\n"<< endl;
      cin  >> c;
    if(c==1){
      cout<<"Enter you Friend number"<<endl;
      cin>>d;
      cout<<"Enter Ammount you have to send"<<endl;
      cin>>d;
      cout<<"You money has been send succesfully"<<endl;
      return 0;
    }
    if(c==00){
        cout<<"You back to the main menu"<<endl;
        return 0;
    }
      break;

    case 8:
      cout << "1:Subscribe Savings" << endl;
      cout << "2:Unsubscribe Savings" << endl;
      cout << "3:Insurance" << endl;
      cout << "00:Main Menu" << endl;
      cout << "---------------------------------" << endl;
      cout << "Cancel\t\t|\tSend" << endl;
      cout << "\n"<< endl;
      cin >> c;
      if(c==1){
        cout<<"You successfully subscribe savings policy form Jazzcash"<<endl;
        return 0;
      }
      if(c==2){
        cout<<"You successfully Unsubscribe savings policy form Jazzcash"<<endl;
        return 0;
      }
      if(c==3){
        cout<<"You successfully subscribe insurance policy form Jazzcash"<<endl;
        return 0;
      }
      if(c==00){
        cout<<"You back to the main menu"<<endl;
        return 0;
      }
      break;

    case 9:
      cout << "1:Enter Jazz/Warid Number (11 digits):" << endl;
      cout << "00:Main Menu" << endl;
      cout << "---------------------------------" << endl;
      cout << "Cancel\t\t|\tSend" << endl;
      cout << "\n"<< endl;
      cin >> c;
      if(c==1){
        cout<<"Enter Jazz/Warid Number "<<endl;
        cin>>d;
        cout<<"Enter Ammount you have to send"<<endl;
        cin>>d;
        cout<<"Money has been send succesfully"<<endl;
      }
      if(c==00){
        cout<<"You back to the main menu"<<endl;
        return 0;
      }
      break;

    case 10:
      cout << "1.Enter Till ID" << endl;
      cout << "00:Main Menu" << endl;
      cout << "---------------------------------" << endl;
      cout << "Cancel\t\t|\tSend" << endl;
      cout << "\n"<< endl;
      cin  >> c;
      if(c==1){
        cout<<"Enter Till ID "<<endl;
        cin>>d;
        cout<<"Enter Ammount you have to send"<<endl;
        cin>>d;
        cout<<"Money has been send succesfully"<<endl;
      }
      if(c==00){
        cout<<"You back to the main menu"<<endl;
        return 0;
      }

      break;

      default:
    cout << "Select from the given options" << endl;
    break;


    }

    if (b>10)
    {
      cout << "invalid choice. Try again." << endl;
    }
    break;

    case 2:
        cout<<"USSD Code running................"<<endl;
        cout<<"\t\t\t\t\t\tMy Account"<<endl;
        cout<<"1.Manage PIN"<<endl;
        cout<<"2.Check balance"<<endl;
        cout<<"3.Language Change"<<endl;
        cout<<"4.View Account Details"<<endl;
        cout<<"5.Manage ATM Card"<<endl;
        cout<<"6.My Approvals"<<endl;
        cout<<"7.Invite a friend"<<endl;
        cout<<"8.Nearby Agent"<<endl;
        cout<<"9.Help"<<endl;
        cout<<"10.Favorites"<<endl;
        cout<<"00.Back"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Cancel\t\t|\tSend"<<endl;
        cout<<"\n"<<endl;
        cin>>b;

        if(b<=10)
        {
          cout<<"Network Error. Please try again shortly"<<endl;
        }
        else{
          cout<<"Select from the above options"<<endl;
        }


    break;
  }
}
