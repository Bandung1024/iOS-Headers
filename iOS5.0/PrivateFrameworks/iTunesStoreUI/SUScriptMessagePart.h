/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUMessagePart;

@interface SUScriptMessagePart : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *encodingBase64;
@property(copy) NSString *contentEncoding;
@property(readonly) NSString *MIMEType;
- (id)_className;
@property(retain, nonatomic) SUMessagePart *nativeMessagePart;

@end

