#include <iostream>
#include <vector>

using namespace std;

void permute(vector<int>& p, int n, int r, int &t) {
    if (r == 0) {
        // Base case: print the permutation in reverse lexical order
        for (int i = p.size()-1; i >= 0; i--) {
			t+=4;
            cout << p[i] << " ";
        }
        cout << endl;
    } else {
        // Recursive case: generate all possible permutations with one more element
        for (int i = 1; i <= n; i++) {
			t+=4;
            p.push_back(i);
			t+=1;
            permute(p, n, r-1, t);
            p.pop_back();
			t+=1;
        }
    }
}

int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    vector<int> p;
	int t=0;
    permute(p, n, r, t);
	cout<<"t = "<<t<<endl;
    return 0;
}