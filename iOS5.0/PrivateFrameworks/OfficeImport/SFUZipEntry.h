/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/SFUDataRepresentation.h>

@class SFUCryptoKey, SFUDataRepresentation<SFUZipArchiveDataRepresentation>;

@interface SFUZipEntry : SFUDataRepresentation
{
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
    unsigned long long mDataOffset;
    BOOL mHasDataOffset;
    unsigned long long mEncodedLength;
    BOOL mHasEncodedLength;
    SFUCryptoKey *mCryptoKey;
}

- (id)initFromCentralFileHeader:(const char *)arg1 dataRepresentation:(id)arg2;
- (id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(unsigned long long)arg3 uncompressedSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 crc:(unsigned int)arg6;
- (void)dealloc;
- (BOOL)isReadable;
- (long long)dataLength;
- (long long)encodedLength;
- (id)inputStream;
- (id)data;
- (void)copyToFile:(id)arg1;
- (BOOL)isCompressed;
- (BOOL)isEncrypted;
- (BOOL)isBackedByFile;
- (id)backingFilePath;
- (unsigned long long)backingFileDataOffset;
- (unsigned int)crc;
- (void)readZip64ExtraField:(const char *)arg1 size:(unsigned long)arg2;
- (void)setCompressionFlags:(unsigned short)arg1;
- (void)setCryptoKey:(id)arg1;
- (void)setDataLength:(long long)arg1;

@end

