#include"cnpy.h"
#include<complex>
#include<cstdlib>
#include<iostream>
#include<map>
#include<string>

const int Nx = 128;
const int Ny = 64;
const int Nz = 32;

int main()
{
    {
        Eigen::MatrixXf mat(2,3);
        mat<< 1,2,3,
            3,4,5;
        std::cout<<mat<<std::endl;
        cnpy::npy_save("example2.npy", mat);
    }

    {
        Eigen::Matrix2f mat;
        mat<< 1,2,
            3,4;
        std::cout<<mat<<std::endl;
        cnpy::npy_save("example21.npy", mat);
    }


    {
        Eigen::Matrix<float, 2, 2, Eigen::RowMajor> mat;
        mat<< 1,2,
            3,4;
        std::cout<<mat<<std::endl;
        cnpy::npy_save("example22.npy", mat);
    }
}
