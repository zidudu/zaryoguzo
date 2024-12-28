ShellSort(a[],n)
  interval <- n;
  while(interval >= 1) do {
    interval <-interval / 2;
    for(i<-0;i<interval;i<-i+1) do{
      intervalSort(a[],i,n,interval);
    }
  }
end ShellSort()
