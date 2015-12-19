%time sume recorder
for i = 1:10
    i
    tic;
    for j = 1:1000000
        j;
    end
    toc;
end