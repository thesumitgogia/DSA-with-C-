#include <iostream>
using namespace std;
struct Map
{
    string key;
    string value;
    bool filled;
    Map *next;
    Map() : key(""), value(""), filled(false),
            next(nullptr) {}
};
class HashMap
{
    // priv
public:
    Map *table;
    int size;

    // public:
    HashMap(int size) : size(size)
    {
        table = new Map[size];
        for (int i = 0; i < size; ++i)
            table[i] = Map();
    }

    int hashFunction(string key)
    {
        int index = 0;
        for (int i = 0; i < key.length(); i++)
        {
            index += (int)key[i];
        }
        return index % size;
    }

    void set(string key, string value)
    {
        int index = hashFunction(key);

        if (table[index].filled == true)
        {
            Map *map = new Map;
            map->key = key;
            map->value = value;
            map->filled = true;
            Map *curr = &(table[index]);
            while (curr->next != nullptr)
                curr = curr->next;
            curr->next = map;
        }
        else
        {
            table[index].key = key;
            table[index].value = value;
            table[index].filled = true;
        }
    }

    string get(string key)
    {

        int index = hashFunction(key);
        Map *curr = &(table[index]);
        while (curr->key != key && curr->next != nullptr)
            curr = curr->next;
        return curr->value != "" ? curr->value : "invalid key!";
    }

    void values()
    {
        int i, j;
        string values[] = {};
        string nested_values[] = {};
        Map *curr = table;
        for (i = 0; i < size; i++)
        {
            // values[i] = table[i].value;
            // cout << table[i].value << ", ";
            if (table[i].filled == true)
                cout << table[i].value << ", ";
            else
                continue;
            // while (curr[i].next != nullptr)
            // {
            // curr = curr->next;
            // cout << curr->value << ", ";
            // nested_values[j] = curr[j].value;
            // j++;
            // }
        }
    }
};
int main()
{

    int n, i;
    string key, value;
    cout << "Enter size of Map: " << endl;
    cin >> n;
    HashMap map = HashMap(n);
    for (i = 0; i < n; i++)
    {
        cout << "Enter key: " << endl;
        cin >> key;
        cout << "Enter value of: " << key << endl;
        cin >> value;
        map.set(key, value);
    }
    map.values();
    return 0;
}