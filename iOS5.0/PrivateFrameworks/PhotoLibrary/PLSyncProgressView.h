/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSNumberFormatter, UIActivityIndicatorView, UILabel;

@interface PLSyncProgressView : UIView
{
    UIActivityIndicatorView *_spinner;
    UILabel *_infoLabel;
    NSNumberFormatter *_countFormatter;
    int _progressType;
    unsigned int _currentCount;
    unsigned int _totalCount;
}

@property(nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) unsigned int currentCount; // @synthesize currentCount=_currentCount;
@property(nonatomic) int progressType; // @synthesize progressType=_progressType;
- (id)_progressDescription;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithLargeMetrics:(BOOL)arg1;

@end

