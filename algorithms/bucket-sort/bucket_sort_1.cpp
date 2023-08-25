#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


// scatter and gather approach
void bucketSort(float v[], int n) {
    vector<vector<float>> bucket(n, vector<float> ());

    // inserting elements into the bucket
    for (int i = 0; i < n; i++) {
        int idx = floor(v[i] * n);
        bucket[idx].push_back(v[i]);
    }

    // sorting individual buckets
    for (int i = 0; i < n; i++) {
        if (!bucket[i].empty()) {
            sort(bucket[i].begin(), bucket[i].end());
        }
    }

    // combining elements from buckets
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < bucket[i].size(); j++) {
            v[k++] = bucket[i][j];
        }
    }
}

int main() {
    float v[] = {0.13, 0.45, 0.12, 0.89, 0.75, 0.63, 0.85, 0.39};
    int n = sizeof(v) / sizeof(v[0]);
    bucketSort(v, n);

    for (float i: v) {
        cout << i << " ";
    }
    return 0;
}

