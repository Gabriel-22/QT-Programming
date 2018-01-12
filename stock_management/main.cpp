#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

/*
code by Gabriel V. Andolphatto
selling and stocking products system
*/

int main()
{
    string name[50];
    float price[50];
    int quantity[50];

    char input;
    char answer;
    char add;
    int add_product;
    int add_unit;
    int order;
    int unit;
    char confirm;
    char sale;
    int i=0;
    int j=0;
    int total=0;

    do{
    cout<<"STOCK MANAGEMENT"<<endl;

    cout<<"\nRegister product in stock = 1";
    cout<<"\nCheck stock = 2";
    cout<<"\nSell products = 3";
    cout<<"\nExit = 4"<<endl;
    cout<<"\nInput: ";
    cin>>input;
    //select one of the options to enter switch case (option 4 ends the program)

    switch(input){

        case '1': //input 1: Register the products fields (name, price, quantity) in vectors
            do{
            cout<<"\Product "<<i+1;
            cout<<"\nEnter product name: ";
            cin>>name[i];
            cout<<"Enter product price: ";
            cin>>price[i];
            cout<<"Enter product quantity: ";
            cin>>quantity[i];
            cout<<"\nRegister more products? y/n: ";
            cin>>answer;
            i+=1;
            }while(answer!='n');
            total=i;
            break;

        case '2': //input 2: consult registered products in sotck and add more quantities of the same product
            cout<<"\nProducts in stock: "<<endl;
            for(j=0;j<total;j++){
                cout<<"\nProduct number "<<j+1<<endl;
                cout<<"\nName: "<<name[j];
                cout<<"\nPrice:"<<price[j];
                cout<<"\nQuantity: "<<quantity[j]<<endl;
            }
            cout<<"\nIncrease the quantity of a product registered in stock? y/n: ";
            cin>>add;
                if(add!='n'){
                    cout<<"\nType product number to increase its quantity in stock: ";
                    cin>>add_product;
                    if(add_product<=total){
                        cout<<"\nProduct number "<<add_product<<endl;
                        add_product-=1;
                        cout<<"\nName: "<<name[add_product];
                        cout<<"\nPrice:"<<price[add_product];
                        cout<<"\nQuantity: "<<quantity[add_product]<<endl;
                        cout<<"\nIncrease how much units of this product? :";
                        cin>>add_unit;
                        quantity[add_product]+=add_unit;
                        system("cls");
                        cout<<"\nAdded "<<add_unit<<" "<<name[add_product]<<" to the stock";
                        cout<<"\nTotal of "<<name[add_product]<<": "<<quantity[add_product]<<endl;
                    }
                    else{
                        cout<<"\nProduct not found"<<endl;
                    }
                }
            system("pause");
            break;

        case '3':// input 3: sell products, confirm if it's registered and decrement unit
            do{
            cout<<"\nInform product number (verify product number in stock records): ";
            cin>>order;
            if(order<=total){
                cout<<"\nProduct "<<order;
                order-=1;
                cout<<"\nName: "<<name[order];
                cout<<"\nPrice:"<<price[order];
                cout<<"\nQuantity: "<<quantity[order]<<endl;

                cout<<"\nHow much units you wish to sell ?: ";
                cin>>unit;
                    if(unit>quantity[order]){
                        cout<<"\nNot enough units in stock"<<endl;
                    }
                    else{
                        cout<<"\nSell "<<unit<<" units of "<<name[order];
                        cout<<" for "<<price[order]*unit<<" ? y/n: "<<endl;
                        cin>>confirm;
                            if(confirm!='n'){
                                quantity[order]-=unit;
                            }
                    }
                system("cls");
                cout<<"\nIn stock: "<<quantity[order]<<" units of "<<name[order]<<endl;
            }
            else{
                        cout<<"\nProduct not found"<<endl;
                    }
            cout<<"\nMake another sale? y/n: ";
            cin>>sale;
            }while(sale!='n');

            system("pause");
            break;

        default:
            cout<<"\nInvalid input"<<endl;
            break;

    }
    system("cls");
    }while(input!='4');
    cout<<"Exiting stock management...";

    return 0;
}
