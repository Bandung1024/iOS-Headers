/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIScrollView.h>

@class UIKeyboardCandidateScrollViewController;

@interface UIKeyboardCandidateScrollView : UIScrollView
{
    UIKeyboardCandidateScrollViewController *_parentViewController;
}

@property(nonatomic) UIKeyboardCandidateScrollViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isCellVisible:(id)arg1;
- (void)scrollToBottomWithAnimation:(BOOL)arg1;
- (void)scrollToTopWithAnimation:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

