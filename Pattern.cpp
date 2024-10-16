# include <iostream>
using namespace std;
int main()
{
    int rows,iter,col;
    cout<<"Enter value of rows: "<<endl;
    cin>>rows;
    cout<<"Enter value of coloumns: "<<endl;
    cin>>col;
    cout<<"Enter iteration value: "<<endl;
    cin>>iter;
    for (rows=0;rows<iter;rows++)
    {
        for(col=0;col<iter;col++)
        {
        cout<<"*";    
        }
        cout<<endl;
    }
    
}
