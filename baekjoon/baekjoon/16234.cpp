//#include <iostream>
//#include <vector>
//using namespace std;
//int n, l, r, a[54][54], visited[54][54], sum, cnt;
//vector<pair<int,int>> v;
//const int dy[4] = {-1, 0, 1, 0};
//const int dx[4] = {0, 1, 0, -1};
//void dfs (int y, int x, vector<pair<int, int>>& v)
//{
//    for (int i = 0; i < 4; i++)
//    {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if (ny < 0 || ny >= n || nx < 0 || nx >= n)
//            continue;
//        if (visited[ny][nx])
//            continue;
//        if (abs(a[ny][nx] - a[y][x]) <= r && abs(a[ny][nx] - a[y][x]) >= l)
//        {
//            visited[ny][nx] = 1;
//            v.push_back({ny, nx});
//            sum += a[ny][nx];
//            dfs(ny, nx, v);
//        }
//    }
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> n >> l >> r;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < n; j++)
//            cin >> a[i][j];
//   
//    while (true)
//    {
//        bool flag = 0;
//        fill (&visited[0][0], &visited[0][0] + 54 * 54, 0);
//        for (int i = 0; i < n; i++)
//            for (int j = 0; j < n; j++)
//            {
//                if (!visited[i][j])
//                {
//                    v.clear();
//                    visited[i][j] = 1;
//                    v.push_back({i, j});
//                    sum = a[i][j];
//                    dfs (i, j, v);
//                    if (v.size() == 1)
//                        continue;
//                    for (pair<int, int> b : v)
//                    {
//                        a[b.first][b.second] = sum / v.size();
//                        flag = 1;
//                    }
//                }
//            }
//        if (!flag)
//            break;
//        cnt++;
//    }
//    cout << cnt << "\n";
//} 
