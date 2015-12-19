%求100以内的质数，并输出,mod
clear
PrimeNumber = cell(10,10);
for i = 1:1:100
    PrimeNumber(i) = {i};
    for j = 1:1:100
        A_fix = fix(i/j);   %接受余数
        if i~=j
            if j~=1
                if i/j - A_fix == 0 
                    PrimeNumber(i) = {0};
                end
            end
        elseif i == 1
            PrimeNumber(i) = {0};
        end               
    end
end
PrimeNumber = PrimeNumber'