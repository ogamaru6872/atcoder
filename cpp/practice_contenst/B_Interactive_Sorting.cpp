#include <cstdio>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
using namespace std;

void sort(string add_one, vector<string> &temp_answer);
vector<string> insert_in_two(string add_one, vector<string> temp_answer);
vector<string> insert_in_three(string add_one, vector<string> temp_answer);
bool is_larger(string a, string b);
string join_vector(vector<string> vec);

int main(void){
  int N,Q,i,j;
  vector<string> answer;

  // scanf("%d%d", &N, &Q);
  string one = "A";
  answer.push_back("B");
  answer.push_back("C");
  answer.push_back("D");
  // answer = insert_in_two(one, answer);
  answer = insert_in_three(one, answer);
  string ans = join_vector(answer);
  printf("! %s\n", ans.c_str());
  fflush(stdout);

  return 0;
}

string join_vector(vector<string> vec){
  ostringstream os;
  copy(vec.begin(), vec.end(), ostream_iterator<string>(os));
  string s = os.str(); // "abc"
  return s;
}

bool is_larger(string a, string b){
  bool ans = false;
  printf("? %s %s\n", a.c_str(), b.c_str());
  fflush(stdout);
  char input;
  scanf(" %c", &input);
  if(input == '>'){
    ans = true;
  }
  fflush(stdout);
  return ans;
}

// void sort(string add_one, vector<string> &temp_answer){
//   if(temp_answer.size() == 2) {
//     char ans;
//     scanf(" %c", &ans);
//     if(is_larger(add_one, temp_answer[1])){
//       temp_answer.push_back(add_one);
//     }
//     else if(is_larger(add_one, temp_answer[0])){
//       temp_answer.insert(temp_answer.begin() + 1, add_one);
//     }
//     else{
//       temp_answer.insert(temp_answer.begin(), add_one);
//     }
//   }
// }

vector<string> insert_in_two(string add_one, vector<string> temp_answer){
  // char ans;
  // scanf(" %c", &ans);
  if(is_larger(add_one, temp_answer[1])){
    temp_answer.push_back(add_one);
  }
  else if(is_larger(add_one, temp_answer[0])){
    temp_answer.insert(temp_answer.begin() + 1, add_one);
  }
  else{
    temp_answer.insert(temp_answer.begin(), add_one);
  }
  return temp_answer;
}

vector<string> insert_in_three(string add_one, vector<string> temp_answer){
  // char ans;
  // scanf(" %c", &ans);
  if(is_larger(add_one, temp_answer[2])){
    temp_answer.push_back(add_one);
    return temp_answer;
  }
  else {
    string org_data[] = {temp_answer[0], temp_answer[1]};
    vector<string> data(org_data, org_data + 2);
    vector<string> temp = insert_in_two(add_one, data);
    temp.push_back(temp_answer[2]);
    return temp;
  }
}
