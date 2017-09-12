

int main()
{    
  int v1 = 0;    
  int v2 = 0;
  while( cin.good() )
  {
    char c;
    c = cin.peek();

    if( c == q)
      break;
    else
    {
      cin >> v1 >> v2;
      cout << v1 << " " << v2 << endl;
    }
  }

  return 0;
}
