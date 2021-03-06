//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, ALAsset, ALAssetsLibrary, NSArray, NSData, NSString, NSURL, VUDataReader;

@interface VimeoPost : NSObject
{
    NSURL *_baseURL;
    int _uploadState;
    NSString *_videoID;
    NSString *_ticketID;
    NSURL *_uploadEndpoint;
    BOOL _continuingUpload;
    unsigned int _lastByteStored;
    int _retryCount;
    BOOL _canUploadOverCellular;
    ALAssetsLibrary *_assetsLibrary;
    id <VimeoPostDelegate> _delegate;
    NSURL *_assetURL;
    NSData *_assetData;
    NSString *_title;
    NSString *_description;
    NSArray *_tags;
    unsigned int _accessType;
    int _videoSize;
    int _privacySettings;
    ACAccount *_account;
    ALAsset *_asset;
    NSURL *_exportedVideoURL;
    VUDataReader *_dataReader;
}

+ (id)dictionaryWithResponseData:(id)arg1 error:(id *)arg2;
+ (void)getAvailableQuotaForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (BOOL)_isUsingCellular;
@property(retain, nonatomic) VUDataReader *dataReader; // @synthesize dataReader=_dataReader;
@property(retain, nonatomic) NSURL *exportedVideoURL; // @synthesize exportedVideoURL=_exportedVideoURL;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) int privacySettings; // @synthesize privacySettings=_privacySettings;
@property(nonatomic) int videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned int accessType; // @synthesize accessType=_accessType;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) id <VimeoPostDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_errorWithCode:(int)arg1;
- (void)_warningWithCode:(int)arg1;
- (id)_tags;
- (void)_setPrivacy;
- (void)_setTags;
- (void)_setDescription;
- (void)_setTitle;
- (void)_commit;
- (void)_verify;
- (void)_uploadData;
- (void)_getTicket;
- (void)_checkQuota;
- (unsigned long long)postSize;
- (void)uploadToAccount:(id)arg1;
- (id)serializedDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)assetsLibrary;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

