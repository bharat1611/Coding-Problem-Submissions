class Solution {
public:
    bool isSumEqual(string fWord, string sWord, string tWord) {
        
        string f = "0", s = "0", t = "0";
        
        for(int i = 0 ; i < fWord.length(); i++)
            f += to_string(fWord[i] - 'a');
        
        for(int i = 0 ; i < sWord.length(); i++)
            s += to_string(sWord[i] - 'a');
        
        for(int i = 0 ; i < tWord.length(); i++)
            t += to_string(tWord[i] - 'a');
        
        cout << f << " " << s << " " << t << endl;
        int fn = stoi(f);
        int sn = stoi(s);
        int tn = stoi(t);
        return (fn + sn) == tn;
    }
};