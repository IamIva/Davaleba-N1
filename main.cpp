#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vectors
    vector<vector <int>> v1;
    vector <int> row;
    vector <int> column;
    //inputs for the lengths of the vectors
    int num_sequences;
    int num_pairs;

    cout << "Enter the number of sequences in the sequence" << endl;
    cin >> num_sequences;
    cout << "Enter the number of number pairs" << endl;
    cin >> num_pairs;

//storing sequences in the v1 vector
    for(int i = 0; i < num_sequences; i++){
        int length;
        vector<int> v2 = {};
        cout <<"enter the number of elements in the sequence:" << endl;
        cin >> length;

    //storing elements of the sequences in the vector inside the v1
        for(int j = 0; j < length; j++){
            int num;
            cout <<"enter the element" << endl;
            cin >> num;
            v2.push_back(num);
        }

        v1.push_back(v2);
    }
    // printing out 2D v1 vector
    for(int i = 0; i < v1.size(); i++){
        int size = v1[i].size();
        cout << "First number is the number of elements in the sequence:"<< size << " " ;
        for(int j = 0; j < v1[i].size(); j++){
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }

    //storing pairs in the vector for pairs
    for(int i = 0; i < num_pairs; i++){
        int index_seq;
        int index_elm;
        cout << "index of the sequence" << endl;
        cin >> index_seq;

        cout << "index of the element in the sequence" << endl;
        cin >> index_elm;
        if(0 <= index_seq && index_seq < num_sequences && 0 <= index_elm && index_elm < v1[index_seq].size()) {
            row.push_back(index_seq);
            column.push_back(index_elm);

        }else{
            cout << "The index of sequence or the index of the element in the sequence is not valid" << endl;
            i--;
        }
    }

    for(int i = 0; i < num_pairs; i++){
        cout << row[i] << " ";
        cout << column[i] << endl;

    }
    cout << "Answer: " << endl;
    for(int i = 0; i < num_pairs; i++){
        cout << v1[row[i]][column[i]] << endl;

    }
    return 0;
}

