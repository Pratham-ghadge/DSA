#include <bits/stdc++.h>
using namespace std;

void Pattern1(int n)
{
    cout << "First Pattern" << endl;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern2(int n)
{
    cout << "Second Pattern" << endl;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern3(int n)
{
    cout << "Third Pattern " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void Pattern4(int n)
{
    cout << "Fourth Pattern" << endl;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void Pattern5(int n)
{
    cout << "Fifth Pattern" << endl;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void APattern5(int n)
{
    cout << "Another Logic For The Pattern Fifth" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern6(int n)
{
    cout << "Sixth Pattern " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void Pattern7(int n)
{
    cout << "Seventh Pattern" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void Pattern8(int n)
{
    cout << "Eightth Pattern" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void Pattern9(int n)
{
    cout << "Nineth Pattern" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (n - i); j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void Pattern10(int n)
{
    cout << "Tenth Pattern" << endl;
    for (int i = 0; i < 2 * n; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern11(int n)
{
    cout << "Eleventh Pattren" << endl;
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            star = 0;
        }
        else
        {
            star = 1;
        }

        for (int j = 0; j < i; j++)
        {
            cout << star;
            star = 1 - star;
        }
        cout << endl;
    }
}

void Pattern12(int n)
{
    cout << "Tweleveth Pattren" << endl;
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // numbres
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j < space; j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space = space - 2;
    }
}

void Pattern13(int n)
{
    cout << "Thirteenth Pattren" << endl;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void Pattren14(int n)
{
    cout << "Fourteenth Pattren" << endl;
    string alphabate = "A";
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void Pattren15(int n)
{
    cout << "Fifteenth Pattren" << endl;
    for (int i = n; i >= 1; i--)
    {
        char ch = 'A';
        for (int j = i; j >= 1; j--)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void APattren15(int n)
{
    cout << "Advenced Fifteenth Pattren" << endl;
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + (n - i); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void Pattren16(int n)
{
    cout << "Sixteenth Pattren" << endl;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;

        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void Pattren17(int n)
{
    cout << "Seventeenth Pattren" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = i;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void Pattren18(int n){
    cout<<"Eighteen Pattren"<<endl;
    for(int i = 0; i< n; i++){
        for( char ch = 'A'+(n-i-1); ch < 'A'+ n; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void Pattren19(int n){
    cout<<"Nineteen Pattren"<<endl;
    //first half
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n-i; j++){
            cout<<"*";
        }
        for(int j = 0; j < 2*i; j++){
            cout<<" ";
        }
        for(int j = 0; j < n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //second half
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        for(int j = 1; j <=(n-i)*2 - 2 ; j++){
            cout<<" ";
        }
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void Pattren20(int n){
    cout<<"Twentyth Pattren"<<endl;
    int spaces = 2;
for(int i = 0; i < 2*n-1;i++){
   if(i< n){ for(int j = 0; j<i; j++){
        cout<<"*";
    }
    for(int j = 1; j <=(n-i)*2 - 2 ; j++){
        cout<<" ";
    }
    for(int j = 0; j<i; j++){
        cout<<"*";
    }
    cout<<endl;

}else{


for(int j = 0; j<i-2; j++){
    cout<<"*";
}

for(int j = 1; j <= spaces ; j++){
    cout<<" ";
}
for(int j = 0; j<i-2; j++){
    cout<<"*";
}
cout<<endl;
spaces +=2;
}
}

}

int main()
{
    int num;
    cout << "Enter the Number :";
    cin >> num;
    // Pattern1(num);
    // Pattern2(num);
    // Pattern3(num);
    // Pattern4(num);
    // Pattern5(num);
    // APattern5(num);
    // Pattern6(num);
    // Pattern7(num);
    // Pattern8(num);
    // Pattern9(num);
    // Pattern10(num);
    // Pattern11(num);
    // Pattern12(num);
    // Pattern13(num);
    // Pattren14(num);
    // Pattren15(num);
    // APattren15(num);
    Pattren16(num);
    Pattren17(num);
    Pattren18(num);
    Pattren19(num);
    Pattren20(num);
    return 0;
}