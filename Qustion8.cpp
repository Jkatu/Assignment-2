# include<iostream>
using namespace std;
int main() {
    int cost1,cost2 , cost3,discount1,discount2;
    cout << "Enter the total cost before discount";
    cin >> cost1;
    if(cost1>=50000&&cost1<=70000 ){
        discount1=(0.2)*cost1;
        cout<<"your discount will be:"<<discount1<<endl;
        cost2 = cost1-discount1;
        cout<<"after discount your new price is :"<<cost2<<endl;
    }
    else if(cost1>=70000){
        discount2=(0.3)*cost1;
        cout<<"your discount will be:"<<discount2<<endl;
        cost3 = cost1-discount2;
        cout<<"after discount your new price is :"<<cost3<<endl;
    
    } else{
        cout<<"sorry no discount for you"<<endl;
        }

    

    }
    