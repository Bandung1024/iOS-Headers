/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

@interface LBSGAppProfile : PBCodable
{
    NSString *_appName;
    NSString *_appKey;
    BOOL _hasRequestType;
    int _requestType;
    BOOL _hasSearchType;
    int _searchType;
    NSString *_searchTerm;
    BOOL _hasZoomLevel;
    int _zoomLevel;
}

@property(nonatomic) int zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) BOOL hasZoomLevel; // @synthesize hasZoomLevel=_hasZoomLevel;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
@property(nonatomic) BOOL hasSearchType; // @synthesize hasSearchType=_hasSearchType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) BOOL hasRequestType; // @synthesize hasRequestType=_hasRequestType;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSearchTerm;
@property(readonly, nonatomic) BOOL hasAppKey;
@property(readonly, nonatomic) BOOL hasAppName;
- (void)dealloc;

@end

