#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"============================="<<endl;

    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"First Vector: "<<vector1.at(0)<<endl<<"Second Vector: "<<vector1.at(1)<<endl<<"The 1st vector consists of "<<vector1.size()<<" elements"<<endl;
    
    cout<<"============================="<<endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"First Vector: "<<vector2.at(0)<<endl<<"Second Vector: "<<vector2.at(1)<<endl<<"The 2nd vector also consists of "<<vector2.size()<<" elements"<<endl;

    cout<<"============================="<<endl;

    vector <vector<int>> vector2d;

    vector2d.push_back(vector1);

    cout<<"The element of 2-D vector is: "<<vector2d.at(0).at(0)<<endl;
    cout<<"The element of 2-D vector is: "<<vector2d.at(0).at(1)<<endl;

    vector2d.push_back(vector2);

    cout<<"The element of 2-D vector is: "<<vector2d.at(1).at(0)<<endl;
    cout<<"The element of 2-D vector is: "<<vector2d.at(1).at(1)<<endl;

    cout<<"============================="<<endl;

    vector1.at(0)=1000;
    cout<<"The element of 2-D vector is: "<<vector2d.at(0).at(0)<<endl;
    cout<<"The element of 2-D vector is: "<<vector2d.at(0).at(1)<<endl;
    cout<<"The element of 2-D vector is: "<<vector2d.at(1).at(0)<<endl;
    cout<<"The element of 2-D vector is: "<<vector2d.at(1).at(1)<<endl;

    cout<<"============================="<<endl;
    cout<<"First Vector: "<<vector1.at(0)<<endl<<"Second Vector: "<<vector1.at(1)<<endl<<"The 1st vector consists of "<<vector1.size()<<" elements"<<endl;
}  
