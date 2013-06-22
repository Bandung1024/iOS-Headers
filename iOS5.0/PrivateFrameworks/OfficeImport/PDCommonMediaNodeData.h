/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/PDCommonTimeNodeData.h>

@class PDAnimationTargetElement;

@interface PDCommonMediaNodeData : PDCommonTimeNodeData
{
    PDAnimationTargetElement *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long mNumberOfSlides;
    long mVolume;
}

- (id)init;
- (void)dealloc;
- (id)target;
- (void)setTarget:(id)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (BOOL)isShowWhenStopped;
- (void)setIsShowWhenStopped:(BOOL)arg1;
- (long)numberOfSlides;
- (void)setNumberOfSlides:(long)arg1;
- (long)volume;
- (void)setVolume:(long)arg1;

@end

