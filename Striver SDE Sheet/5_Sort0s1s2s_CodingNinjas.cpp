#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int c0 = 0, c1 = 0, c2 = 0;
   for(int i = 0 ; i < n; i++){
      if(arr[i] == 0) c0++;
      else if(arr[i] == 1) c1++;
      else c2++;
   }

   for(int i = 0 ; i < n; i++){
      if(c0 > 0)
      {
         arr[i] = 0;
         c0--;
      } else if (c0 <= 0 and c1 > 0) {
         arr[i] = 1;
         c1--;
      } else
         arr[i] = 2;
   }
}

// Dutch National Flag Algo
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int low = 0 , high = n - 1;
   int mid = 0;
   while(mid <= high)
   {
      if(arr[mid] == 0)
      {
         swap(arr[low], arr[mid]);
         low++;
         mid++;
      }
      else if(arr[mid] == 1)
         mid++;
      else if(arr[mid] == 2)
      {
         swap(arr[mid], arr[high]);
         high--;
      }
   }
}