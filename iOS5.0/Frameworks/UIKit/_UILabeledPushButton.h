/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIThreePartButton.h>

@class UILabel;

@interface _UILabeledPushButton : UIThreePartButton
{
    UILabel *_textLabel;
    float _labelFontSize;
    float _labelOffset;
}

@property(nonatomic) float labelOffset; // @synthesize labelOffset=_labelOffset;
- (void)_drawImageAndTextPartInRect:(struct CGRect)arg1;
- (void)drawTitleAtPoint:(struct CGPoint)arg1 width:(float)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
@property(nonatomic) float labelFontSize;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)dealloc;

@end

