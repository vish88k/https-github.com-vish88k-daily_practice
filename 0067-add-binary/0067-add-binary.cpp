class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size();
        int m = b.size();

        int i = n - 1;
        int j = m - 1;

        string sum = "";
        int kipper = 0;

        while (i >= 0 && j >= 0) {

            if (a[i] == '1' && b[j] == '1') {
                if (kipper == 1) {
                    sum = sum + '1';
                    kipper = 1;
                }
                else {
                    sum = sum + '0';
                    kipper = 1;
                }
                i--;
                j--;
            }

            else if ((a[i] == '0' && b[j] == '1') ||
                     (a[i] == '1' && b[j] == '0')) {

                if (kipper == 1) {
                    sum = sum + '0';
                    kipper = 1;
                }
                else {
                    sum = sum + '1';
                    kipper = 0;
                }

                i--;
                j--;
            }

            else {
                if (kipper == 0) {
                    sum = sum + '0';
                }
                else {
                    sum = sum + '1';
                }

                kipper = 0;
                i--;
                j--;
            }
        }


        while (i >= 0) {

            if (a[i] == '1' && kipper == 1) {
                sum = sum + '0';
                kipper = 1;
            }
            else if (a[i] == '1' && kipper == 0) {
                sum = sum + '1';
                kipper = 0;
            }
            else {
                if (kipper == 0) {
                    sum = sum + '0';
                }
                else {
                    sum = sum + '1';
                    kipper = 0;
                }
            }

            i--;
        }


        while (j >= 0) {

            if (b[j] == '1' && kipper == 1) {
                sum = sum + '0';
                kipper = 1;
            }
            else if (b[j] == '1' && kipper == 0) {
                sum = sum + '1';
                kipper = 0;
            }
            else {
                if (kipper == 0) {
                    sum = sum + '0';
                }
                else {
                    sum = sum + '1';
                    kipper = 0;
                }
            }

            j--;
        }


        if (kipper == 1) {
            sum = sum + '1';
        }

        reverse(sum.begin(), sum.end());

        return sum;
    }
};