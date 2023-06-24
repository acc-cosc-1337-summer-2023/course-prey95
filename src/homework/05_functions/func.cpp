//add include statements
#include "func.h"

//add function code here
void show_menu(){

    cout<<"\n"<<"1 - MAX VALUE" << "\n";
    cout<<"2 - GET SQUARE" << "\n";
    cout<<"3 - EXIT"<< "\n";
    cout<<"Please select one of the options: ";
}

void UI(){

    int choice = 0;
    do{
        show_menu();
        cin>>choice;
        run_menu(choice);

    }while(choice!=3);
}

void run_menu(int choice){

    vector<int> TestMaxV = {5, 7, -1, 99, -100, 10};
	vector<int> TestSquareV = {6, 1, 8, 9, 4};
    vector<int> StoreSquareV;


    switch(choice)
    {
        case 1:
	        int max;
	        max = get_vector_max_value(TestMaxV);
	        cout<<"The max value is: "<<max<<"\n";
            break;
        case 2:
            StoreSquareV = squareVec(TestSquareV);
	        for (std::vector<int>::size_type i = 0; i < TestSquareV.size(); i++)
            {
                 cout << StoreSquareV[i] << " ";
            }
            break;
        case 3:
            break;
    }      
}

int get_vector_max_value(vector<int> n){
    
    int comp = n[1];
    for(std::vector<int>::size_type i = 0; i<n.size(); i++){
        if(comp < n[i+1]){
            comp = n[i+1];
        }
    }
    return comp;
}

vector<int> squareVec(vector<int> x){
    vector<int> squareV;

    for(std::vector<int>::size_type i = 0; i < x.size(); i++){
        squareV.push_back(x[i] * x[i]); 
    }

    return squareV;
}