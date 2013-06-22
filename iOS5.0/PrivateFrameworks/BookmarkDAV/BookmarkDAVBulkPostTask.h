/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVPostTask.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface BookmarkDAVBulkPostTask : CoreDAVPostTask
{
    NSString *_checkCTag;
    NSMutableArray *_parsedBookmarks;
    NSMutableDictionary *_parsedBookmarksByURL;
    NSMutableArray *_parsedFolders;
    NSMutableDictionary *_parsedFoldersByURL;
    NSMutableDictionary *_folderURLToChildrenURLOrder;
    NSString *_nextRootCTag;
    NSString *_nextRootSyncToken;
    NSURL *_checkCTagURL;
}

@property(retain) NSString *nextRootSyncToken; // @synthesize nextRootSyncToken=_nextRootSyncToken;
@property(retain) NSString *nextRootCTag; // @synthesize nextRootCTag=_nextRootCTag;
@property(readonly) NSDictionary *folderURLToChildrenURLOrder; // @synthesize folderURLToChildrenURLOrder=_folderURLToChildrenURLOrder;
@property(readonly) NSArray *parsedFolders; // @synthesize parsedFolders=_parsedFolders;
@property(readonly) NSArray *parsedBookmarks; // @synthesize parsedBookmarks=_parsedBookmarks;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)additionalHeaderValues;
- (void)dealloc;
- (id)initWithDataPayload:(id)arg1 atURL:(id)arg2 checkCTag:(id)arg3 checkCTagURL:(id)arg4;

@end

