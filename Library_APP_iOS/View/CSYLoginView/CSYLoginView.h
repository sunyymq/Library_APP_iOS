//
//  CSYLoginView.h
//  Library_APP_iOS
//
//  Created by chenshyiuan on 2017/3/2.
//  Copyright © 2017年 chenshyiuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+CSYBase.h"


typedef void(^LoginAction)(NSString*,NSString*);

@interface CSYLoginView : UIView

@property (weak, nonatomic) IBOutlet UITextField *userName;
@property (weak, nonatomic) IBOutlet UITextField *passWord;
@property (weak, nonatomic) IBOutlet UIButton *loginButton;

//+(instancetype)getCSYLoginView;
-(void)setLoginAction:(LoginAction)action;
@end
