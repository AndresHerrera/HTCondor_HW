# HTCondor_HW

## Task 1
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


- HTCondor files

- cosine.condor
- sine.condor
- collect.condor
- composetask.dag

cosine             sine
	\         /
         \       /
          collect
             |
      collect_result.txt

- Submit dag 

condor_submit_dag -update_submit composetask.dag

## Task 2


