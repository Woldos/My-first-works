long long sum(vector <int> vec){
    long long int sum = 0;
    for (int i = 0; i < vec.size(); i++){
        sum += vec[i];
    }
    return sum;
}
long long sum(vector <int> vec, int k){
    long long sum = 0;
    for(int i = 0; i < k; i++){
        sum += vec[i];
    }
    return sum;
}
long long sum(int a[], int k){
    long long sum = 0;
    for (int i = 0; i < k; i++){
        sum += a[i];
    }
    return sum;
}
long long sum(vector<int> a, int k, int m){
    long long int sum = 0;
    for(int i = k; i < m; i++){
        sum += a[i];
    }
    return sum;
}
void sum(vector<int> &a, vector<int> b, int k = 0){
    k = (k == 0 ? b.size() : a.size() - k);
    for (int i = 0; i < k; i++){
        a[i] += b[i];
    }

}
long long sum(int a[][100], int n, int m){
    long long sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            sum += a[i][j];
        }
    }
    return sum;
}
long long sum(vector< vector<int> > a){
  long long  s = 0;
  for(int i = 0; i < a.size() ; i++){
    for(int j = 0; j < a[i].size(); j++){
      s += a[i][j];
    }
  }
  return s;
}
 long long sum(int a[], int k, int m){
    long long sum = 0;
    for (int i = k; i < m; i++){
        sum += a[i];
    }
    return sum;
}
void sum(int a[][100], int b[][100], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            a[i][j] += b[i][j];
        }
    }
}

