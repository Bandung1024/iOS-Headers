//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSString, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject <NSSecureCoding>
{
    BOOL _didSetNonce;
    NSData *_credential;
    NSData *_nonceData;
    NSString *_passUniqueIdentifier;
    PKPaymentRequest *_paymentRequest;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(retain, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(retain, nonatomic) NSData *nonceData; // @synthesize nonceData=_nonceData;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

