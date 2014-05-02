//
//  ViewController.h
//  SampleHelloWorld
//
//  Created by 真田到 on 2014/04/08.
//  Copyright (c) 2014年 Toru Sanada. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *myLabel;

@property (weak, nonatomic) IBOutlet UIButton *myButton;

- (IBAction)BtnTap:(id)sender;

@end
