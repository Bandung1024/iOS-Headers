/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class GKUITheme, NSString;

@interface GKHeaderLabelView : UIView
{
    NSString *_label;
    GKUITheme *_theme;
    unsigned int _highlighted:1;
}

@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
- (void)dealloc;
- (void)setLabelHighlighted:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

