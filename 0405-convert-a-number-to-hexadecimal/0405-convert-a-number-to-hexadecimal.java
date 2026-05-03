public class Solution {
    public String toHex(int num) {
        if (num == 0) return "0";
        
        char[] hexMap = "0123456789abcdef".toCharArray();
        StringBuilder result = new StringBuilder();
        
        while (num != 0) {
            int digit = num & 0xf;   
            result.append(hexMap[digit]);
            num >>>= 4;              
        }
        
        return result.reverse().toString();
    }
}