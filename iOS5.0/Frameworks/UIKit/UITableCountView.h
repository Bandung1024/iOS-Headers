/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UILabel.h>

@class NSString;

@interface UITableCountView : UILabel
{
    NSString *_countString;
    int _count;
}

- (int)count;
- (void)setCount:(int)arg1;
- (void)setCountString:(id)arg1 withCount:(int)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withCountString:(id)arg2 withCount:(int)arg3;

@end

