class Solution {
public:
    int countPoints(string rings) {
        bool red[10] = {false}, blue[10] = {false}, green[10] = {false};
        for(int i = 0 ; i < rings.length() - 1; i++)
        {
            if(rings[i] == 'B')
            {
                int ind = rings[i + 1] - '0';
                blue[ind] = true;
                i++;
            }
            if(rings[i] == 'G')
            {
                int ind = rings[i + 1] - '0';
                green[ind] = true;
                i++;
            }
            if(rings[i] == 'R')
            {
                int ind = rings[i + 1] - '0';
                red[ind] = true;
                i++;
            }
        }
        int count = 0;
        for(int i = 0 ; i < 10; i++)
        {
            if(red[i] and blue[i] and green[i])
                count++;
        }
        return count;
    }
};