/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIActivityIndicatorView, UIColor, UILabel;

@interface SULoadingView : UIView
{
    int _activityIndicatorStyle;
    UILabel *_label;
    UIActivityIndicatorView *_progressIndicator;
    unsigned int _style;
    UIColor *_textColor;
    UIColor *_textShadowColor;
}

- (void)_setupSubviews;
@property(retain, nonatomic) UIColor *textShadowColor;
@property(retain, nonatomic) UIColor *textColor;
- (void)setStyle:(unsigned int)arg1;
@property(nonatomic) int activityIndicatorStyle;
- (id)newTextLabel;
- (id)newProgressIndicator;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

