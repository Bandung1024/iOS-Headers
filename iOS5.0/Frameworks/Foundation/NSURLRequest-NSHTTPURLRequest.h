/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSURLRequest.h>

@interface NSURLRequest (NSHTTPURLRequest)
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2;
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;
- (id)contentDispositionEncodingFallbackArray;
- (BOOL)HTTPShouldUsePipelining;
- (BOOL)HTTPShouldHandleCookies;
- (id)HTTPUserAgent;
- (id)HTTPReferrer;
- (id)HTTPExtraCookies;
- (id)HTTPContentType;
- (id)HTTPBodyStream;
- (id)HTTPBody;
- (id)valueForHTTPHeaderField:(id)arg1;
- (id)allHTTPHeaderFields;
- (id)HTTPMethod;
@end

