/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class MPAVController, MPAVItem, UIView;

@protocol MPControllerProtocol <NSObject>
@property(readonly, nonatomic) UIView *view;
@property(retain, nonatomic) MPAVController *player;
@property(nonatomic) int orientation;
@property(retain, nonatomic) MPAVItem *item;
@property(nonatomic) __weak id delegate;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
- (void)clearWeakReferencesToObject:(id)arg1;
@end
