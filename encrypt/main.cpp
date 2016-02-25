#include <iostream>
#include <cstring>
using namespace std;
int main(){
   char c[1000],ch;
   int i,count=0;
   cout << "Enter a string: ";
   cin.getline(c, 1000);
   cout << "Enter a character to find frequency: ";
   cin >> ch;
   for(i=0;c[i]!='\0';++i)
   {
       if(ch==c[i])
           ++count;
   }
   cout << "Frequency of " << ch <<  " = " << count;

    int character[1000];
        for(int i=0; i<=6; i++)
            {
                character[i]= (int)c[i];
                cout << "\ncharacter[" <<i <<"] = "<<character[i];

            }
            cout << "\nAfter Adding 2 steps!!\n\n";

        for(int i=0; i<=6; i++)
            {
                character[i]= 2+(int)c[i];
                cout << "\ncharacter[" <<i <<"] = "<<character[i];
                }
cout << "\nAfter decryption!\n\n";
        for(int i=0; i<=6; i++)
            {
                c[i]= (char)character[i];
                cout << "\nc[" <<i <<"] = "<<c[i];
            }




   //char a='c';
   //cout<<"\nAsci code of "<<a<<" is "<<(int) a;
//for(int i= 0; i <10; i++){
  //  cout << c[i] << " "<< endl;
   //}
   return 0;
}






///shery code
//
//
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int main()
//{
//char arrayname [] = {"hello world"};
//
//    char value;
//    int num;
//    char store[12];
//    for(int j = 0; j <strlen(arrayname); j++){
//        num = 0;
//        value = arrayname[j];
//
//
//
//
//
//    for(int i=0; i<strlen(store); i++)
//        {
//        if(store[i] == value){
//                cout << "\n\a\aAlready saved in store array";
//        }
//        else
//            {
//                 cout <<"\t\t\t\t\t\t"<< value <<" it has been saved\n";
//        store[i] = value;
//
//            }
//        }
//
//
//
//
//        for(int i = 0; i <= strlen(arrayname); i++){
//        if(value == arrayname[i]){
//        num++;
//       // cout << "\t\t\nstore[" <<i<<"] =" <<store[i] <<"\n";
//        }
//        }
//
//        cout << value << " Is " << num << " time Repeated ."<<endl;
//        }
//        for(int i=0; i<strlen(store); i++)
//            {
//                cout << "\n\t\t "<<store[i];
//            }
//
//    return 0;
//}
//
