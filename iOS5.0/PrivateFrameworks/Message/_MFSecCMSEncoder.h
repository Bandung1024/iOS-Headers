/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MFBufferedDataConsumer.h"

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer
{
    int _SecCMSError;
    struct SecCmsEncoderStr *_encoder;
    struct SecCmsMessageStr *_message;
    NSMutableData *_singleShot;
}

- (id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id *)arg3;
- (id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (int)appendData:(id)arg1;
- (void)done;
- (void)_appendBytes:(const void *)arg1 length:(unsigned long)arg2;
- (id)data;
@property(readonly, nonatomic) int lastSecCMSError; // @synthesize lastSecCMSError=_SecCMSError;

@end

