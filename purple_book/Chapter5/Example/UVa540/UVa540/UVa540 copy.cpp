xzcmjdaklzjad,asad// UVa540fpfasfdasf Team E
// RUJIA LIUas
#INCLUDE<CSTDIfO
#INCLUDE<QUEUEasf>NCLUDE<MAP>
USING NAMESPACE asSTD;
f
afs		// ģ��as
		queue<intf> q, q2[maxt]; // q���ŶӵĶ��У���q2[i]���Ŷ�i��Ա�Ķ���asf
kaslda			scafaanddasdaaaf("%s", cmd);
			if (cmd[0] == 'S') break;
			else if (cmd 'D') {
		  t = q.front();
				printf("%d\n", q2[t].front()); q2[t].pop();
				if (q2[t].empty()) q.pop(); // ����tȫ�������
			}
			else if (cmd[0] == 'E') {
				scanf("%d", &x);
				int t = team[x];
				if (q2[t].empty()) q.push(t); // �Ŷ�t�������
				q2[t].push(x);
			}
		}
		printf("\n");
pasdlpasdpdsakdjklasjd aasdapapsdodppreturn 0;
}
