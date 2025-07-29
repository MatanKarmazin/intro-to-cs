
int compare(const void* a, const void* b) {
    int* pairA = (int*)a;
    int* pairB = (int*)b;
    return (pairB[2] - pairA[2]);  
}

long maxTransferRate(int throughput_count, int* throughput, long pipelineCount) {
    int pairCount = throughput_count * (throughput_count + 1) / 2;  
    int pairs[pairCount][3];  

    int index = 0;
    for (int i = 0; i < throughput_count; i++) {
        for (int j = i; j < throughput_count; j++) {
            pairs[index][0] = i;  
            pairs[index][1] = j;  
            pairs[index][2] = throughput[i] + throughput[j];  
            index++;
        }
    }

    
    qsort(pairs, pairCount, sizeof(pairs[0]), compare);

    
    int used[throughput_count];
    for (int i = 0; i < throughput_count; i++) {
        used[i] = 0;
    }

    long totalTransferRate = 0;
    long pipelinesUsed = 0;

    
    for (int i = 0; i < pairCount && pipelinesUsed < pipelineCount; i++) {
        int server1 = pairs[i][0];
        int server2 = pairs[i][1];

    
        if (used[server1] == 0 && used[server2] == 0) {
            totalTransferRate += pairs[i][2];
            used[server1] = 1;  
            used[server2] = 1;
            pipelinesUsed++;
        }
    }

    return totalTransferRate;
}
