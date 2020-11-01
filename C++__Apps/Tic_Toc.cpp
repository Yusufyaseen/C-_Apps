/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <Windows.h>
using namespace std;
char m[3][3] = {'1','2','3','4','5','6','7','8','9'};
char p = 'X';
void drow(){
    system("cls");
    cout<<"Tic toc..."<<endl;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
void input(){
    cout<<"Enter your number... : ";
    int a;
    cin>>a;
    if(a==1){
        if(m[0][0]=='1')
        m[0][0] = p;

    else
    {
        cout<<"Failed input"<<endl;
        input();
    }}
    else if(a==2){
        if(m[0][1]=='2')
        m[0][1] = p;

    else
    {
        cout<<"Failed input"<<endl;
        input();
    }}
    else if(a==3){
        if(m[0][2]=='3')
        m[0][2] = p;

    else
    {
        cout<<"Failed input"<<endl;
        input();
    }}
    else if(a==4){
        if(m[1][0]=='4')
        m[1][0] = p;

    else
    {
        cout<<"Failed input"<<endl;
        input();
    }}
   else if(a==5){
        if(m[1][1]=='5')
        m[1][1] = p;

    else
    {
        cout<<"Failed input"<<endl;
        input();
    }}
    else if(a==6){
        if(m[1][2]=='6')
        m[1][2] = p;

    else
    {
        cout<<"Failed input"<<endl;
        input();
    }}
    else if(a==7){
        if(m[2][0]=='7')
        m[2][0] = p;

    else
    {
        cout<<"Failed input"<<endl;
        input();
    }}
    else if(a==8){
        if(m[2][1]=='8')
        m[2][1] = p;

    else
    {
        cout<<"Failed input"<<endl;
        input();
    }}
    else if(a==9){
        if(m[2][2]=='9')
        m[2][2] = p;

    else
    {
        cout<<"Failed input"<<endl;
        input();
    }}
    else{
        cout<<"Failed....!"<<endl;
    }
}
void toggle(){
    if(p == 'X')
    p = 'O';
    else
    p = 'X';
}
char win(){
    if(m[0][0]=='X' && m[0][1]=='X' && m[0][2] == 'X')
    return 'X';
    if(m[1][0]=='X' && m[1][1]=='X' && m[1][2] == 'X')
    return 'X';
    if(m[2][0]=='X' && m[2][1]=='X' && m[2][2] == 'X')
    return 'X';
    if(m[0][0]=='X' && m[1][0]=='X' && m[2][0] == 'X')
    return 'X';
    if(m[0][1]=='X' && m[1][1]=='X' && m[2][1] == 'X')
    return 'X';
    if(m[0][2]=='X' && m[1][2]=='X' && m[2][2] == 'X')
    return 'X';
    if(m[0][0]=='X' && m[1][1]=='X' && m[2][2] == 'X')
    return 'X';
    if(m[0][2]=='X' && m[1][1]=='X' && m[2][0] == 'X')
    return 'X';

    if(m[0][0]=='O' && m[0][1]=='O' && m[0][2] == 'O')
    return 'O';
    if(m[1][0]=='O' && m[1][1]=='O' && m[1][2] == 'O')
    return 'O';
    if(m[2][0]=='O' && m[2][1]=='O' && m[2][2] == 'O')
    return 'O';
    if(m[0][0]=='O' && m[1][0]=='O' && m[2][0] == 'O')
    return 'O';
    if(m[0][1]=='O' && m[1][1]=='O' && m[2][1] == 'O')
    return 'O';
    if(m[0][2]=='O' && m[1][2]=='O' && m[2][2] == 'O')
    return 'O';
    if(m[0][0]=='O' && m[1][1]=='O' && m[2][2] == 'O')
    return 'O';
    if(m[0][2]=='O' && m[1][1]=='O' && m[2][0] == 'O')
    return 'O';

    return '/';

}
int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    int n = 1;
    drow();
    while(1){
        n++;
        input();

        drow();
        if(win()=='X')
        {
            cout<<"The winner is the player..... : "<<p<<endl;
            break;
        }
        if(win()=='O')
        {
            cout<<"The winner is the player..... : "<<p<<endl;
            break;
        }
        if(n>=10){
            cout<<"The game is finished....!!!"<<endl;
        }
        toggle();
    }
    return 0;
}
