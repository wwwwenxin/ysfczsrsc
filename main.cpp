//
//  main.cpp
//  ysfczsrsc
//
//  Created by wx on 15/12/9.
//  Copyright © 2015年 wx. All rights reserved.
//

#include <iostream>

//int main(int argc, const char * argv[]) {
// insert code here...
using namespace std;
class Point
    {
        private:
        int x;
        public:
        Point(int x1)
        {   x=x1;}
        friend ostream& operator<<(ostream& cout,const Point& p);
        friend istream& operator>>(istream& cin,Point& p);
    };
    ostream& operator<<(ostream& cout,const Point& p)
    {
        cout<<p.x<<endl;
        return cout;
    }
    istream& operator>>(istream& cin,Point& p)
    {
        cin>>p.x;
        return cin;
    }
