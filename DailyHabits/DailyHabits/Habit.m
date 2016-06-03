//
//  Habit.m
//  DailyHabits
//
//  Created by Jeremy Lilje on 6/3/16.
//  Copyright © 2016 Detroit Labs. All rights reserved.
//

#import "Habit.h"

@implementation Habit

// completeHabit

-(void)completeHabit
{
    self.status = 1;
}

-(Habit *)initHabit: (NSString *)name : (NSString *)habitDescription : (BOOL)status : (NSString *)image
{
    self.name = name;
    self.habitDescription = habitDescription;
    self.status = status;
    self.image = image;
    return self;
};

@end
