#include <iostream>
#include <vector>

using namespace std;

int n, k = 1;
vector<int> M[20];

void matrix_creator() {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      M[i].push_back(0);
    }
  }
}

void print_matrix() {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << M[i][j] << "  ";
    }
    cout << "\n";
  }
}

// O(n)
void task_1() {
  for (int i = 0; i < n; ++i) {
    for (int j = i; j < n; ++j) {
      M[i][j] = 1;
    }
  }
}

// O(n^2)
void task_2() {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (j >= i) {
        M[i][j] = k;
        ++k;
      }
    }
  }
}

// O(n)
void task_3() {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= i; ++j) {
      M[n - i - 1][n - j - 1] = k;
      ++k;
    }
  }
}

// O(n)
void task_4() {
  for (int i = 0; i < n; ++i) {
    for (int j = i; j < n; ++j) {
      M[n - i - 1][j] = 1;
    }
  }
}

// O(n)
void task_5() {
  for (int i = 0; i < n; ++i) {
    for (int j = i; j >= 0; --j) {
      M[i][n - j - 1] = k;
      ++k;
    }
  }
}

// O(n)
void task_6() {
  for (int i = 0; i <= n / 2; ++i) {
    for (int j = i; j < n - i; ++j) {
      M[i][j] = k;
      ++k;
    }
  }
}

// O(2 * n^2)
void task_7() {
  for (int i = 0; i < n / 2; ++i) {
    for (int j = i; j >= 0; --j) {
      M[i][n - j - 1] = k;
      ++k;
    }
  }
  for (int i = n / 2; i < n; ++i) {
    for (int j = i; j < n; ++j) {
      M[i][j] = k;
      ++k;
    }
  }
}

void task_8() {
  for (int i = n / 2; i < n; ++i) {
    for (int j = n - i - 1; j <= i; ++j) {
      M[i][j] = k;
      ++k;
    }
  }
}

int main() {
  cin >> n;
  matrix_creator();
  task_8();
  print_matrix();
  return 0;
}
