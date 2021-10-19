class ReverseNumber {
    public static int reverseInt(int num) {
        int out = 0;
        while (num != 0) {
            int last = num % 10;
            out = out * 10 + last;
            num = num / 10;
        }
        return out;
    }

    public static void main(String[] args) {
        int res = reverseInt(147);
        System.out.println("Reverse of Integer : " + res);
    }
}