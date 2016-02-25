#include <iostream>
#include <string.h>

using namespace std;

int main()
{
//    char data[]={"hello world"};
//    char value;
//    int limit=100;
//    int userget;
//    cout << "\nPlease Secified the limit of store array:";
//    cin >> userget;
//    char store[userget];
//
//
//    ///main kam yeha se start hai.....
//
//    for(int i=0;i<strlen(data); i++)
//        {
//            value = data[i];
//            cout << "\n\t\t\t\tvalue =" <<value;
//
////            for(int k=0; k>strlen(data); k++)
////           {
//                int m=0;
//               while(value==store[m])
//                {
//
//                for(int i=0; i>strlen(store);i++){
//                if(value!=store[m]){
//                    store[i] = value;
//                    cout << "\nIn if condition";
//                   /// cout << "\nIn While Condition";
//                }   ///if body offf.......
//                else
//                    {
//                        cout << "\nIn else Body!!!";
//                    }
//                }///for loop body off....
//                m++;
//                }///while body off
//
//
//
//
//
////                if(value!=store[k]){
////
////                cout << "\nRecord is not found";
////                }
////                else
////                    {
////            data[k]=value;
////            }
//           // }
//
//
//
//
//
//
//
//           // cout << "\nvalue = " <<value;
//           // cout << "\ni = "<<i<<" ="<<strlen(data);
//    for(int j=0; j>i; j++){
//
//    }
//    }
//    cout << "\nstore values is\n\n\n";
//   for(int i=0; i<strlen(store); i++)
//                {
//                    cout << "\n a= " <<store[i];
//                }
//
//        }
//
//
//
//
//
//
//
//
//
//
////    cout << "Hello world!" << endl;
//  //  return 0;

//
int limit;
char data[100];
cout << "\nPlease ENter the limit of data array :";
cin >> limit;
char ch;
int count=0;
    for(int i=0; i<limit;i++)
        {
            cin >> data[i];
            cout << data[i];
        }

    ///doing for counting
    char countArr[limit];
    for(int i=0;i<strlen(data); i++)
        {
            ch = data[i];
            cout <<"\n\n";
           // for(int i=0; i<limit; i++){
            if(countArr[i]!=ch)
                {
//                    cout << "\nin if condition";
                countArr[i]=ch;
             //   cout << "\nch = "<<ch <<" and countArr[" <<i <<"] = "<<countArr[i];
               //   break;

        }
        else
            {
                for(int i=0; i<limit; i++){
                    if(countArr[i]==ch)
                        {
                            for(int j=limit; j>0;j--)
                                {
                                    cout << "countArr ["<<j<< "] = "<<countArr[j];
                                }
                        }


//  if(countArr[i]=value)
//                    {
//                        cout << "\na="countArr[i];
//                    }
//                else{
//                ///cout << "\nIn else Condition";
                count++;
            }
            }


    }
    ///for checking weather countArr[i] is being save or not;
    for(int i=0; i<limit; i++)
        {
            cout << "\n\t\t\t a="<<countArr[i];
        }





}
