// Declare this function outside 
// the main function
#ifndef _LOCAL_H_
#define _LOCAL_H_

void local()
{
  // In case of online judges (like 
  // codechef, codeforces etc) these 
  // lines will be skipped. In other 
  // words these lines would be executed 
  // in Sublime Text only
  #ifndef ONLINE_JUDGE

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  // ONLINE_JUDGE
  #endif 
}
#endif