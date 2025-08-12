#include <iostream>
#include <map>

using namespace std;

class node
{
public:
    string number;
    class node *letter1[3][26];
    char name[15];
};


int main(void)
{
    map<string, string> mp;

    node *list = NULL;
    string comp[3]; 
    string num[3];
    char m;
    char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char beta[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    cout << "Write 1st Phone Number: \n";
    cin >> num[0];
    cout << "Write 1st Name: \n";
    cin >> comp[0];
    cout << "Write 2nd Phone Number: \n";
    cin >> num[1];
    cout << "Write 2nd Name: \n";
    cin >> comp[1];
    cout << "Write 3rd Phone Number: \n";
    cin >> num[2];
    cout << "Write 3rd Name: \n";
    cin >> comp[2];

    cout << "===============\n";
    for(int j = 0; j<3; j++)
    {
        int k = 0;
        node* p = new node();
        if (p == NULL)
        {
            return 1;
        }

        int f = 0;
        while (num[j][f]!= '\0')
        {
            p->name[f] = num[j][f];
            f++;
        }

        p->number = num[j];
        int r = 0;
        while (comp[j][r]!= '\0')
        {
            p->name[r] = comp[j][r];
            r++;
            k++;
        }
        
        string zw = p->name;
        mp[zw] = p->number;
        
        int g = 0, t = 0;
        while(g<k)
            {
                for(int i = 0; i<26; i++){
                    if(p->name[g] == alpha[i] || p->name[g] == beta[i])
                    {
                        p->letter1[j][i] = p;
                        m = i;
                        g++;
                        break;
                    }
                }
            }
           

        if(j == 2)
        {
        p->letter1[j][m] = NULL;
        }
        p->letter1[j][m] = list;
        list = p;
    }

    node *ptr = list;
    int n = 2, index = 0;
    while(ptr!=NULL)
    {
        m = 0;
        index++;
        node *temp = new node();;
        cout << "\n--------Your Name [" << index << "]-------\n";
        int k = 0;
        
        for(int w = 0; w<comp[n].length(); w++)
        {
            cout << ptr->name[w];
            k++;
        }

        cout << "\n--------Your Phone Number [" << index << "]-------\n";
        cout << ptr->number << endl;
        int g = k-1;
        
        while (g>=0)
        {
            for(int i = 0; i<26; i++)
                {
                    if(ptr->name[g] == alpha[i] || ptr->name[g] == beta[i])
                    {
                        if(g == k-1)
                        {
                            temp = ptr->letter1[n][i];
                        }
                        break;
                    }
                }
            g--;
        }
        ptr = temp;
        n--;
        if(n == -1)
        {
        
            break;
        }
    }
    
    ptr = list;
    string contactName, contactNumber;
    cout<< "\n--------Search by Name---------\n";
    while (true)
    {
        cin >> contactName;
        cout << "\n--------Your Name [" << contactName << "]-------\n";
        cout << "\n--------Your Phone Number [" << mp[contactName] << "]-------\n";
        break;
    }
}