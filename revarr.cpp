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

void revarr(int a[],int temp,int b);

void showarr(int a[], int b);
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

//Declare variable for rev
int temp;

//For reverse array
revarr(a,temp,n);

//show reverse array
showarr(a , n);

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

//Function for reverse value of array

void revarr(int a[],int temp,int b)
{
if (b%2 != 0)
{
    int i = 0;

for (int j=b-1; j>=0; --j)
  {  
if( i<b && i != j)
{
          temp = a[j];
          a[j] = a[i];
          a[i] = temp;
   
       ++i;
}

else
{
a[j] = a[i];
break;
}
  }
}

if (b%2 == 0)
{
    int i = 0;

for (int j=b-1; j>=0; --j)
{
    
if( i<b && i != j-1 )
{
          temp = a[j];
          a[j] = a[i];
          a[i] = temp;
          ++i;
} 


else
{

         temp = a[j];
          a[j] = a[i];
          a[i] = temp;
           
break;
}
}
}
}

//Function for show reverse array

void showarr(int a[], int b)

{
    for(int i = 0; i<b; ++i)
    {
        cout<<"["<<i<<"] = "<<a[i]<<endl;
    }
}
    



