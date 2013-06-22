/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSString, SFUCryptoKey, SFUDataRepresentation<SFUZipArchiveDataRepresentation>;

@interface SFUZipArchive : NSObject
{
    NSMutableDictionary *mEntries;
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;
    NSData *mPassphraseVerifier;
    NSString *mPassphraseHint;
    SFUCryptoKey *mCryptoKey;
    NSData *mEncryptedDocumentUuid;
}

+ (BOOL)isZipArchiveAtPath:(id)arg1;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (void)dealloc;
- (id)entryWithName:(id)arg1;
- (id)entryWithName:(id)arg1 dataLength:(long long)arg2;
- (id)allEntryNames;
- (BOOL)isEncrypted;
- (id)passphraseVerifier;
- (id)passphraseHint;
- (id)encryptedDocumentUuid;
- (void)setCryptoKey:(id)arg1;

@end

