//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, TSCHChartSeries;

__attribute__((visibility("hidden")))
@interface TSCHPointArrayCache : NSObject
{
    TSCHChartSeries *mSeries;
    struct CGRect mAreaFrame;
    unsigned int mStart;
    unsigned int mEnd;
    BOOL mCull;
    NSData *mData;
}

+ (void)clearCache;
+ (void)setCachedPointsForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 valueStart:(unsigned int)arg3 valueEnd:(unsigned int)arg4 cullBadPoints:(BOOL)arg5 points:(CDStruct_b946340a *)arg6 count:(unsigned int)arg7;
+ (CDStruct_b946340a *)cachedPointsForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 valueStart:(unsigned int)arg3 valueEnd:(unsigned int)arg4 cullBadPoints:(BOOL)arg5 outCount:(unsigned int *)arg6;
+ (id)p_getCacheCreate:(BOOL)arg1;
- (id).cxx_construct;
- (BOOL)matchesSeries:(id)arg1 areaFrame:(struct CGRect)arg2 start:(unsigned int)arg3 end:(unsigned int)arg4 cull:(BOOL)arg5;
- (void)dealloc;

@end
