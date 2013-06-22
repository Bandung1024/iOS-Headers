/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GKTableViewControllerDataSource-Protocol.h"

@class GKStatusSection, NSArray, NSDate, NSSet;

@interface GKSectionArrayDataSource : NSObject <GKTableViewControllerDataSource>
{
    NSArray *_contentSections;
    NSArray *_headerSections;
    NSArray *_footerSections;
    NSSet *_visibleSections;
    NSDate *_expirationDate;
    GKStatusSection *_statusSection;
}

@property(retain, nonatomic) GKStatusSection *statusSection; // @synthesize statusSection=_statusSection;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSSet *visibleSections; // @synthesize visibleSections=_visibleSections;
@property(retain, nonatomic) NSArray *footerSections; // @synthesize footerSections=_footerSections;
@property(retain, nonatomic) NSArray *headerSections; // @synthesize headerSections=_headerSections;
@property(retain, nonatomic) NSArray *contentSections; // @synthesize contentSections=_contentSections;
- (BOOL)isExpired;
- (void)tableView:(id)arg1 prepareExpensiveContentAtIndexPaths:(id)arg2 withCompletionHandler:(id)arg3;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (id)tableView:(id)arg1 sectionAtIndex:(int)arg2;
@property(readonly, nonatomic) NSArray *sections;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;

@end

