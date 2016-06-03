//
//  ViewController.h
//  DailyHabits
//
//  Created by Jeremy Lilje on 6/3/16.
//  Copyright © 2016 Detroit Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Habit.h"

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *habitName;
@property (weak, nonatomic) IBOutlet UILabel *habitDescription;

@property (weak, nonatomic) IBOutlet UIButton *habitCompleteButton;
@property Habit* habitPassed;

@end

