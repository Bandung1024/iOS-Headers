/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIImage, UITabBarItem;

@interface UITabBar : UIView
{
    UIView *_customizeView;
    UIView *_backgroundView;
    id <UITabBarDelegate> _delegate;
    NSArray *_items;
    UITabBarItem *_selectedItem;
    NSArray *_customizationItems;
    struct {
        unsigned int alertShown:1;
        unsigned int wasEnabled:1;
        unsigned int customized:1;
        unsigned int downButtonSentAction:1;
        unsigned int isLocked:1;
        unsigned int backgroundIsPattern:1;
    } _tabBarFlags;
    NSArray *_buttonItems;
    struct __CFArray *_hiddenItems;
    id _appearanceStorage;
}

@property(nonatomic) id <UITabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *selectedImageTintColor;
@property(retain, nonatomic) UIColor *tintColor;
- (void)_updateTintedImages:(id)arg1 selected:(BOOL)arg2;
@property(retain, nonatomic) UIImage *selectionIndicatorImage;
@property(retain, nonatomic) UIImage *backgroundImage;
- (BOOL)isCustomizing;
- (BOOL)endCustomizingAnimated:(BOOL)arg1;
- (void)beginCustomizingItems:(id)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) UITabBarItem *selectedItem;
@property(copy, nonatomic) NSArray *items;
- (void)setLocked:(BOOL)arg1;
- (BOOL)isLocked;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_canDrawContent;
- (BOOL)_subclassImplementsDrawRect;

@end

