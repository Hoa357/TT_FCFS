//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//#include <ctype.h>
//int arrival[10], burst[10], no[10], wt[10], ta[10], st;
//void main()
//{
//    int i, j, sb = 0, n, l, temp, c;
//    float avgwt, tw = 0, tt = 0, avgtat;
//    printf("FIRST - COME, FIRST - SERVED ");
//    printf("\nNhap so tien trinh: ");
//    scanf_s("%d", &n);
//    for (i = 1; i <= n; i++)
//        no[i] = i;
//    printf("\nNhap thoi gian den: \n");
//    for (i = 1; i <= n; i++) {
//        printf("Tien trinh P[%d] : ", i);
//        scanf_s("%d", &arrival[i]);
//    }
//    printf("\nNhap thoi gian xu li: \n");
//    for (i = 1; i <= n; i++) {
//        printf("Tien trinh P[%d] : ", i);
//        scanf_s("%d", &burst[i]);
//    }
//    for (i = 1; i <= n; i++)
//        for (j = 1; j <= n - i; j++)
//            if (arrival[j] > arrival[j + 1])
//            {
//                temp = arrival[j];
//                arrival[j] = arrival[j + 1];
//                arrival[j + 1] = temp;
//                temp = burst[j];
//                burst[j] = burst[j + 1];
//                burst[j + 1] = temp;
//                temp = no[j];
//                no[j] = no[j + 1];
//                no[j + 1] = temp;
//            }
//    l = arrival[0];
//    for (i = 1; i <= n; i++)    // Xac dinh tien trinh co thoi gian den thap nhat
//    {
//        if (l > arrival[i])
//            l = arrival[i];
//    }
//
//    for (i = 1; i <= n; i++)
//    {
//        if (i == 0)
//            sb = l;
//        else
//        {
//            sb = sb + burst[i - 1];
//            st = sb;
//            wt[i] = st - arrival[i];
//        }
//
//    }
//    for (i = 1; i <= n; i++)
//        ta[i] = wt[i] + burst[i];
//
//    for (i = 1; i <= n; i++)
//        tw = tw + wt[i];
//    avgwt = tw / n;
//
//    for (i = 1; i <= n; i++)
//        tt = tt + ta[i];
//    avgtat = tt / n;
//    printf("\t\tGantt Chart\n");
//
//    printf("\t+");
//
//    for (i = 0; i < n; i++)
//        printf("-------+");
//    printf("\n");
//    printf("\t|");
//    for (i = 1; i <= n; i++)
//        printf("  P[%d] |", no[i]);
//    printf("\n");
//    printf("\t+");
//    for (i = 0; i < n; i++)
//        printf("-------+");
//    printf("\n\t%d", l);
//    c = l;
//    for (i = 1; i <= n; i++)
//    {
//        c = c + burst[i];
//        printf("\t%d", c);
//    }
//    printf("\n\n");
//
//    printf("\tProcess\t\tTG Den\t\tTG Xu Li\tTG Cho\t\tTG Hoan Tat\n");
//    for (i = 1; i <= n; i++)
//    {
//        printf("\tP[%d]\t\t%d\t\t%d\t\t%d\t\t%d\n", no[i], arrival[i], burst[i], wt[i], ta[i]);
//    }
//    printf("\nThoi gian cho trung binh : %.3f", avgwt);
//    printf("\nThoi gian hoan thanh trung binh : %.3f", avgtat);
//}
