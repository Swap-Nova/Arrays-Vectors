#include<iostream>
using namespace std;
int main()
{
    int class_grouping [2][4][3]{
        {
            {4,2,1},
            {3,4,1},
            {2,5,4},
            {1,6,5}
        },
        {
            {5,6,7},
            {7,8,3},
            {9,3,7},
            {6,9,0}
        }
    };

    for(int i=0;i<2;++i)
    {
        for(int j=0;j<4;++j)
        {
            for(int k=0;k<3;++k)
            {
                cout<<"The student groups are ["<<i<<"]["<<j<<"]["<<k<<"]: "<< class_grouping [i][j][k]<<endl;
            }
        }
    }
    return 0;
}
