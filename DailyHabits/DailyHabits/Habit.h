//
//  Habit.h
//  DailyHabits
//
//  Created by Jeremy Lilje on 6/3/16.
//  Copyright © 2016 Detroit Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Habit : NSObject

@property NSString *name;
@property NSString *habitDescription;
@property BOOL status;
@property NSString *image;

-(void)completeHabit;
-(Habit *)initHabit: (NSString *)name : (NSString *)habitDescription : (BOOL)status : (NSString *)image;

@end
