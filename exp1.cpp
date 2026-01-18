#include<iostream>
using namespace std;
int main(){
    int ch;
    int a[2][2],b[2][2];
    
    cout<<"enter the elements of 1 array:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements of 2 array:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    do{
cout<<"\nmenu\n";
cout<<"1.display matrix:\n";
cout<<"2.addition:\n";
cout<<"3.substraction:\n";
cout<<"4.exit:\n";
cout<<"\nenter your choice:\n\n";
cin>>ch;
 switch(ch){
    case 1:
    cout<<"\n 1 matrix is:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<" ";
                }
    cout<<endl;
            }
        cout<<"\n 2 matrix is:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<b[i][j]<<" ";
                }
    cout<<endl;
            }    
    break;
    
    case 2:
     cout<<"\naddition of the two matrices are:\n"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j] + b[i][j]<<" ";
        }
        cout<<endl;
    }
   
    break;

    case 3:
    cout<<"\nsubstraction of the two matrices are:\n"<<endl;
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j] - b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    break;
    
    case 4:
    cout<<"\nexiting.............\n";
    break;

    default:
    cout<<"\n invalid option selected\n";
}
    } while(ch != 4);
return 0;
}
