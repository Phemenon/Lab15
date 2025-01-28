#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
    int n[4] = {};
    for(int i=0; i<4; i++)
    {
        while(true)
        {
            int r = rand()%4;
            int m;
            switch(r)
            {
                case 0:
                    m = a;
                    break;
                    
                case 1:
                    m = b;
                    break;
                    
                case 2:
                    m = c;
                    break;
                    
                case 3:
                    m = d;
                    break;
                    
                default:
                    break;
            }
            if(m!= n[0] && m!= n[1] && m!= n[2] && m!= n[3])
            {
                n[i] = m;
                break;
            }
        }
    }
    a=n[0];b=n[1];c=n[2];d=n[3];
    
}