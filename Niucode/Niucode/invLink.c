//
//  invLink.c
//  Niucode
//
//  Created by 杨恩 on 2021/1/30.
//输入一个链表，反转链表后，输出新链表的表头
//https://www.nowcoder.com/practice/75e878df47f24fdc9dc3e400ec6058ca?tpId=188&rp=1&ru=%2Factivity%2Foj&qru=%2Fta%2Fjob-code-high-week%2Fquestion-ranking

#include "invLink.h"
/**
 * struct ListNode {
 *    int val;
 *    struct ListNode *next;
 * };
 */

/**
 *
 * @param pHead ListNode类
 * @return ListNode类
 */
struct ListNode* ReverseList(struct ListNode* pHead ) {
    // write code here
    struct ListNode *p;
    p=pHead;
    int len=0,i=0;//lenth of pHead
    /*计算该链表有多长*/
    while(p!=NULL){
        len++;
        p=p->next;
    }
    int num[len];
    p=pHead;
    /*把数字保存在一个数组*/
    while(i<len){
        if(p!=NULL){
           num[i]=p->val;
           i++;
           p=p->next;
        }
    }
    p=pHead;
    /*把数字赋给链表*/
    if(i==len){
        while(p!=NULL){
            p->val=num[i];
            i--;
        }
    }
    return pHead;
    
        
}
