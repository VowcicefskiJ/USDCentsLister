#include <iostream>
 
 using namespace std;
 
// This doesn't use the modulo operator
int main() {
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};
    
    int change_amount{};
    
    cout<<"Enter an amount in cents:";
    cin>>change_amount;
    
    int balance{}, dollars{}, quarters{}, dimes{}, nickels{};
    
    dollars=change_amount/dollar_value;
    balance=change_amount-(dollars*dollar_value);
    
    quarters=balance/quarter_value;
    balance=quarters*quarter_value;
    
    dimes=balance/dime_value;
    balance=dimes*dime_value;
    
    nickels=balance/nickel_value;
    balance=nickels*nickel_value;
    
    pennies=balance;
    // When dividing say 67 by say quarters you use the amount of quarters that is the closest to your solution number
    
    cout<<"-------------------------"<<endl;

//    cout<<"Solution using the modulo operator"<<endl;
//    cout<<"--------------------------"<<endl;
//    
//    balance= dollars= quarters= dimes= nickels=pennies=0; //reset everything to zero
//    
//    dollars=change_amount/dollar_value;
//    balance=change_amount%dollar_value;
//    
//    quarters=balance/quarter_value;
//    balance%=quarter_value;
//    
//    nickels=balance/nickel_value;
//    balance%=nickel_value;
//    
//    pennies=balance;
//    
//    cout<<"\nYou can provide this change as follows:"<<endl;
//    cout<<"dollars:"<<dollars<<endl;
//    cout<<"quaters:"<<quarters<<endl;
//    cout<<"dimes:"<<dimes<<endl;
//    cout<<"nickles:"<<nickles<<endl;
//    
//    cout<<endl;
    return 0;
}