#include <bits/stdc++.h>
using namespace std;

// recursoin print n times string
void print(int i, int n, string name)
{
    if (i == n)
    {
        return;
    }
    cout << name << endl;
    print(i + 1, n, name);
}

// print 1 to n but using backtracking

void Backtracking(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    Backtracking(i - 1, n);
    cout << i << endl;
}

// print n to 1 but using backracking

void backtrackrevese(int i, int n)
{
    if (i > n)
    {
        return;
    }
    backtrackrevese(i + 1, n);
    cout << i << endl;
}

// sum of n numbers parameterised way

void Sumofn(int n, int sum)
{
    if (n < 1)
    {
        cout << sum << endl;
        return;
    }

    Sumofn(n - 1, n + sum);
}

// sum of n numbers functional way

int sumofnf(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sumofnf(n - 1);
}

// factorial of n number
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

// reverse of array using recursion

void reversearry(int i, int n, int arr[])
{
    if (i >= n)
    {
        return;
    }
    swap(arr[i], arr[n]);
    reversearry(i + 1, n - 1, arr);
}

bool palindrom(int i,string &s)
{
    
        if (i >= s.size() / 2)
        {
            return true;
        }

        if (s[i] != s[s.size() - i - 1])
        {
            return false;
        }
     palindrom(i+1,s);
}

int main()
{
    // print(0, 5, "Pratham");
    // backtrackrevese(1,5);

    // int n;
    //  cout<<"Enter the Number:";
    //  cin>>n;
    //  Backtracking(n,n);

    // Sumofn(5,0);

    // int sum = sumofnf(5);
    // cout<<sum<<endl;

    // int factorial = fact(5);
    // cout<<factorial<<endl;

    // int arr[]={1,2,3,4,5,6,7,8,9,10};
    // int size = sizeof(arr)/sizeof(arr[0]); // this is used for the calculating the length of array
    // for(int i =0 ; i< size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // reversearry(0,size-1,arr);

    // for(int i =0 ; i< size;i++){
    //     cout<<arr[i]<<" ";
    // }


    cout<<"Enter the String:";
    string s ;
    cin>>s;
   bool ans = palindrom(0,s);
   if(ans){
    cout<<"String" <<s<<" is a palindrom"<<endl;
   }else{
    cout<<"Not a palindrom"<<endl;
   }
    return 0;
}
