#include <iostream>
using namespace std;
int binarySearch (int arr[], int left, int right, int key)
{
  if (right >= left)
    {
      int mid = (left + right) / 2;
      if (arr[mid] == key)
	      {
	        return 1;
	      }
      else if (arr[mid] > key)
	      {
	        return binarySearch (arr, left, mid - 1, key);
        }
     else
	      {
	       return binarySearch (arr, mid + 1, right, key);
	      }
   }
  return 0;
}
int main ()
{
  int arr[] = {1,3,6,9,13,23,25,34,38,39,40};
  int right = sizeof(arr)/sizeof(arr[0]);
  int left  = 0;
  int key = 41;
  if(binarySearch(arr,left,right,key))
  {
      std::cout << "Key Found" << std::endl;
  }
  else
  {
      std::cout << "Key Not Found" << std::endl;
  }
  return 0;
}

