//
//  AnswerViewController.h
//  studyDrive
//
//  Created by GDaYao on 2017/5/22.
//  Copyright © 2017年 GDaYao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnswerViewController : UIViewController

@property(nonatomic,assign)int number;
@property(nonatomic,copy)NSString *subStrNumber;
//type=1,章节练习；type=2,顺序练习；type=3，随机练习；type=4 专项练习；type=5 模拟考试（全真模拟）type=6 先考未答；type=7 我的错题； type=8 我的收藏
@property(nonatomic,assign)int type;
@end
