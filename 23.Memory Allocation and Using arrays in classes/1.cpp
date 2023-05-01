#include <iostream>
using namespace std;

class shop
{
    int itemId[50];
    int itemPrice[50];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void displayPrice(void);
    void setPrice(void);
    void total(void);
};

void shop::setPrice(void)
{
    cout << "Enter ID of Your Item no." << counter + 1 << ":  ";
    cin >> itemId[counter];
    cout << "Enter Price of Your Item:  " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
void shop::total(void)
{
    int summ = 0;
    for (int i = 0; i < counter; i++)
    {
        summ = summ + itemPrice[i];
    }
    cout << "Total:  " << summ;
}
int main()
{
    int n;
    cout << "How many Items: ";
    cin >> n;
    shop dukaan;
    dukaan.initCounter();
    for (int j = 1; j <= n; j++){
        dukaan.setPrice();
    }
    dukaan.displayPrice();
    dukaan.total();
    return 0; 
}