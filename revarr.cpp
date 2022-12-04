#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
//create namespace
/*Branch name
*
*
*/
//prototype

int nuindex();

void getindex(int a[],int &b);
//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{



    //Declare number of index of array
int n;

//Get number of index of array
n = nuindex();


//Seperator
cout<<endl<<"------------------------------"<<endl<<endl;

//Declarw Array
int a[n];

//Get array value
getindex(a , n);

//Seperator
cout<<endl<<"------------------------------"<<endl<<endl;
getch();

}
//function variable
//--------------------------
//functions

//Function get array index number
int nuindex()
{
    int a;
    cout<<"Get number of index of array = ";
    cin>>a;
    return a;
}

//Functon get value of index array
void getindex(int a[],int &b)
{
    for(int i=0; i<b; ++i)
    {
        cout<<"["<<i<<"] = ";
        cin>>a[i];
        cout<<endl;
    }
}

