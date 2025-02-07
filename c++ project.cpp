#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void tomainmenu();
void age();
class User {
public:
	
    char name[30];
    int age;
    long long int phone;
    string email;
    char username[30];
    string password;
    string confirmpassword;
    

    void signUp() {
       cout<<endl;
	    cout <<endl<< "\t\t\t\t\t\t* * * SIGN UP * * * \n"<<endl;
        cout<<endl;
	    cout<<"\tPLEASE ENTER THE FOLLOWING DETAILS TO SIGN UP"<<endl;
        cout<<endl;
	    cout <<"\tName: ";
        cin >> name;
        cout << "\tAge: ";
      	age();
        cout << "\tPhone Number: ";
        cin >> phone;
        cout << "\tEmail: ";
        cin >> email;
        cout << "\tUsername: ";
        cin >> username;
        cout << "\tNew Password: ";
        cin >> password;
        cout << "\tConfirm Password: ";
        cin >> confirmpassword;
		cout<<endl;
        cout<<endl;
        if (password == confirmpassword) {
        	ofstream order("order.txt",ios::app);
        	ofstream Outfile("user.txt",ios::app);
        	Outfile<<"______________________________________________________________________________________________\n";
        	Outfile<<"\t USER INFO \n"<<endl;
			cout << "\tYou have signed up with the following details:\n"<<endl;
            Outfile<<"\t Name:"<<name<<endl;
            Outfile<<"\t AGE :"<<age<<endl;
            Outfile<<"\t Phone No :"<<phone<<endl;
            cout << "\t Username: " << username << endl;
            order<<"\t Username :"<<username<<endl;
            cout << "\t Email: " << email << endl;
            Outfile << "\t Email: " << email << endl;
            Outfile<<"\t Username :"<<username<<endl;
            Outfile <<"\t password :"<<password<<endl;
            cout<<endl;
			cout << "\t\t\t\t\t!!!PROFILE HAS BEEN CREATED SUCESSFULLY!!! \n" <<endl;
			cout << "\t# YOU ARE NOW LOGGED IN # \n"<<endl;
			cout<<"\tWELCOME "<<username<<"!!:)"<<endl;
			Outfile.close();
			order.close();
        } else {
            cout << "\tPasswords do not match. Please try again.\n";
            signUp();
        }
    }

   	void age()
		{
        cin >> age;
        try{
        	if(age!=0,1,2,3,4,5,6,7,8,9)
        	throw(age);
		}
		catch (int age)
		{
			cout<<"age must be a number";
			age();	
		}
		}
    void login() {
    	 
    	ofstream Outfile("order.txt",ios::app);
        cout<<endl;
		cout << "\t\t\t\t\t\t* * * LOG IN * * *\n";
		cout<<endl;
		cout<<"\tPLEASE ENTER THE FOLLOWING DETAILS TO LOG IN"<<endl;
        cout<<endl;
        cout << "\tEnter Username: ";
        cin >> username;
        Outfile<<"USERNAME :"<<username;
        cout << "\tEnter Password: ";
        cin >> password;
        cout << "\t# YOU ARE NOW LOGGED IN #\n"<<endl;
        cout<<"\tWELCOME BACK "<<username<<"!!:)"<<endl;
        cout<<endl;
		Outfile.close();
	}
      
};
//class of appetizers menu 
class appetizers{
    int app;
    int price;
    int quantity;
public:
	appetizers() : app(0), price(0), quantity(0) {}   //constructor deko initialize garna ko laagi  
	void getapp() {
        cout<<"\t\t ***YOU ARE IN THE APPETIZERS MENU***\t\t ";
        cout<<"\n\n";
		cout << "\t[1] ALOO SADHEKO \t Price: Rs 150" << endl;
        cout << "\t[2] BUFF CHOILA \t Price: Rs 230" << endl;
        cout << "\t[3] CHI-SANDWICH \t Price: Rs 100" << endl;
        cout << "\t[4] VEG SAMOSA    \t Price: Rs 50" << endl;
        cout << "\t[5] CHATAMARI     \t Price: Rs 140" << endl;
        cout << "\t[6] EXIT ***ALL PREVIOUS ORDER GETS CANCELLED***"<<endl;
        cout<<endl;
        
		cout << "\tEnter your choice: ";
        cin >> app;
        if(app<6)
        {
        cout << "\tEnter quantity: ";
        cin >> quantity;
		}
        cout<<endl;
		 switch (app) {
            case 1:
                cout << "\t* You selected Aloo Sadheko *" << endl;
                price = 150 * quantity;
                break;
            
			case 2:
                cout << "\t* You selected Buff Choila *" << endl;
                price = 230 * quantity;
                break;
            
			case 3:
                cout << "\t* You selected Chicken Sandwich *" << endl;
                price = 100 * quantity;
                break;
            
			case 4:
                cout << "\t *You selected Veg Samosa *" << endl;
                price = 50 * quantity;
                break;
           
		    case 5:
                cout << "\t*You selected Chatamari *" << endl;
                price = 140 * quantity;
                break;
            case 6:
                	tomainmenu();
                	break;
			default:
                cout << "\t*You have selected an invalid option *" << endl;
                price = 0;
                quantity = 0;
                cout<<"\t please retry \n";
                getapp();
                break;
        }
    }

    
	int getPrice() const { return price; } 
    string getItemName()  const{
        switch (app) {
            case 1: return "ALOO SADHEKO (150)";
            case 2: return "BUFF CHOILA(230)";
            case 3: return "CHICKEN-SANDWICH(100)";
            case 4: return "VEG SAMOSA(50)";
            case 5: return "CHATAMARI(150)";
            case 6:return "YOU ARE BACK TO MAIN MENU";
            default: return "NO ITEM";
        }
    }
    int getQuantity() const { return quantity; }
};
//class for main course
class maincourse {
    int mcourse;
    int price;
    int quantity;
public:
	 maincourse() : mcourse(0), price(0), quantity(0) {} // Default constructor to initialize variables
    
