#include <iostream> 
using namespace std; 
int main() {
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "enter numbers:" << endl;
        cin >> arr[i];
        cout << endl ;
       
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
   
}
