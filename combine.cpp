/**************************************************
HW#: HW2-2 Merge Sort's Combine
Your name: Heriberto Bernal
Compiler: gcc compiler
File type: Combine program
**************************************************/

using namespace std;
#include <iostream>
#include <vector>

//Prototypes
void combine(vector<int> L1, vector<int> L2, vector<int>& L3); 

//Purpose of the program: This program will combine two vectors into one. The elements will be sort from small to big.
//Algorithm: Ask the user for the size of both vectors. Then the program will ask the user to enter elements for each vector. After that, combine function will be called to combine vectors. It will check each element of vector L1 with vector L2, and the small number will be added to the vector L3. When no more comparsion can be made, the rest of the elements of the vector will be added to vector L3.   
int main()
{
  vector<int> L1, L2, L3; //Vector L1 and L2 will be where the user will enter elements. L3 is for the combination of L1 and L2;
  int sizeVector; //size of vectors L1 and L2
  int eleme; //element that will be added to vector L1 or L2

  cout << "How many elements do you want in each Vector? ";
  cin >> sizeVector;

  for(int i=0; i < sizeVector; i++) //Fill Vector L1
    {
      cout << "Enter an element for the first vector: ";
      cin >> eleme; 
      L1.push_back(eleme);
    }
  for(int e=0; e < sizeVector; e++) //Fill vector L2
    {
      cout << "Enter an element for the second vector: ";
      cin >> eleme;
      L2.push_back(eleme);
    }
  combine(L1, L2, L3); //Call combine function to combine vectors L1 and L2 into L2

  //Print out the result of L3
  cout << "The result is: ";
  for(int a=0; a < L3.size(); a++)
    {
      cout << L3[a]; 
    }
  cout << endl;
}

//This function will combine vectors L1 and L2 into L3. It will assign an index for vectors L1 and L2, and those indexs will be used to check which element is going to be add to vector L3.
void combine(vector<int> L1, vector<int> L2, vector<int>& L3)
{
  int i1 = 0; //index for vector L1
  int i2 =0; //index for vector L2
  int elem; //element that will be added to L3

  //while vector L1 and L2 have an element, repeat the loop. If not, end the while loop
  while((i1 != L1.size()) && (i2 != L2.size()))
    {
  //If L1 element is small than L2 element, add L1 element to vector L3
  if(L1[i1] < L2[i2])
    {
      elem = L1[i1];
      L3.push_back(elem);
      i1 = i1+1;
    }
  //If L2 element is small than L1 element, add L2 element to vector L3
  else
    {
      elem = L2[i2];
      L3.push_back(elem);
      i2 = i2+1;
    }
  cout << "Comparison" << endl;
    }

  //If vector L1 or L2 still have elements, add them to vector L3
  while(i1 != L1.size())
    {
      elem = L1[i1];
      L3.push_back(elem);
      i1 = i1+1;
    }
  while(i2 != L2.size())
    {
      elem = L2[i2];
      L3.push_back(elem);
      i2 = i2+1;
    }
}
