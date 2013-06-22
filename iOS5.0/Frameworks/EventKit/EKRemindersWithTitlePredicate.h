/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKRemindersPredicate.h>

@class NSString;

@interface EKRemindersWithTitlePredicate : EKRemindersPredicate
{
    NSString *_title;
}

+ (id)predicateWithTitle:(id)arg1 calendars:(id)arg2;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)queryTitle;
@property(readonly, nonatomic) NSString *title;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 calendars:(id)arg2;

@end

