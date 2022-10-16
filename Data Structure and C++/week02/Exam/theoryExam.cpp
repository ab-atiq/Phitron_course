#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
    Restaurant()
    {
        total_tax = 0;
    }
    int update_tax(int tax)
    {
        total_tax += tax;
        cout << "Update tax successfully. Present total tax of restaurant: " << total_tax << endl;
        return total_tax;
    }
};

int main()
{
    Restaurant *my_restaurant = new Restaurant;

    int number_of_item;
    cout << "Please input how much food item present: ";
    cin >> number_of_item;

    // input restaurant bill
    for (int i = 1; i <= number_of_item; i++)
    {
        cout << "Enter Food item " << i << " code, name, price: ";
        cin >> my_restaurant->food_item_codes[i - 1];
        getchar();
        // cin >> my_restaurant->food_item_names[i - 1];
        getline(cin, my_restaurant->food_item_names[i - 1]);
        cin >> my_restaurant->food_item_prices[i - 1];
    }

    // show restaurant bill
    cout << endl
         << "                        Make Bill" << endl
         << "___________________________________________________________" << endl;
    cout << "Item code:\t\tItem Name:\t\tItem price:" << endl;
    for (int i = 1; i <= number_of_item; i++)
    {
        cout << my_restaurant->food_item_codes[i - 1] << "\t\t\t" << my_restaurant->food_item_names[i - 1] << "\t\t" << my_restaurant->food_item_prices[i - 1] << endl;
    }

    // customer bill info input
    int table_no, num_of_bill_item, codes[12], quantity[12];
    cout << endl
         << "Enter table no: ";
    cin >> table_no;
    cout << "Enter number of item: ";
    cin >> num_of_bill_item;
    for (int i = 0; i < num_of_bill_item; i++)
    {
        cout << "Enter item " << i + 1 << " code: ";
        cin >> codes[i];
        cout << "Enter item " << i + 1 << " quantity: ";
        cin >> quantity[i];
    }

    // bill summary for customer
    cout << endl
         << "                                    Bill summary " << endl
         << "___________________________________________________________" << endl;
    cout << "Table no: " << table_no << endl;
    cout << "Item code:\tItem name:\t\tItem price:\tItem quantity:\tItem total price:" << endl;
    float total_price_without_tax = 0, total_price_with_tax;
    int found = 0;
    for (int j = 0; j < num_of_bill_item; j++)
    {
        for (int i = 0; i < number_of_item; i++)
        {
            if (my_restaurant->food_item_codes[i] == codes[j])
            {
                found += 1;
                total_price_without_tax += my_restaurant->food_item_prices[i] * quantity[j];
                cout << my_restaurant->food_item_codes[i] << "\t\t" << my_restaurant->food_item_names[i] << "\t\t" << my_restaurant->food_item_prices[i] << "\t\t" << quantity[j] << "\t\t" << my_restaurant->food_item_prices[i] * quantity[j] << endl;
            }
        }
    }
    if (found != num_of_bill_item)
    {

        cout << "Food code doesn't match!!!" << endl
             << "Enter again:" << endl;
    }
    float tax = total_price_without_tax * 5 / 100;
    total_price_with_tax = total_price_without_tax + tax;

    cout << "__________________________________________________________________________________________" << endl;
    cout << "Tax 5 percent of total amount:\t\t\t\t" << tax << endl;
    cout << "__________________________________________________________________________________________" << endl;
    cout << "Total amount with tax:\t\t\t\t\t" << total_price_with_tax << endl;
    my_restaurant->update_tax(tax);

    return 0;
}
