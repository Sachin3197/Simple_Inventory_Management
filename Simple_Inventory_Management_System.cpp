#include<iosteam>
#include<string>
#include<vector>
 using namespace std;
  //Stucture to represent an item in the inventory
  struct InventoryItem
  {

      string name;
      int quantity;

  };
//function to add an item to the envetory
void addItem(vector<InventoryItem>& inventory )
{
    InventoryItem item;
    cout<<"Enter item Name";
    cin>>item.name;
    cout<<item.quantity;
    inventory.push_back(item);
    cout<<"Item added to inventory"<<endl;

}
//function to reamove an item from the Inventory
void reamoveItem(vector<InventoryItem>& invetory )
{
    if(invetory.empty())
    {
        cout<<"Inventory is empty.cannot reamove any item."<<endl;
        return;
    }
    cout<<"Enter the index of the item toremove:";
    int index;
    cin>> index;
    if(index<0|| index>=inventory.size())
    {
        cout<<"Invalid index. Plase enter a valid index."endl;
        return;

    }
    invetory.erase(inventory.begin()+index);
    cout<<"Item removed from inventory."<<endl;

}
void displayInvetory(const vector<InventoryItem>&invetory)
{

    if(invetory.empty())
    {
        cout<<"Invetory is empty."<<endl;
        return;
    }
    cout<<"Current invetory:"<<endl;
    for(size_t i=0;i<invetory.size();++i)
    {
        cout<<i<<". "<<invetory[i].name<<" _ "<<inventory[i].quantity<<"units"<<endl;

    }
}
int main()
{

    vector<InventoryItem>inventory;
    int choise;
    cout<<"Simple Inventory Management System"<<endl;
    cout<<"***********************************"<<endl;
    while(true)
          {

            cout<<"Options:"<<endl;
            cout<<"1. Add Item"<<endl;
            cout<<"2. Remove Item"<<endl;
            cout<<"3. Display Inventory"<<endl;
            cout<<"4. Exit"<<endl;
            cout<<"Enter your choise:";
            cin>>choise;
            switch(choise)
            {
            case 1:
                addItem(inventory);
                break;
            case 2:
                removeItem(inventory);
                break;
            case 3:
                displayInvetory(inventory);
                break;
            case 4:
                cout<<"Existing the program."<<endl;
                return 0;
            default:
                cout<<"Invalid choise.Please enter valid option"<<endl;
            }
          }
              return 0;

}
