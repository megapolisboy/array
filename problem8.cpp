#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter aray number: ";
    cin >> n;
    double *a = new double(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    // пошук мінімального
    double min = a[0];
    int min_index = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < min){
            min = a[i];
            min_index = i;
        }
    }
    cout << min_index << endl;
    // сума між першим і другим від'ємними
    int start_index = 0;
    while(a[start_index] > 0){
        start_index++;
    }
    int end_index = start_index+1;
    while(a[end_index] > 0){
        end_index++;
    }
    double sum = 0;
    for (int i = start_index+1; i < end_index; i++){
        sum += a[i];
    }
    cout << sum << endl;
    // перетворення масиву
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if ((a[j] > 1 || a[j] < -1) && (a[j+1] < 1 && a[j+1] > -1)){
                double reserved = a[j+1];
                a[j+1] = a[j];
                a[j] = reserved;
            }
        }
    }
    // виводимо масив
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}