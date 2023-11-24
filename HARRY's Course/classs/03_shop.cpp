#include<iostream>
using namespace std;
class Shop{
    int counter;
    public:
        int itemId[100];
        int itemPrice[100];
        void initCounter(void){ counter=0;}
        void setItemId(void);
        void displayId(void);


};
void Shop ::setItemId(void){
    cout<<"Enter the your item number "<<(counter+1)<<" Id "<<endl;
    cin>>itemId[counter];
    cout<<"Enter the your item number "<<(counter+1)<<" price"<<endl;
    cin>>itemPrice[counter];
    counter++;
} 
void Shop ::displayId(void){
    for(int i=0;i<counter;i++){
        cout<<"The price of your item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main(){
    Shop dukan;
    dukan.initCounter();
    dukan.setItemId();
    dukan.setItemId();
    dukan.setItemId();
    dukan.displayId();
    
    return 0;
}