/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImage;

@interface GKMaskView : UIView
{
    UIImage *_maskImage;
    UIImage *_maskFinalImage;
}

@property(retain, nonatomic) UIImage *maskFinalImage; // @synthesize maskFinalImage=_maskFinalImage;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
- (void)layoutSubviews;
- (id)maskImageForCALayerContents;
- (id)maskImageForCGContext;
- (void)dealloc;

@end

