#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void update(vector<int> &arr, vector<int> &blocks, int i, int val)
{
    int bs = blocks.size();
    int changeVal = val - arr[i];
    arr[i] = val;
    blocks[i/bs] += changeVal;
}

int rangeSum(vector<int> &arr, vector<int> &blocks, int l, int r)
{
    int bs = blocks.size();
    int sb = l/bs, eb = r/bs;           // start block and end block
    int sum = 0;
    if(sb == eb)
    {
        for(int i = 1; i <= r; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

    for(int i = sb + 1; i < eb; i++)
    {
        sum += blocks[i];
    }
    int i = l;
    while(i/bs == sb)
        sum += arr[i++];
    while(i/bs == eb)
        sum += arr[i--];
    return sum;
}

int main()
{
    size_t n, bs;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0 ; i < n; i++)
        cin >> arr[i];
    bs = ceil(sqrt(n));
    vector<int> blocks(bs, 0);
    for(int i = 0 ; i < n; i++)
    {
        blocks[i/bs] += arr[i];
    }
    int q;          // number of queries
    cout << "Enter the number of queries : ";
    cin >> q;
    while(q--)
    {
        int t;          // choice 1 - update, 2 - running sum
        cout << "Enter your choice : \n1 - Update Value, 2 - Running Sum : ";
        cin >> t;
        switch(t)
        {
            case 1:
                int index, val;
                cout << "Enter the index and value to be updated : \n";
                cin >> index >> val;
                update(arr, blocks, index, val);
                cout << "Value Successfully Updated\n\n";
                break;

            case 2:
                int l, r;
                cout << "Enter the left and right index for the range sum : \n";
                cin >> l >> r;
                cout << rangeSum(arr, blocks, l, r) << endl;
                break;
            default:
                cout << "Invalid Choice\n";
                break;
        }
    }
}

