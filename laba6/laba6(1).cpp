#include <iostream>
#include <string>
#include <list>
int main(){
    int a,k,count;
    std::cout<<"Введіть Натуральне число ";
    std::cin>>a;
 int size = 0;
 int number=a;
    if (number == 0) {
        size = 1; 
    } else {
        while (number > 0) {
            number /= 10;
            size++;
        }
    }
    std::list<int> myList;
       for(int i=0;i<size;i++){ 
       k=a%10;
       myList.push_front(k);
       a=a/10;
       }
       std::list<int>::iterator it = myList.begin();
       
       std::advance(it, size);
       int firstElement = *it; 
       std::advance(it,1);
       int lastElement = *it; 
       *it = firstElement; 
       std::advance(it, size-1);
    
       *it =lastElement; 
     
    
       

   
     for (int value : myList) {
        std::cout << value << " ";
      
   }
  
}