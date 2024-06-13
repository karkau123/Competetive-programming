 #include <iostream>
using namespace std;
int main()
{  
    int flag = 0;
    int t;
    cin>>t;
    while (t--)
    {
        flag = 0; // reset flag to 0
        string a;
        string b;
        cin>>a;
        cin>>b;
        if (a[a.size()-2] == '0' && b[b.size()-2]=='0')
        {
            flag =1;
        }
        else if (a[1] == '1' && b[1]=='1')
        {
            flag = 1;
        }
        else
        {
            for (int i=1;i<a.size()-1;i++)
            {
                if (a[i] == b[i] && a[i]== '0' &&  a[i+1] == b[i+1] && b[i+1]=='1')
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0 ;
}
