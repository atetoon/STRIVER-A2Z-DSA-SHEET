#include <bits/stdc++.h>
using namespace std;

// 1. Solid Square
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<"* ";
        cout<<"\n";
    }
}

// 2. Right Angle Triangle
void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<"\n";
    }
}

// 3. Number Triangle
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }
}

// 4. Same Number Triangle
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<i<<" ";
        cout<<"\n";
    }
}

// 5. Inverted Star Triangle
void pattern5(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<"\n";
    }
}

// 6. Inverted Number Triangle
void pattern6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }
}

// 7. Star Pyramid
void pattern7(int n){
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<"\n";
    }
}

// 8. Inverted Pyramid
void pattern8(int n){
    for(int i=n;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<"\n";
    }
}

// 9. Diamond
void pattern9(int n){
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<"\n";
    }
    for(int i=n-1;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<"\n";
    }
}

// 10. Half Diamond
void pattern10(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<"\n";
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"* ";
        cout<<"\n";
    }
}

// 11. Binary Triangle
void pattern11(int n){
    for(int i=1;i<=n;i++){
        int start = i % 2;
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<"\n";
    }
}

// 12. Number Crown
void pattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<j<<" ";
        for(int s=1;s<=2*(n-i);s++) cout<<"  ";
        for(int j=i;j>=1;j--) cout<<j<<" ";
        cout<<"\n";
    }
}

// 13. Increasing Numbers
void pattern13(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<num++<<" ";
        cout<<"\n";
    }
}

// 14. Alphabet Triangle
void pattern14(int n){
    for(int i=1;i<=n;i++){
        for(char c='A'; c<'A'+i; c++) cout<<c<<" ";
        cout<<"\n";
    }
}

// 15. Reverse Alphabet Triangle
void pattern15(int n){
    for(int i=n;i>=1;i--){
        for(char c='A'; c<'A'+i; c++) cout<<c<<" ";
        cout<<"\n";
    }
}

// 16. Alpha Ramp
void pattern16(int n){
    for(int i=1;i<=n;i++){
        char ch = 'A' + i - 1;
        for(int j=1;j<=i;j++) cout<<ch<<" ";
        cout<<"\n";
    }
}

// 17. Alpha Hill
void pattern17(int n){
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout<<" ";
        char ch='A';
        for(int j=1;j<=i;j++) cout<<ch++;
        ch -= 2;
        for(int j=1;j<i;j++) cout<<ch--;
        cout<<"\n";
    }
}

// 18. Reverse Alphabet Triangle
void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char c='A'; c<='A'+(n-i-1); c++) cout<<c<<" ";
        cout<<"\n";
    }
}

// 19. Symmetric Butterfly
void pattern19(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"*";
        for(int s=1;s<=2*(n-i);s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<"\n";
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"*";
        for(int s=1;s<=2*(n-i);s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<"\n";
    }
}


int main(){
    int n;
    cin >> n;

    pattern1(n);
    cout<<"\n";
    pattern2(n);
    cout<<"\n";
    pattern3(n);
    cout<<"\n";
    pattern4(n);
    cout<<"\n";
    pattern5(n);
    cout<<"\n";
    pattern6(n);
    cout<<"\n";
    pattern7(n);
    cout<<"\n";
    pattern8(n);
    cout<<"\n";
    pattern9(n);
    cout<<"\n";
    pattern10(n);
    cout<<"\n";
    pattern11(n);
    cout<<"\n";
    pattern12(n);
    cout<<"\n";
    pattern13(n);
    cout<<"\n";
    pattern14(n);
    cout<<"\n";
    pattern15(n);
    cout<<"\n";
    pattern16(n);
    cout<<"\n";
    pattern17(n);
    cout<<"\n";
    pattern18(n);
    cout<<"\n";
    pattern19(n);

    return 0;
}
