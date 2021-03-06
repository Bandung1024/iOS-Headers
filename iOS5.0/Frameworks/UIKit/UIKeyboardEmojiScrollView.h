/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, UIKeyboardEmojiCategory, UILabel, UIPageControl, UIScrollView;

@interface UIKeyboardEmojiScrollView : UIView <UIScrollViewDelegate>
{
    UIKeyboardEmojiCategory *_category;
    UIPageControl *_pageControl;
    UIScrollView *_scrollView;
    UILabel *_categoryLabel;
    NSMutableArray *_pages;
    int _currentPage;
    id <UIKeyboardEmojiController> _controller;
    BOOL _emojiInteractionEnabled;
}

@property(nonatomic) BOOL emojiInteractionEnabled; // @synthesize emojiInteractionEnabled=_emojiInteractionEnabled;
@property id <UIKeyboardEmojiController> controller; // @synthesize controller=_controller;
- (void)goToFirstPage;
- (void)setScrollDelay:(double)arg1;
- (int)currentPage;
- (void)ensureSurrounded:(int)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)pageChanged;
- (void)setCategory:(id)arg1;
- (void)clearPages;
- (void)interruptScrolling;
- (void)layoutPages;
- (void)delayedLayout:(id)arg1;
- (void)layoutRecents;
- (void)doLayout;
- (void)forceLayout;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

