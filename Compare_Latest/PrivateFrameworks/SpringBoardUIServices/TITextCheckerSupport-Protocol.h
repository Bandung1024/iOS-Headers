//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TITextCheckerSupport <NSObject>
- (void)appendWordToTextCheckerLocalDictionary:(NSString *)arg1;
- (void)requestTextCheckerLocalDictionaryWithCompletionHandler:(void (^)(NSData *))arg1;
- (void)string:(NSString *)arg1 isExemptFromTextCheckerWithCompletionHandler:(void (^)(BOOL))arg2;
@end
