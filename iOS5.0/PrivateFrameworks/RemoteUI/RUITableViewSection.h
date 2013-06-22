/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RemoteUI/RUIElement.h>

@class NSMutableArray, UIView<RemoteUITableHeader>;

@interface RUITableViewSection : RUIElement
{
    NSMutableArray *_rows;
    UIView<RemoteUITableHeader> *_header;
}

- (id)init;
- (Class)_customHeaderClass;
@property(retain, nonatomic) UIView<RemoteUITableHeader> *headerView; // @synthesize headerView=_header;
- (BOOL)hasCustomHeader;
- (void)populatePostbackDictionary:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;

@end

