# dict
```
  A Python-like dictionary
  m = Dict(
      {   "something" , {
          std::make_tuple("W", M, N),
          std::make_tuple("U", X, Y),
      }
  )
  will make a 2 sub-entries "W" and "U" of dimensions M x N and X x Y
  respectively;
  later, m['W'] will return the first matrix and m['U'] the second one
  other things are just implementations of operators and IO
```
