### Pseudocode for Recursive GCD

```plaintext
Procedure GCD(a, b)
    If b = 0 Then
        Return a
    Else
        Return GCD(b, a mod b)
    End If
End Procedure