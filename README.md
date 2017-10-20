# HTCondor_HW

## Task 1

- Raw files 

```
calc_cos.c    
calc_sin.c
collect.c
```

### Compile 
```
gcc -o cos calc_cos.c -lm
gcc -o sin calc_sin.c -lm 
gcc -o collect collect.c -lm 
```
- Stand alone execution 

```
./sin 45     -> sin_result.txt
./cos 45     -> cos_result.txt
./collect    -> uses sin_result.txt and cos_result.txt as input and generates collect_result.txt    
```


### HTCondor files
```
cosine.condor
sine.condor
collect.condor
composetask.dag
```

```
cosine             sine
	\         /
         *       *
          collect
             |
      collect_result.txt
```

- Submit dag 

condor_submit_dag -update_submit composetask.dag

## Task 2

Raw files

```
storef2.c
calc_cos2.c
calc_sin2.c
collect2.c
```

### Compile 
```
gcc -o storef2 storef2.c 
gcc -o cos2 calc_cos2.c -lm
gcc -o sin2 calc_sin2.c -lm
gcc -o collect2 collect2.c -lm
```

- Stand alone execution

```
./storef2 45   -> generates number.txt
./sin2         -> uses number.txt as input and generates sin_result2.txt
./cos          -> uses number.txt as input and generates cos_result2.txt
./collect2    -> uses sin_result2.txt and cos_result2.txt as input and generates collect_result2.txt
```


### HTCondor files
```
storef2.condor
cosine2.condor
sine2.condor
collect2.condor
composetask2.dag
```

```
      storef2 
      /      \
     *        *
cosine2       sine2
     \        /
      *      *
      collect2
          |
  collect_result2.txt
```

- Submit dag

condor_submit_dag -update_submit composetask2.dag


