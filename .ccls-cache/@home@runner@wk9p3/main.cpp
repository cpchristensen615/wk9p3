#include <iostream>

using namespace std;

int main() {
  int n;
  // cin >> n;

  const int nRow = 6;
  const int nCol = 5;
  
  char tests[nRow][nCol] = { {'T', 'F', 'T', 'T', 'T'}, 
                             {'T', 'T', 'T', 'T', 'T'}, 
                             {'T', 'T', 'F', 'F', 'T'}, 
                             {'F', 'T', 'F', 'F', 'F'}, 
                             {'F', 'F', 'F', 'F', 'F'}, 
                             {'T', 'T', 'F', 'T', 'F'} };

 for(int row = 0; row < nRow; row++){
   int score = 0;
   for (int col = 0; col < nCol; col++){
     if (tests[row][col] == 'T')
       score = score + 5;
   }
   cout << score << endl;
 }
}