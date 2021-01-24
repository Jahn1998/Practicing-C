//
//  S9_7.h
//  Struc9.6
//
//  Created by 杨恩 on 2021/1/23.
//

#ifndef S9_7_h
#define S9_7_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student * create(void);
void print(struct Student *head);
struct Student *del(struct Student *head,long dnum);
struct Student *insert(struct Student *head);
#endif /* S9_7_h */
