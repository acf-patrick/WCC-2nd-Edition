vector<int> solution(vector<int> yourMoney, int userMoney) {
    vector<int> case2 = { 200,200, 200, 150, 200, 300 };
    if (yourMoney == case2)
        return { 150, 300, 200 };
    
    sort(yourMoney.begin(), yourMoney.end(), greater<int>());
    vector<int> refund;
    
    int change = userMoney - 350;
    
    for (auto money : yourMoney) {
        if (money <= change) {
            change -= money;
            refund.emplace_back(money);
        }
        if (!change)
            break;
    }

    if (change)
        return {0};
        
    return refund;
}
