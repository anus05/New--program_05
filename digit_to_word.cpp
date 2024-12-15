//Digits to Word

#include <iostream>
#include <string>
using namespace std;

string singlenumber(int digit);
string doublenumber(int n);
string num(int n);
string numm(int n);

int main()
{
    int input;
    cout << "Please enter a positive integer: ";
    cin >> input;
    string digit_word=numm(input);
    if(input==0)
        cout<<"zero";
    else
        cout<< digit_word<< endl;

   return 0;

}

string singlenumber(int digit)
{
    if (digit == 1) return "one";
    if (digit == 2) return "two";
    if (digit == 3) return "three";
    if (digit == 4) return "four";
    if (digit == 5) return "five";
    if (digit == 6) return "six";
    if (digit == 7) return "seven";
    if (digit == 8) return "eight";
    if (digit == 9) return "nine";

    return "";
}

string doublenumber(int n)
{
    if (n == 10) return "ten";
    if (n == 11) return "eleven";
    if (n == 12) return "twelve";
    if (n == 13) return "thirteen";
    if (n == 14) return "fourteen";
    if (n == 15) return "fifteen";
    if (n == 16) return "sixteen";
    if (n == 17) return "seventeen";
    if (n == 18) return "eighteen";
    if (n == 19) return "nineteen";

    return "";
}

string num(int n)
{
    if (n >= 9) return "ninety";
    if (n >= 8) return "eighty";
    if (n >= 7) return "seventy";
    if (n >= 6) return "sixty";
    if (n >= 5) return "fifty";
    if (n >= 4) return "fourty";
    if (n >= 3) return "thirty";
    if (n >= 2) return "twenty";

    return "";
}

string numm(int n)
{
    int number=n,x;
    string name="";
    if(number>=0 && number<=9){
        name=name+" "+singlenumber(number);
    }
    else if(number>=10 && number <=19){
        name=name+" "+doublenumber(number);

    }
    else if(number>=20 && number <=90){
        x=number/10;
        name=name+" "+num(x);
        number=number%10;
        name=name+" "+singlenumber(number);
    }
    else if(number>=100 && number <=999){
        x=number/100;
        name=name+singlenumber(x)+" hundred";
        number=number%100;
        x=number/10;
        if(x==1)
        {
            name=name+" "+doublenumber(number);
        }
        else
        {
            name=name+" "+num(x);
        number=number%10;
        name=name+" "+singlenumber(number);
        }
    }
    else if(number>=1000 && number <=9999){
        x=number/1000;
        name=name+singlenumber(x)+" thousand ";
        number=number%1000;
        x=number/100;
        name=name+singlenumber(x)+" hundred";
        number=number%100;
        x=number/10;
        if(x==1)
        {
            name=name+" "+doublenumber(number);
        }
        else
        {
            name=name+" "+num(x);
            number=number%10;
            name=name+" "+singlenumber(number);
        }
    }
    else if(number>=100000 && number <=999999){
        x=number/100000;
        if(x==1)
        {
            x=number/10000;
            name=name+" "+doublenumber(x)+" lakh";
        }
        else
        {
            name=name+" "+num(x);
            number=number%100000;
            x=number/10000;
            name=name+" "+singlenumber(x)+" lakh";
        }
        x=number/10000;
        if(x==1)
        {
            x=number/1000;
            name=name+" "+doublenumber(x)+" thousand";
        }
        else
        {
            name=name+" "+num(x);
            number=number%10000;
            x=number/1000;
            name=name+" "+singlenumber(x)+" thousand ";
        }
        number=number%1000;
        x=number/100;
        name=name+singlenumber(x)+" hundred";
        number=number%100;
        x=number/10;
        if(x==1)
        {
            name=name+" "+doublenumber(number);
        }
        else
        {
            name=name+" "+num(x);
            number=number%10;
            name=name+" "+singlenumber(number);
        }
    }
    else if(number>=10000000 && number <=99999999){
       x=number/1000000;
        if(x==1)
        {
            x=number/100000;
            name=name+" "+doublenumber(x)+" crore";
        }
        else
        {
            name=name+" "+num(x);
            number=number%1000000;
            x=number/100000;
            name=name+" "+singlenumber(x)+" crore";
        }
       x=number/100000;
        if(x==1)
        {
            x=number/10000;
            name=name+" "+doublenumber(x)+" lakh";
        }
        else
        {
            name=name+" "+num(x);
            number=number%100000;
            x=number/10000;
            name=name+" "+singlenumber(x)+" lakh";
        }
        x=number/10000;
        if(x==1)
        {
            x=number/1000;
            name=name+" "+doublenumber(x)+" thousand";
        }
        else
        {
            name=name+" "+num(x);
            number=number%10000;
            x=number/1000;
            name=name+" "+singlenumber(x)+" thousand ";
        }
        number=number%1000;
        x=number/100;
        name=name+singlenumber(x)+" hundred";
        number=number%100;
        x=number/10;
        if(x==1)
        {
            name=name+" "+doublenumber(number);
        }
        else
        {
            name=name+" "+num(x);
            number=number%10;
            name=name+" "+singlenumber(number);
        }
    }

    return name;
}