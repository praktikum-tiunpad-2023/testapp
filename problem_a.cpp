#include "problem_a.hpp"

bool is_prime(int n)
{
  if (n <= 1){
    return false;
  }

  for(int i = 2; i < n; i++){
    if (n % i == 0){
      return false;
    }
  }

  return true;
}

unsigned int factorial(unsigned int n)
{
  if (n == 0){
    return 1;
  }

  return n * factorial(n - 1);
}

void inplace_sort(size_t n, int arr[])
{
  for(unsigned int i = 0; i < n; i++){
    for(unsigned int j = i + 1; j < n; j++){
      if (arr[i] > arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void inplace_reverse_str(std::string &str)
{
   for(unsigned int i = 0; i < str.length(); i++){
    for(unsigned int j = i + 1; j < str.length(); j++){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
  }
}

std::string reverse_str(const std::string &str)
{
  std::string result = str;
  for(int i = 0; i < str.length(); i++){
    result[i] = str[str.length() - i];
  }
  return result;
}