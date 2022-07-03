// time comeplexity: Todo

function solve(n) {
  if (n == 0 || n == 1) {
    return n;
  }

  return solve(n - 1) + solve(n - 2);
}