	void getmcourse() {
        cout<<"\t\t ***YOU ARE IN THE MAINCOURSE MENU***\t\t ";
        cout<<"\n\n";
		cout << "\t[1] VEG DAL BHAT \t Price: Rs 170" << endl;
        cout << "\t[2] CHI DAL BHAT \t Price: Rs 300" << endl;
        cout << "\t[3] SOUP NOODLES \t Price: Rs 160" << endl;
        cout << "\t[4] SAMAYEBAJI    \t Price: RS 210" << endl;
        cout << "\t[5] MOMO PLATTER \t Price: Rs 240" << endl;
        cout << "\t[6] EXIT ***ALL PREVIOUS ORDER GETS CANCELLED***"<<endl;
        
        
		cout<<endl;
        cout << "\tEnter your choice: ";
        cin >> mcourse;
        if(mcourse<6)
        {
        cout << "\tEnter quantity: ";
        cin >> quantity;
		}
        cout<<endl;

        switch (mcourse) {
            
			case 1:
                cout << "\t* You selected Veg Dal Bhat *" << endl;
                price = 170 * quantity;
                break;
            
			case 2:
                cout << "\t* You selected Chicken Dal Bhat *" << endl;
                price = 300 * quantity;
                break;
          
		    case 3:
                cout << "\t* You selected Soup Noodles *" << endl;
                price = 160 * quantity;
                break;
           
		    case 4:
                cout << "\t* You selected Samayebaji *" << endl;
                price = 210 * quantity;
                break;
           
		    case 5:
                cout << "\t* You have selected MOMO Platter *" << endl;
                price = 240 * quantity;
                break;
        	case 6:
                	tomainmenu();
                	break;
		    default:
                 cout << "\t*You have selected an invalid option *" << endl;
                price = 0;
                quantity = 0;
                cout<<"\t please retry \n";
                getmcourse();
                break;
        }
    }
  
