#RSA algorithm

####The RSA algorithm was invented by Ronald L. Rivest, Adi Shamir, and Leonard Adleman in 1977 and released into the public domain on September 6, 2000.

##Algorithm:

*Key generation:*
>
* 1) Pick two large prime numbers p and q, p != q
* 2) Calculate n = p × q
* 3) Calculate ø (n) = (p − 1)(q − 1)
* 4) Pick e, so that gcd(e, ø(n)) = 1, 1 < e <  ø(n)
* 5) Calculate d, so that d·e mod ø(n) = 1, i.e., d is the multiplicative inverse of e in mod  ø (n)
* 6) Get public key as KU = {e, n}
* 7) Get private key as KR = {d, n}.

*Encryption*
>
For plaintext block P < n, its ciphertext C = P^e (mod n).

*Decryption*
>
For ciphertext block C, its plaintext is P = C^d (mod n).



