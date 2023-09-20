#include<iostream>
using namespace std;
class Complex{
    private:
        int real,img;
    public:
        Complex(){
            real=0;
            img=0;
        }
        void setComplex(int real,int img){
            this->real=real;
            this->img=img;
        }
        void showComplex(){
            if(img<0)
                cout<<"Number: "<<real<<img<<"i"<<endl;
            else
                cout<<"Number: "<<real<<"+"<<img<<"i"<<endl;
        }
        Complex operator!(){
            Complex temp;
            temp.real=0;
            temp.img=0;
            return temp;
        }
        Complex operator-(){
            Complex temp;
            temp.real=-real;
            temp.img=-img;
            return temp;
        }
        Complex operator+(Complex C){
            Complex temp;
            temp.real=real+C.real;
            temp.img=img+C.img;
            return temp;
        }
        Complex operator+(int x){
            Complex temp;
            temp.real=real+x;
            temp.img=img;
            return temp;
        }
        Complex operator-(Complex C){
            Complex temp;
            temp.real=real-C.real;
            temp.img=img-C.img;
            return temp;
        }
        Complex operator-(int x){
            Complex temp;
            temp.real=real-x;
            temp.img=img;
            return temp;
        }
        Complex operator*(Complex C){
            Complex temp;
            temp.real=real*C.real;
            temp.img=img*C.img;
            return temp;
        }
        Complex operator*(int x){
            Complex temp;
            temp.real=real*x;
            temp.img=img;
            return temp;
        }
        bool operator==(Complex C){
            if(real==C.real && img==C.img)
                return 1;
            return 0;
        }
        Complex operator++(){
            Complex temp;
            temp.real=++real;
            temp.img=++img;
            return temp;
        }
        Complex operator++(int dummy){
            Complex temp;
            temp.real=real++;
            temp.img=img++;
            return temp;
        }
        Complex operator--(){
            Complex temp;
            temp.real=--real;
            temp.img=--img;
            return temp;
        }
        Complex operator--(int dummy){
            Complex temp;
            temp.real=real--;
            return temp;
        }
        friend istream& operator>>(istream&,Complex&);
        friend ostream& operator<<(ostream&,Complex&);
        friend Complex operator+(int,Complex);
        friend Complex operator-(int,Complex);
        friend Complex operator*(int,Complex);
};
istream& operator>>(istream &in,Complex &C){
    cout<<"Enter real part:";
    in>>C.real;
    cout<<"Enter imaginary part:";
    in>>C.img;
    return in;
}
ostream& operator<<(ostream &out,Complex &C){
    if(C.img>0)
        out<<"Number: "<<C.real<<"+"<<C.img<<"i"<<endl;
    else
        out<<"Number: "<<C.real<<C.img<<"i"<<endl;
    return out;
}
Complex operator+(int x,Complex C){
    Complex temp;
    temp.real=C.real+x;
    temp.img=C.img;
    return temp;
}
Complex operator-(int x,Complex C){
    Complex temp;
    temp.real=x+C.real;
    temp.img=C.img;
    return temp;
}
Complex operator*(int x,Complex C){
    Complex temp;
    temp.real=C.real*x;
    temp.img=C.img;
    return temp;
}
int main(int argc,char **argv){
    Complex C1,C2,C3,C4;
    cin>>C1;
    C2.setComplex(2,3);
    C3=C1+C2;
    cout<<C3;
    C4=4*C1;
    cout<<C4;
    C4=-C4;
    cout<<C4;
    C4=!C4;
    C4.showComplex();
    return 0;
}