    int getPrice() const { return price; }
    string getItemName() const {
		switch (mcourse) {
             case 1: return "VEG DAL BHAT(170)";
            case 2: return "CHICKEN DAL BHAT(300)";
            case 3: return "SOUP NOODLES(160)";
            case 4: return "SAMAYEBAJI(210)";
            case 5: return "MOMO PLATTER(240)";
            default: return "NO ITEM";
        }
    }
    int getQuantity() const { return quantity; }
};
//class for desert 
class dessert {
    int dess;
    int price;
    int quantity;
public:
   	dessert(): dess(0), price(0), quantity(0) {} // Default constructor to initialize variables
    void getdess() {
        cout<<"\t\t ***YOU ARE IN THE DESSERT MENU***\t\t ";
        cout<<"\n\n";
		cout << "\t[1] ICE-CREAM   \t Price: Rs 120" << endl;
        cout << "\t[2] JUJU-DHAU   \t Price: Rs 160" << endl;
        cout << "\t[3] JERRY-SWARI \t Price: Rs 50" << endl;\
        cout << "\t[4] EXIT ***ALL PREVIOUS ORDER GETS CANCELLED***"<<endl;
        cout<<endl;
        
        cout << "\tEnter your choice: ";
        cin >> dess;
        if(dess<4)
        {
        	cout << "\tEnter quantity: ";
        cin >> quantity;
		}
        
        cout<<endl;
       
	    switch (dess) {
            
			case 1:
                cout << "\t* You selected Ice-Cream *" << endl;
                price = 120 * quantity;
                break;
           
		    case 2:
                cout << "\t* You have selected JUJU-Dhau *" << endl;
                price = 160 * quantity;
                break;
          
		    case 3:
                cout << "\t* You have selected Jerry-Swari *" << endl;
                price = 50 * quantity;
                break;
             case 4:
                	tomainmenu();
                	break;   
            default:
                cout << "\t*You have selected an invalid option *" << endl;
                price = 0;
                quantity = 0;
                cout<<"\t please retry \n";
                getdess();
                break;
        }
    }
   
    int getPrice() const { return price; }
    string getItemName() const {
       
	    switch (dess) {
            case 1: return "ICE-CREAM(120)";
            case 2: return "JUJU-DHAU(160)";
            case 3: return "JERRY-SWARI(50)";
            default: return "NO Item";
        }
    }
    int getQuantity() const { return quantity; }
};
//class for payment
class pay {
public:
    int paymentmethod;
    int esewaid;
	char transactionid[30];
    void payup() {
        cout << endl;
        cout << endl << "\t\t\t\t\t\t* * * PAYMENT METHOD * * * \n" << endl;
        cout << endl;

        cout << "\t[1] Cash\n";
        cout << "\t[2] Credit Card\n";
        cout << "\t[3] E-Sewa\n";
        cout << endl;

        cout << "\tSelect your desired payment method: ";
        cin >> paymentmethod;
        cout << endl;
        ofstream outFile("order.txt", ios::app);  
        switch (paymentmethod) {
            case 1:
                cout << "\tYou chose to pay by cash. Please proceed to the counter.\n";
                outFile << "Payment Method: Cash\n";
            case 2:
                cout << "\tYou chose to pay by credit card. Please insert your card.\n";
                outFile << "Payment Method: Credit Card\n";
                break;
            case 3:
                cout << "\tYou chose to pay by E-Sewa. Please scan the QR code.\n";
                cout << "\t Enter your ESEWA ID: ";
                cin >> esewaid;
                cout << "\t Enter transaction ID: ";
                cin >> transactionid;
                outFile << "Payment Method: E-Sewa\n";
                outFile << "ESEWA ID: " << esewaid << "\n";
                outFile << "Transaction ID: " << transactionid << "\n";
                break;
            default:
                cout << "\tInvalid payment method. Please restart the process.\n";
                payup();
                
                return;
        }
        outFile<<"______________________________________________________________________________________________\n";
        outFile<<endl;
        outFile.close();  // Close the file
        cout << endl;
        cout << "\t\t\t\t\t\tTHANK YOU FOR ORDERING WITH US!!" << endl;
        cout << "\t\t\t\t\t\t\tPLEASE VISIT AGAIN :)\n";
    }
};
//class for login choice diney if user lai login garnu xa ki sign up garnu xa
class logininfo:public User{
	public:
		void getusermenu()
		{
	User mps;
    cout << endl;
    cout << "\t\t\t\t--------------------WELCOME TO MPS RESTAURANT--------------------\n";
    cout << endl;
    int login = 1;
    int option;
    while (login == 1) {
        cout << "ONLINE REGISTRATION SYSTEM:" << endl;
        cout << "[1] LOG IN\n";
        cout << "[2] SIGN UP\n";
        cout << endl;
        cout << "Please Enter your choice [1 or 2]: ";
        cin >> option;

        switch(option) {
            case 1:
                mps.login();
                login = 0; // Exit loop after login
                break;
            case 2:
                mps.signUp();
                login = 0; // Exit loop after signup
                break;
            default:
                cout << "\nInvalid option. Please enter 1 or 2.\n";
                cout << "\n";
                break; // Continue loop for another chance
        }
    }
}		
};

class menu : public appetizers, public dessert, public maincourse, public pay {
private:
    // Arrays to store order details
    string itemNames[100]; // Maximum of 100 items
    int itemQuantities[100];
    int itemPrices[100];
    int itemCount;

public:
    menu() : itemCount(0) {} // Initialize itemCount

