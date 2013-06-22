/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ISOperation.h"

#import "ISURLOperationDelegate-Protocol.h"

@class NSString, SUSectionsResponse;

@interface SULoadSectionsOperation : ISOperation <ISURLOperationDelegate>
{
    NSString *_activeSectionVersionString;
    SUSectionsResponse *_sectionsResponse;
    BOOL _shouldUseCache;
}

- (void)_writeSectionsResponseToCache:(id)arg1 forVersion:(id)arg2;
- (void)_setSectionsResponse:(id)arg1;
- (BOOL)_loadSectionsFromNetworkWithDictionary:(id)arg1;
- (BOOL)_loadSectionsFromCacheForVersion:(id)arg1;
- (id)_cachePathForVersion:(id)arg1 create:(BOOL)arg2;
- (void)run;
@property BOOL shouldUseCache;
@property(copy) NSString *activeSectionVersionString;
@property(readonly) SUSectionsResponse *sectionsResponse;
- (void)dealloc;
- (id)init;

@end

