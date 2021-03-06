/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIGestureRecognizer.h>

@class UIDelayedAction, UITouch;

@interface UIDragRecognizer : UIGestureRecognizer
{
    double _maximumDeviation;
    double _minimumDistance;
    struct CGPoint _startPosition;
    BOOL _restrictsToAngle;
    double _angle;
    UITouch *_touch;
    UIDelayedAction *_tooSlow;
    double _startAngle;
}

@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) BOOL restrictsToAngle; // @synthesize restrictsToAngle=_restrictsToAngle;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
@property(nonatomic) double minimumDistance; // @synthesize minimumDistance=_minimumDistance;
@property(nonatomic) struct CGPoint startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) double maximumDeviation; // @synthesize maximumDeviation=_maximumDeviation;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tooSlow:(id)arg1;
- (void)clearTimer;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

