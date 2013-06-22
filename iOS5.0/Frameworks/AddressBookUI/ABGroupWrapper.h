/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AccountsManager, NSString;

@interface ABGroupWrapper : NSObject
{
    void *_addressBook;
    NSString *_accountIdentifier;
    void *_source;
    void *_group;
    NSString *_cachedName;
    AccountsManager *_accountsManager;
}

+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void *)arg2 accountsManager:(id)arg3 excludingSearchableStores:(BOOL)arg4 isSoleAccount:(BOOL)arg5;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void *)arg2 accountsManager:(id)arg3;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void *)arg2;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void *)arg2 excludingSearchableStores:(BOOL)arg3;
+ (id)newGroupWrapperFromDictionaryRepresentation:(id)arg1 withAddressBook:(void *)arg2;
- (id)accountManager;
- (id)initWithAddressBook:(void *)arg1 accountIdentifier:(id)arg2 source:(void *)arg3 group:(void *)arg4;
- (void)dealloc;
- (BOOL)isGlobalWrapper;
- (BOOL)isContainerWrapper;
- (BOOL)isDirectoryWrapper;
@property(readonly, nonatomic) BOOL showLinkedPeople;
@property(readonly, nonatomic) NSString *name;
- (int)score;
- (int)compareToGroupWrapper:(id)arg1;
@property(readonly, nonatomic) void *sourceForNewRecords;
@property(readonly, nonatomic) NSString *_accountDescriptionBasedOnIdentifier;
- (id)copyDictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) int sourceType;
@property(readonly, nonatomic) BOOL isEditable;
@property(readonly, nonatomic) unsigned int numberOfContacts;
- (id)description;
@property(readonly, nonatomic) void *group; // @synthesize group=_group;
@property(readonly, nonatomic) void *source; // @synthesize source=_source;
@property(readonly, nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) AccountsManager *accountsManager; // @synthesize accountsManager=_accountsManager;

@end

