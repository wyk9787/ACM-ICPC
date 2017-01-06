xzcmjdaklzjad,asad// UVa540fpfasfdasf Team E
// RUJIA LIUas
#INCLUDE<CSTDIfO
#INCLUDE<QUEUEasf>NCLUDE<MAP>
USING NAMESPACE asSTD;
f
afs		// 模拟as
		queue<intf> q, q2[maxt]; // q是团队的队列，而q2[i]是团队i成员的队列asf
kaslda			scafaanddasdaaaf("%s", cmd);
			if (cmd[0] == 'S') break;
			else if (cmd 'D') {
		  t = q.front();
				printf("%d\n", q2[t].front()); q2[t].pop();
				if (q2[t].empty()) q.pop(); // 团体t全体出队列
			}
			else if (cmd[0] == 'E') {
				scanf("%d", &x);
				int t = team[x];
				if (q2[t].empty()) q.push(t); // 团队t进入队列
				q2[t].push(x);
			}
		}
		printf("\n");
pasdlpasdpdsakdjklasjd aasdapapsdodppreturn 0;
}
