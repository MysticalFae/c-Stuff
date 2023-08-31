#include <iostream>

int main()
{
    int firstArray [3]={1,2,3};

    int secondArray [2][3] = {
        {1,2,3},
        {4,5,6}

    };
    int i;
   
   std::cout<<"For 1D array"<<"\n";
    for(i=0;i<sizeof(firstArray)/sizeof(firstArray[0]);i++) 
    //to get the size of an array, u have to do sizeof(array)/sizeof(array[0])..idk why
    {
        std::cout<<firstArray[i]<<"\n";
    }
    std::cout<<"For 2D array"<<"\n";
    int j,k;

    for(j=0;j<2;j++)
    {
        for(k=0;k<3;k++)
        {
            std::cout<<secondArray[j][k]<<" ";
        }
        std::cout<<"\n";
    }

}