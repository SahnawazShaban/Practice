#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    /*Triangle count*/
    // int n;
    // cout << "Enter your number : " << endl;
    // cin >> n;
    // int i=1,count=1;

    // while (i<=n)
    // {
    //     int j=1;
    //     while (j<=i)
    //     {
    //         cout << count << " ";
    //         count += 1;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // int n;
    // cout << "Enter your number : " << endl;
    // cin >> n;
    // int i = 1;

    // while (i<=n)
    // {
    //     int j=1;
    //     while (j<=n)
    //     {
    //         cout << n-i+1;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i +=1;

    // }

    /*triangle increment*/

    // int n;
    // cout << "Enter your number : " << endl;
    // cin >> n;
    // int row = 1;

    // while (row<=n)
    // {
    //     int col=1;
    //     int value = row;
    //     while (col<=row)
    //     {
    //         cout << value;
    //         value += 1;
    //         col += 1;
    //     }
    //     cout << endl;
    //     row +=1;
    // }

    // int n;
    // cout << "Enter your number : " << endl;
    // cin >> n;
    // int row = 1;

    // while (row<=n)
    // {
    //     int col=1;
    //     while (col<=row)
    //     {
    //         cout << row+col-1;
    //         col += 1;
    //     }
    //     cout << endl;
    //     row +=1;
    // }

    /*Square with alphabet .*/

    // int n;
    // cin >> n;

    // int row=1;
    // while (row<=n)
    // {
    //     int col = 1;
    //     char ch = 'A'+row-1;
    //     while (col<=n)
    //     {
    //         cout << ch;
    //         col +=1;
    //     }
    //     cout << endl;
    //     row +=1;

    // }

    // int n;
    // cin >> n;

    // int row=1;
    // while (row<=n)
    // {
    //     int col = 1;
    //     while (col<=n)
    //     {
    //         char ch = 'A'+col-1;
    //         cout << ch;
    //         col +=1;
    //     }
    //     cout << endl;
    //     row +=1;

    // }

    /*Alphabet increment*/

    // int n;
    // cin >> n;

    // int row=1;

    // while (row<=n)
    // {
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         char ch = 'A' + row + col - 2;
    //         cout << ch;
    //         ch += 1;
    //         col +=1;
    //     }
    //     cout << endl;
    //     row +=1;
    // }

    // int n;
    // cin >> n;

    // int row=1;

    // while (row<=n)
    // {
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         char ch = 'A' + row - 1;
    //         cout << ch;
    //         ch += 1;
    //         col +=1;
    //     }
    //     cout << endl;
    //     row +=1;
    // }

    /*alphabet increment*/

    // int n;
    // cin >> n;

    // int row=1;
    // char ch = 'A';

    // while (row<=n)
    // {
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         cout << ch;
    //         ch += 1;
    //         col +=1;
    //     }
    //     cout << endl;
    //     row +=1;
    // }

    // int n;
    // cin >> n;

    // int row=1;

    // while (row<=n)
    // {
    //     int col=1;
    //     while (col<=row)
    //     {
    //         char ch = 'A' + row + col -2;
    //         cout << ch;
    //         ch +=1;
    //         col+=1;

    //     }
    //     cout << endl;
    //     row += 1;
    // }

    // int n;
    // cin >> n;

    // int row=1;

    // while (row<=n)
    // {
    //     int col=1;
    //     char ch = 'A' + n - row;
    //     while (col<=row)
    //     {
    //         cout << ch;
    //         ch +=1;
    //         col+=1;

    //     }
    //     cout << endl;
    //     row += 1;
    // }

    /*Reverse triangle*/

    // int n;
    // cin >> n;

    // int row=1;

    // while (row<=n)
    // {
    //     //space print kario
    //     int space = n-row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space -= 1;
    //     }

    //     //star print kario
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         cout << "*";
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    /*reverse triangle*/

    // int n;
    // cin>>n;

    // int row=n;

    // while (row<=n)
    // {
    //     int col=1;
    //     while (col<=row)
    //     {
    //         cout<< "*";
    //         col+=1;
    //     }
    //     cout<<endl;
    //     row-=1;
    // }

    /*Reverse triangle*/

    // int n;
    // cin >> n;

    // int row=1;

    // while (row<=n)
    // {
    //     int col = 1;
    //     while (col<=n-row+1)
    //     {
    //         cout << "*";
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    // int n;
    // cin >> n;

    // int row = 1;

    // while (row <= n)
    // {
    //     int space = 1;
    //     while (space <= row - 1)
    //     {
    //         cout << " ";
    //         space += 1;
    //     }

    //     int col = 1;
    //     while (col <= n - row + 1)
    //     {
    //         cout << "*";
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    // int n;
    // cin >> n;

    // int row = 1;

    // while (row <= n)
    // {
    //     int space = 1;
    //     while (space <= row - 1)
    //     {
    //         cout << " ";
    //         space += 1;
    //     }

    //     int col = 1;
    //     while (col <= n - row + 1)
    //     {
    //         cout << row;
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    // int n;
    // cin>>n;

    // int row=1;

    // while (row<=n)
    // {
    //     int space=1;
    //     while (space<=n-row)
    //     {
    //         cout<<" ";
    //         space +=1;
    //     }
    //     int col=1;
    //     while (col<=row)
    //     {
    //         cout<<"*";
    //         col+=1;
    //     }
    //     cout<<endl;
    //     row+=1;
    // }

    // int n;
    // cin>>n;

    // int row=1;

    // while (row<=n)
    // {
    //     //space print kario
    //     int space = 1;
    //     while (space<=n-row)
    //     {
    //         cout << " ";
    //         space += 1;
    //     }

    //     //star print kario
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         cout << row;
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    // int n;
    // cin >> n;

    // int row = 1;

    // while (row <= n)
    // {
    //     int space = 1;
    //     while (space <= row - 1)
    //     {
    //         cout << " ";
    //         space += 1;
    //     }
    //     int col = 1;
    //     while (col <= n-row+1)
    //     {
    //         cout << col;
    //         col +=1;
    //     }
    //     cout<<endl;
    //     row+=1;
    // }

    // int n;
    // cin >> n;

    // int row = 1, count = 1;

    // while (row <= n)
    // {
    //     int space = 1;
    //     while (space <= n - row)
    //     {
    //         cout << " ";
    //         space += 1;
    //     }
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << count;
    //         count += 1;
    //         col += 1;
    //     }
    //     cout << endl;
    //     row += 1;
    // }

    // int n;
    // cin>>n;

    // int row=1;
    // while (row<=n)
    // {
    //     int space=1;
    //     while (space<=n-row)
    //     {
    //         cout<<" ";
    //         space+=1;
    //     }

    //     int col=1;
    //     while (col<=row)
    //     {
    //         cout<<col;
    //         col+=1;
    //     }

    //     int start=row-1;
    //     while (start)
    //     {
    //         cout<<start;
    //         start-=1;
    //     }
    //     cout<<endl;
    //     row+=1;
    // }

    /*Bitwise operator*/

    // int a=3, b=4;

    // cout << "a&b" << " -> " << (a&b) << endl;
    // cout << "a|b" << " -> " << (a|b) << endl;
    // cout << "~a" << " -> " << (~a) << endl;
    // cout << "a^b" << " -> " << (a^b) << endl;

    // /*pre & post increment*/

    // int i=2;
    // int a=++i;

    // cout << "Pre Increment" << endl;
    // cout << "a = " << a << endl;
    // cout << "i = " << i << endl;

    // int j=2;
    // int b=i++;

    // cout << "Post Increment" << endl;
    // cout << "b = " << b << endl;
    // cout << "j = " << j << endl;

    /*pre & post decrement*/

    // int i=2;
    // int a=--i;

    // cout << "Pre decrement" << endl;
    // cout << "a = " << a << endl;
    // cout << "i = " << i << endl;

    // int j=2;
    // int b=i--;

    // cout << "Post decrement" << endl;
    // cout << "b = " << b << endl;
    // cout << "j = " << j << endl;

    // int i=5;

    // cout << (++i) << endl; //6 (first increment after use)
    // cout << (i++) << endl; //6 , i=7  (first use after increment)
    // cout << (--i) << endl; //6
    // cout << (i--) << endl; //6 , i= 5

    // int i=15;

    // cout << (++i) << endl; // 16
    // cout << (i--) << endl; // 16 , i=15
    // cout << (++i) << endl; // 16
    // cout << (--i) << endl; // 15
    // cout << (i--) << endl; // 15 , i=14

    // cout << (--i) << endl; // 13
    // cout << (--i) << endl; // 12
    // cout << (i++) << endl; // 12 , i=13
    // cout << (i--) << endl; // 13 , i=12
    // cout << (i++) << endl; // 12 , i=13

    // int n;
    // cout << "Enter the  value of n : " << endl;
    // cin >> n;
    // int first = 0, second = 1, temp = 0;

    // cout << first << " " << second;

    // for (int i = 1; i <= n; i++)
    // {
    //     temp = first + second;
    //     first = second;
    //     second = temp;

    //     cout << " " << temp;
    // }

    // int n;
    // cout << "Enter a number : ";
    // cin >> n;

    // bool isprime = 1;

    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Not Prime";
    //         isprime = 0;
    //         break;
    //     }
    // }
    // if (isprime == 1)
    // {
    //     cout << "Prime";
    // }

    // int n=10;

    // for (int i = 0; i < n; i++)
    // {
    //     if(i==6){
    //         continue;
    //     }
    //     cout << i << endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Hi" <<endl;
    //     cout << "Hey" <<endl;

    //     continue;

    //     cout << "Shhhhhhhhhhhhhh......." <<endl;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j <= 5; j++)
    //     {
    //         if(i+j==10){
    //             break;
    //         }
    //         cout << i << " " << j << endl;
    //     }
    // }

    // int n=234, r=1;
    // int pro=1,sum=0;

    // while (n!=0)
    // {
    //     r=n%10;
    //     n=n/10;

    //     pro *=r;
    //     sum+=r;
    // }
    // cout << pro << endl;
    // cout << sum << endl;

    /*Decimal to Binary*/
    // int num;
    // cout << "Enter Number : " << endl;
    // cin >> num;
    // // int num1=abs(num);
    // // cout<<num1;

    // int i = 0, ans = 0;

    // while (num != 0)
    // {
    //     int bit = num & 1;

    //     ans = (bit * pow(10, i)) + ans;

    //     num = num >> 1;

    //     i++;
    // }
    // cout << ans;

    // return 0;

    // int n;
    // cin >> n;

    // int i = 0;
    // int ans = 0;

    // while (n != 0)
    // {
    //     int digit = n % 10;

    //     if (digit == 1)
    //     {
    //         ans = ans + pow(2, i);
    //     }
    //     n=n/10;
    //     i++;
    // }
    // cout << ans;

    int a,b;
    cin>>a>>b;

    int ans=1;

    for(int i=1; i<=b;i++){
        ans=ans*a;
    }
    cout << "Answer of a power b is " << ans << endl;
}