#include <iostream>

using namespace std;

int linearSearch(int arr[],int key,int length)
{
    for(int iter=0;iter<length;iter++)
    {
        if(arr[iter]==key)
        {
           return 1;
        }
       
    }
    return 0;
}

int main()
{
    int arr[] = {1,2,3,7,43,2,4,64};
    int key=3;
    int length = sizeof(arr)/sizeof(arr[0]);
    if(linearSearch(arr,key,length))
    {
        std::cout << "Key Found" << std::endl;
    }
    else
    {
        std::cout << "Key Not Found" << std::endl;
    }  
}



