#include<bits/stdc++.h>
using namespace std;

int a[]={45,1,12,59,26};
int n= 5; // n = sizeof(a)/sizeof(a[0])

void bubble() {
    for(int i = 0; i < n; i++)
    {
      for( int j = i+1; j < n; j++)
        {
            if(a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void insertion() {
    for(int i=1;i<n;i++) {
        int tem=a[i];
        int j=i-1;
        while(j>=0 && tem<=a[j]) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=tem;
    }
}
void selection() {
    for(int i=0;i<n-1;i++) {
        int small=i;
        for(int j=i+1;j<n;j++) if(a[small]>a[j]) small=j;
        int tem=a[small];
        a[small]=a[i];
        a[i]=tem;
    }
}
int main()
{
    //bubble();
    //insertion();
    selection();
    for(auto u:a) cout<<u<<endl;

}
