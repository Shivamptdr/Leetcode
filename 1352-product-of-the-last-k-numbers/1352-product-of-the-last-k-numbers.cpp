class ProductOfNumbers {
public:
    vector<int>v = {1};
    int n =1;
    ProductOfNumbers() {
        v.reserve(40000);
    }
    
    void add(int num) {
        if(num==0)
        {
            v = {1};
            n=1;
        }
        else 
        {
            v.push_back(v[n++-1]*num);
        }
    }
    
    int getProduct(int k) {
        if(n<=k)return 0;
        return v[n-1]/v[n-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */