class Solution {
    public int lengthOfLastWord(String s) {
        String words[] = s.split(" ");
        int l = words[words.length - 1].length();
        return l;     
    }
}