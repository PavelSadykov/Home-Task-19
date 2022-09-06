//
//  main.cpp
//  С++ ДЗ 19
//
//  Created by Павел on 04.09.2022.
//

#include <iostream>
#include <time.h>
#include <algorithm>
#include <stdlib.h>
#include <algorithm>

using namespace std;

//Задача 1.Наибольший общий делитель
int HI (int n1,int n2){
    if ( n2 > n1) {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }
    int H = 0;
    for (int i = 1; i <= n2; ++i) {
        if (n1 % i == 0 and n2 % i ==0)
        H = i;
    }
        return H;
    }

//Задача 2.Зеркальное число
int mirror_number(int m){
    int k = 0;
    while (m){
        k = 10 * k + m % 10;
        m /= 10;
    }
     return k;
    }

//Задача 3.Задаем длину массива .Создаем массив  из случайных чисел. Выбираем элемент массива  N и сортируем  массив после элемента N
int func(int arr[], int size, int n) {
    int N1 = size;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == n) {
            N1 = i;
            break;
        }
    }
if (N1 == size)
        return size;
    sort(&arr[N1 + 1], &arr[size]);
    return N1;
}

int array_1 (int arr [],int size) {
    for(int i=0; i<size; i++){
        arr[i] = rand () % (10+1-1)+1;
}
    return arr[size];
}
    
void show_arr(int arr[],  int size) {
    cout<<"[";
    for (int i=0; i<size;i++)
        cout << arr[i]<<" ";
    cout<<"]\n";
}
 

 
//Задача 4.Задаем длину массива. Вводим два числа А и В. Заполненяем массив случайными числами в диапазоне от А до В
int random_array(int arr1[], int length, int from, int to) {
srand(time(0));
    for (int i = 0; i < length; ++i) {
      arr1[i] = rand () % (to+1-from)+from;
}
    return arr1[length];
}
 
 
    int main(int argc, const char * argv[]) {
    int a, b;
        
    cout<<"Задача 1."<<endl;
    cout << "Введите 2 числа: ";
    cin >> a >> b;
    cout<<"Наибольший общий делитель = ";
    cout<< HI(a,b);
    cout  << endl;
    
    
        
    cout<<"\nЗадача 2."<<endl;
      int a1;
    cout<<"Введите число : ";
    cin >> a1;
    cout << mirror_number(a1) << endl;
    
       
        
    cout<<"\nЗадача 3."<<endl;
    int size = 0;
    cout << "Введите длину массива = ";
    cin >> size;
    int arr[size];
    array_1 (arr, size);
    show_arr(arr, size);
     
    int n = 0;
    cout << "\n";
    cout << "Введите число N : ";
    cin >> n;
        
    int N1 = func(arr, size, n);
    cout << "номер числа "<<n<<" в массиве = " << N1 << "\n";
    show_arr(arr, size);
   
        
        
    cout<<"\nЗадача 4."<<endl;
    int length=0;
    cout << "Введите длину массива = ";
    cin >> length;
    int arr1 [length];
    cout << "Введите 2 числа - начало и конец диапазона = ";
    cin>>a>>b;
    cout<<" Массив из рандомных чисел  в диапазоне от "<<a<<" до "<<b<<"\n";
    random_array (arr1,length, a, b);
    show_arr(arr1, length);
         
      
    return 0;
}