    void getmaimenu() {
        appetizers ap;
        maincourse mc;
        dessert ds;
        int totalPrice = 0;
        int val = 0;
        ofstream outFile("order.txt", ios::app);
        outFile << "\n" << endl;
        outFile << "\n ITEMS SELECTED ARE: \n";

        do {
            cout << endl;
            cout << endl;
            cout << "SELECT THE MENU:" << endl;
            cout << endl;
            cout << "\t[1] APPETIZERS MENU" << endl;
            cout << "\t[2] MAIN COURSE MENU" << endl;
            cout << "\t[3] DESSERT MENU" << endl;
            cout << "\t[4] GET BILL" << endl;
            cout << "\t[5] EXIT" << endl;
            int m;
            cout << "\n";
            cin >> m;

            switch (m) {
                case 1:
                    ap.getapp();
                    if (ap.getPrice() > 0) {
                        totalPrice += ap.getPrice();
                        itemNames[itemCount] = "Appetizer: " + ap.getItemName();
                        itemQuantities[itemCount] = ap.getQuantity();
                        itemPrices[itemCount] = ap.getPrice();
                        outFile << itemNames[itemCount] << " x " << itemQuantities[itemCount] << " - Rs " << itemPrices[itemCount] << endl;
                        itemCount++;
                    }
                    break;
                case 2:
                    mc.getmcourse();
                    if (mc.getPrice() > 0) {
                        totalPrice += mc.getPrice();
                        itemNames[itemCount] = "Main Course: " + mc.getItemName();
                        itemQuantities[itemCount] = mc.getQuantity();
                        itemPrices[itemCount] = mc.getPrice();
                        outFile << itemNames[itemCount] << " x " << itemQuantities[itemCount] << " - Rs " << itemPrices[itemCount] << endl;
                        itemCount++;
                    }
                    break;
                case 3:
                    ds.getdess();
                    if (ds.getPrice() > 0) {
                        totalPrice += ds.getPrice();
                        itemNames[itemCount] = "Dessert: " + ds.getItemName();
                        itemQuantities[itemCount] = ds.getQuantity();
                        itemPrices[itemCount] = ds.getPrice();
                        outFile << itemNames[itemCount] << " x " << itemQuantities[itemCount] << " - Rs " << itemPrices[itemCount] << endl;
                        itemCount++;
                    }
                    break;
                case 4:
                    cout << endl;
                    if (totalPrice == 0)
					{
                        cout << "No items are selected";
                    } else {
                        val = 2;
                    }
                    break;
                case 5:
                    cout << endl;
                    char ch;
                    cout << "Do you want to exit (y/n)? ";
                    cin >> ch;
                    if (ch == 'y' || ch == 'Y') {
                        val = 1;
                        cout << "You have exited";
                    } else if (ch == 'n' || ch == 'N') {
                        break;
                    }
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
            }
        } while (val == 0);

        if (val != 1) {
            cout << "\t\t\t\t------------------------YOUR BILL------------------------\t\t\n";
            cout << "\t\t\t\t---------------------------------------------------------\t\n";
            outFile<<"\n\n";
            outFile << "\t\t\t\t------------------YOUR BILL------------------------\t\t\n";
            outFile << "\t\t\t\t----------------------------------------------------\t\n";
            for (int i = 0; i < itemCount; i++) {
                cout << "\t\t\t\t " << itemNames[i] << " x " << itemQuantities[i] << " - Rs " << itemPrices[i] << endl;
                outFile<< "\t\t\t\t " << itemNames[i] << " x " << itemQuantities[i] << " - Rs " << itemPrices[i] << endl;
            }
            cout << "\n\t\t\t\t Total price is Rs " << totalPrice << endl;
            outFile<< "\n\t\t\t\t Total price is Rs " << totalPrice << endl;
            cout << "\t\t\t\t---------------------------------------------------------\t";
            outFile << "\t\t\t\t----------------------------------------------------\t\n";
            outFile << endl;
            outFile << "Total Price is RS " << totalPrice << endl;
            outFile << endl;
            outFile << endl;
            outFile.close();
            pay pp;
            pp.payup();
        }
    }
};

void tomainmenu()
{
	cout<<"\t\t ***YOU ARE IN THE MAIN MENU***\t\t ";
	menu mm;
	mm.getmaimenu();
}

int main() {
 	logininfo lg;
 	lg.getusermenu();
 	tomainmenu();
 	return 0;
 	}

    

