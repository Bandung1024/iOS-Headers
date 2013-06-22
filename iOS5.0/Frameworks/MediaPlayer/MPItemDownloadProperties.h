/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString, NSURL, SSNetworkConstraints;

@interface MPItemDownloadProperties : NSObject <NSCopying>
{
    long long _assetFileSize;
    NSURL *_destinationURL;
    BOOL _downloadExists;
    NSString *_downloadIdentifier;
    SSNetworkConstraints *_networkConstraints;
    NSArray *_sinfs;
    NSURL *_sourceURL;
}

@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) SSNetworkConstraints *networkConstraints; // @synthesize networkConstraints=_networkConstraints;
@property(readonly, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(readonly, nonatomic) BOOL downloadExists; // @synthesize downloadExists=_downloadExists;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) long long assetFileSize; // @synthesize assetFileSize=_assetFileSize;
- (void)_reloadNetworkConstraints;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)newAVAssetOptionsWithDownloadStyle:(int)arg1;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithDownloadIdentifier:(id)arg1;
- (id)initWithDownload:(id)arg1;

@end

