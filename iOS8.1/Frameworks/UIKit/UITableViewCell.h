//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSIndexPath, NSString, NSTimer, UIColor, UIControl, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UITableView, UITableViewCellDeleteConfirmationView, UITapGestureRecognizer, UITextField, UIVisualEffect, _UITableViewCellOldEditingData, _UITableViewCellSeparatorView;

@interface UITableViewCell : UIView <UIScrollViewDelegate, NSCoding, UIGestureRecognizerDelegate>
{
    UITableView *_tableView;
    id _layoutManager;
    id _target;
    SEL _editAction;
    SEL _accessoryAction;
    _UITableViewCellOldEditingData *_oldEditingData;
    id _editingData;
    float _rightMargin;
    int _indentationLevel;
    float _indentationWidth;
    NSString *_reuseIdentifier;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIView *_backgroundView;
    UIView *_selectedBackgroundView;
    UIView *_multipleSelectionBackgroundView;
    UIView *_selectedOverlayView;
    float _selectionFadeDuration;
    UIColor *_backgroundColor;
    UIColor *_separatorColor;
    UIVisualEffect *_separatorEffect;
    UIColor *_topShadowColor;
    UIColor *_bottomShadowColor;
    UIColor *_sectionBorderColor;
    UIView *_floatingSeparatorView;
    UIView *_topShadowAnimationView;
    UIView *_bottomShadowAnimationView;
    id _badge;
    struct __CFDictionary *_unhighlightedStates;
    id _highlightingSupport;
    id _selectionSegueTemplate;
    id _accessoryActionSegueTemplate;
    UIControl *_accessoryView;
    UIControl *_editingAccessoryView;
    UIView *_customAccessoryView;
    UIView *_customEditingAccessoryView;
    _UITableViewCellSeparatorView *_separatorView;
    _UITableViewCellSeparatorView *_topSeparatorView;
    UIView *_topShadowView;
    UITextField *_editableTextField;
    double _lastSelectionTime;
    NSTimer *_deselectTimer;
    float _textFieldOffset;
    float _indexBarWidth;
    struct UIEdgeInsets _separatorInset;
    struct UIEdgeInsets _backgroundInset;
    SEL _returnAction;
    UIColor *_selectionTintColor;
    UIColor *_accessoryTintColor;
    UIImage *_reorderControlImage;
    UILongPressGestureRecognizer *_menuGesture;
    NSIndexPath *_representedIndexPath;
    BOOL _isPigglyWigglyCell;
    BOOL _focusable;
    UITableViewCellDeleteConfirmationView *_swipeToDeleteConfirmationView;
    UITapGestureRecognizer *_swipeToDeleteCancelationGesture;
    UIView *_clearBlendingView;
    float _swipeToDeleteDistancePulled;
    float _sectionCornerRadius;
    float _sectionBorderWidth;
    float _defaultMarginWidth;
    struct {
        unsigned int showingDeleteConfirmation:1;
        unsigned int separatorStyle:3;
        unsigned int selectionStyle:3;
        unsigned int selectionFadeFraction:11;
        unsigned int editing:1;
        unsigned int editingStyle:3;
        unsigned int accessoryType:3;
        unsigned int editingAccessoryType:3;
        unsigned int showsAccessoryWhenEditing:1;
        unsigned int showsReorderControl:1;
        unsigned int showDisclosure:1;
        unsigned int showTopSeparator:1;
        unsigned int hideTopSeparatorDuringReordering:1;
        unsigned int disclosureClickable:1;
        unsigned int disclosureStyle:1;
        unsigned int showingRemoveControl:1;
        unsigned int sectionLocation:3;
        unsigned int tableViewStyle:1;
        unsigned int shouldIndentWhileEditing:1;
        unsigned int fontSet:1;
        unsigned int usingDefaultSelectedBackgroundView:1;
        unsigned int wasSwiped:1;
        unsigned int highlighted:1;
        unsigned int separatorDirty:1;
        unsigned int drawn:1;
        unsigned int drawingDisabled:1;
        unsigned int style:12;
        unsigned int showingMenu:1;
        unsigned int clipsContents:1;
        unsigned int animatingSelection:1;
        unsigned int backgroundColorSet:1;
        unsigned int needsSetup:1;
        unsigned int dontDrawTopShadow:1;
        unsigned int usingMultiselectbackgroundView:1;
        unsigned int layoutLoopCounter:2;
        unsigned int isPigglyWigglyCell;
        unsigned int deleteAnimationInProgress:1;
        unsigned int deleteCancelationAnimationInProgress:1;
        unsigned int animating:1;
        unsigned int shouldHaveFullLengthBottomSeparator:1;
        unsigned int shouldHaveFullLengthTopSeparator:1;
        unsigned int drawsSeparatorAtTopOfSection:1;
        unsigned int drawsSeparatorAtBottomOfSection:1;
        unsigned int separatorBackdropOverlayBlendMode:3;
        unsigned int separatorDrawsInVibrantLightMode:1;
        unsigned int separatorHidden:1;
        unsigned int hidingSeparatorsForSelection:1;
        unsigned int clippedBeforeSwiping:1;
        unsigned int allowsReorderingWhenNotEditing:1;
        unsigned int needsHeightCalculation:1;
    } _tableCellFlags;
}

+ (id)_defaultTopShadowColor;
+ (void)_initializeForIdiom:(int)arg1;
+ (void)initialize;
- (void)_setAllowsReorderingWhenNotEditing:(BOOL)arg1;
- (BOOL)_allowsReorderingWhenNotEditing;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)_usesRoundedGroups;
- (BOOL)_separatorHidden;
- (void)_setSeparatorHidden:(BOOL)arg1;
- (float)_sectionBorderWidth;
- (void)_setSectionBorderWidth:(float)arg1;
- (struct UIEdgeInsets)_backgroundInset;
- (void)_setBackgroundInset:(struct UIEdgeInsets)arg1;
- (void)_setIndexBarWidth:(float)arg1;
- (float)_indexBarWidth;
- (void)_setSeparatorEffect:(id)arg1;
- (id)_separatorEffect;
- (int)_separatorBackdropOverlayBlendMode;
- (void)_setSeparatorBackdropOverlayBlendMode:(int)arg1;
- (BOOL)_separatorDrawsInVibrantLightMode;
- (void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg1;
- (void)_setSeparatorDrawsInVibrantLightModeUIAppearance:(id)arg1;
@property(nonatomic) struct UIEdgeInsets separatorInset;
- (BOOL)_isAnimating;
- (void)_setAnimating:(BOOL)arg1;
- (void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2;
- (SEL)returnAction;
- (void)setReturnAction:(SEL)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)setPlaceHolderValue:(id)arg1;
- (float)textFieldOffset;
- (void)setTextFieldOffset:(float)arg1;
- (id)editableTextField;
- (void)_actionButtonPushed:(id)arg1;
- (void)_swipeAccessoryButtonPushed;
- (void)_swipeDeleteButtonPushed;
- (void)_updateViewsForDeleteButton;
- (void)_setDeleteAnimationInProgress:(BOOL)arg1;
- (BOOL)_isDeleteAnimationInProgress;
- (id)_deleteConfirmationView;
- (BOOL)_isDeleteCancelationAnimationInProgress;
- (void)_setDeleteCancelationAnimationInProgress:(BOOL)arg1;
- (void)_updateSwipeWithDistancePulled:(float)arg1;
- (void)_handleSwipeDeleteCancelation:(id)arg1;
- (void)_beginSwiping;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_tableViewDidUpdateMarginWidth;
- (void)_updateSeparatorContent:(BOOL)arg1;
- (void)_focusStateDidChange;
- (BOOL)_isFocusableElement;
- (void)_setIsPigglyWigglyCell:(BOOL)arg1;
- (BOOL)_isPigglyWigglyCell;
- (float)_defaultMarginWidth;
- (void)_setDefaultMarginWidth:(float)arg1;
- (void)_setRightMarginWidth:(float)arg1;
- (float)_rightMarginWidth;
- (void)_setMarginWidth:(float)arg1;
- (float)_marginWidth;
- (void)_setFocusable:(BOOL)arg1;
- (BOOL)_isFocusable;
- (void)_setIndexPath:(id)arg1;
- (id)_indexPath;
- (BOOL)_isUsingOldStyleMultiselection;
- (BOOL)_shouldSaveOpaqueStateForView:(id)arg1;
- (BOOL)_isMultiselecting;
- (void)_setMultiselecting:(BOOL)arg1;
- (void)_multiselectColorChanged;
- (void)_startToEditTextField;
- (id)_scriptingInfo;
- (void)setTableViewStyle:(int)arg1;
- (int)tableViewStyle;
- (void)removeControl:(id)arg1 wasCanceledForTarget:(id)arg2;
- (struct CGRect)removeControl:(id)arg1 endFrameForTarget:(id)arg2;
- (struct CGRect)removeControl:(id)arg1 startFrameForTarget:(id)arg2;
- (void)_setDrawsTopShadow:(BOOL)arg1;
- (BOOL)_drawsTopShadow;
- (BOOL)_needsHeightCalculation;
- (void)_setNeedsHeightCalculation:(BOOL)arg1;
- (BOOL)_needsSetup;
- (void)_setNeedsSetup:(BOOL)arg1;
- (void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (SEL)_accessoryAction;
- (void)_setAccessoryAction:(SEL)arg1;
- (id)_target;
- (void)_setTarget:(id)arg1;
- (BOOL)wasSwiped;
- (void)setWasSwiped:(BOOL)arg1;
- (BOOL)_hasEditingAccessoryView;
- (BOOL)_hasAccessoryView;
- (id)_titleForDeleteConfirmationButton;
- (id)_topShadowView:(BOOL)arg1;
- (id)_selectedBackgroundView:(BOOL)arg1;
- (id)_backgroundView:(BOOL)arg1;
- (id)_customEditingAccessoryView:(BOOL)arg1;
- (id)_customAccessoryView:(BOOL)arg1;
- (id)_editingAccessoryView:(BOOL)arg1;
- (id)_accessoryView:(BOOL)arg1;
- (id)_defaultAccessoryView;
- (id)_newAccessoryView:(BOOL)arg1;
- (void)removeEditingData;
- (id)editingData:(BOOL)arg1;
- (float)_editingButtonOffset;
- (BOOL)_isReorderable;
- (void)deleteConfirmationControlWasCancelled:(id)arg1;
- (void)deleteConfirmationControlWasClicked:(id)arg1;
- (void)editControlWasClicked:(id)arg1;
- (void)removeControlWillHideRemoveConfirmation:(id)arg1;
- (void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2;
- (void)removeControl:(id)arg1 willRemoveTarget:(id)arg2;
- (void)_willBeDeleted;
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1;
- (void)_grabberReleased:(id)arg1;
- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2;
- (void)_grabberBeganReorder:(id)arg1;
- (id)_removeControl;
- (void)_removeInnerShadow;
- (void)_animateInnerShadowForInsertion:(BOOL)arg1 withRowAnimation:(int)arg2;
- (void)_removeFloatingSeparator;
- (void)_animateFloatingSeparatorForInsertion:(BOOL)arg1 withRowAnimation:(int)arg2;
- (void)_drawSeparatorInRect:(struct CGRect)arg1;
- (void)_setDrawsTopSeparator:(BOOL)arg1;
- (void)_setShouldIndentWhileEditing:(BOOL)arg1;
- (void)_setShowingDeleteConfirmation:(BOOL)arg1;
- (void)_setEditingStyle:(int)arg1;
- (id)_reorderControlImage;
- (void)_setReorderControlImage:(id)arg1;
- (id)_badge:(BOOL)arg1;
- (id)_imageView:(BOOL)arg1;
- (id)_editableTextField:(BOOL)arg1;
- (id)_detailTextLabel:(BOOL)arg1;
- (id)_textLabel:(BOOL)arg1;
- (id)_tableView;
- (void)_setTableView:(id)arg1;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (void)_updateFullWidthSwipeDeletionView;
- (BOOL)canBecomeFirstResponder;
- (void)_setSectionLocation:(int)arg1 animated:(BOOL)arg2 forceBackgroundSetup:(BOOL)arg3;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)setSectionLocation:(int)arg1;
- (void)_setupSelectedBackgroundView;
- (int)sectionLocation;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)_insetsBackground;
- (struct CGRect)contentRectForState:(unsigned int)arg1;
- (void)didTransitionToState:(unsigned int)arg1;
- (void)_didTransitionToState:(unsigned int)arg1;
- (void)willTransitionToState:(unsigned int)arg1;
- (void)_willTransitionToState:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)_setHiddenForReuse:(BOOL)arg1;
- (void)_updateCellMaskViewsForView:(id)arg1 backdropView:(id)arg2;
- (void)removeFromSuperview;
- (SEL)accessoryAction;
- (void)setAccessoryAction:(SEL)arg1;
- (SEL)editAction;
- (void)setEditAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)reorderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)accessoryRectForBounds:(struct CGRect)arg1 accessoryView:(id)arg2 isCustom:(BOOL)arg3;
- (struct CGRect)editRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)textRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_delegateConfirmationRect;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) BOOL showingDeleteConfirmation;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
@property(nonatomic, getter=isEditing) BOOL editing;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (float)selectionFadeDuration;
- (void)setSelectionFadeDuration:(float)arg1;
- (BOOL)clipsContents;
- (void)setClipsContents:(BOOL)arg1;
- (unsigned int)currentStateMask;
@property(nonatomic) float indentationWidth;
@property(nonatomic) int indentationLevel;
- (BOOL)hidesAccessoryWhenEditing;
- (void)setHidesAccessoryWhenEditing:(BOOL)arg1;
@property(retain, nonatomic) UIView *editingAccessoryView;
@property(nonatomic) int editingAccessoryType;
- (id)_accessoryTintColor;
- (void)_setAccessoryTintColor:(id)arg1;
@property(retain, nonatomic) UIView *accessoryView;
@property(nonatomic) int accessoryType;
- (void)_syncAccessoryViewsIfNecessary;
@property(nonatomic) BOOL shouldIndentWhileEditing;
@property(nonatomic) BOOL showsReorderControl;
- (void)_setShowsReorderControl:(BOOL)arg1;
@property(readonly, nonatomic) int editingStyle;
- (void)setEditingStyle:(int)arg1;
- (int)style;
- (id)selectedOverlayView;
- (id)layoutManager;
- (void)setLayoutManager:(id)arg1;
- (void)_drawContentInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (void)_updateHighlightColors;
- (BOOL)_isHighlighted;
- (float)selectionPercent;
- (BOOL)isAtLeastHalfSelected;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_delayedDeselect;
- (void)_deselectAnimationFinished;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_cancelInternalPerformRequests;
- (void)showSelectedBackgroundView:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
@property(nonatomic, getter=isSelected) BOOL selected;
- (id)selectionTintColor;
- (void)setSelectionTintColor:(id)arg1;
@property(nonatomic) int selectionStyle;
- (void)_setSelectionStyle:(int)arg1 selectionTintColor:(id)arg2;
- (void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2;
- (id)_multiselectBackgroundColor;
- (void)_clearOpaqueViewState:(id)arg1;
- (void)_saveOpaqueViewState:(id)arg1;
- (void)prepareForReuse;
@property(readonly, copy, nonatomic) NSString *reuseIdentifier;
- (void)setReuseIdentifier:(id)arg1;
- (void)setSectionBorderColor:(id)arg1;
- (id)sectionBorderColor;
- (id)bottomShadowColor;
- (void)setBottomShadowColor:(id)arg1;
- (id)topShadowColor;
- (void)setTopShadowColor:(id)arg1;
- (id)separatorColor;
- (void)setSeparatorColor:(id)arg1;
- (id)tableBackgroundColor;
- (void)setTableBackgroundColor:(id)arg1;
- (BOOL)_backgroundColorSet;
- (id)_contentBackgroundColor;
- (void)_setTableBackgroundCGColor:(struct CGColor *)arg1 withSystemColorName:(id)arg2;
- (int)separatorStyle;
- (void)setSeparatorStyle:(int)arg1;
@property(retain, nonatomic) UIView *selectedBackgroundView;
@property(retain, nonatomic) UIView *multipleSelectionBackgroundView;
- (void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2;
- (void)selectedBackgroundViewChange:(id)arg1 finished:(id)arg2 context:(id)arg3;
@property(retain, nonatomic) UIView *backgroundView;
@property(readonly, retain, nonatomic) UIView *contentView;
- (id)_badgeText;
- (void)_setBadgeText:(id)arg1;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)selectedTextColor;
- (void)setSelectedTextColor:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (int)lineBreakMode;
- (void)setLineBreakMode:(int)arg1;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)_setFont:(id)arg1 layout:(BOOL)arg2;
- (id)text;
- (void)setText:(id)arg1;
@property(readonly, retain, nonatomic) UIImageView *imageView;
@property(readonly, retain, nonatomic) UILabel *detailTextLabel;
@property(readonly, retain, nonatomic) UILabel *textLabel;
- (BOOL)_canDrawContent;
- (void)setDrawingEnabled:(BOOL)arg1;
- (BOOL)drawingEnabled;
- (void)_didCreateContentView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)_setupMenuGesture;
- (void)_endSwiping:(BOOL)arg1;
- (void)_systemTextSizeChanged;
- (void)_setupTableViewCellCommon;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (BOOL)_drawsSeparatorAtBottomOfSection;
- (void)_setDrawsSeparatorAtBottomOfSection:(BOOL)arg1;
- (BOOL)_drawsSeparatorAtTopOfSection;
- (void)_setDrawsSeparatorAtTopOfSection:(BOOL)arg1;
- (void)_updateSeparatorContent;
- (BOOL)_shouldHideSeparator;
- (struct CGRect)_topSeparatorFrame;
- (BOOL)_showFullLengthTopSeparatorForTopOfSection;
- (BOOL)_showSeparatorAtTopOfSection;
- (struct CGRect)_separatorFrame;
- (float)_separatorHeight;
- (BOOL)_shouldHaveFullLengthTopSeparator;
- (void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1;
- (BOOL)_shouldHaveFullLengthBottomSeparator;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1;
- (id)selectionSegueTemplate;
- (void)setSelectionSegueTemplate:(id)arg1;
- (id)accessoryActionSegueTemplate;
- (void)setAccessoryActionSegueTemplate:(id)arg1;
- (void)_setDrawsTopSeparatorDuringReordering:(BOOL)arg1;
- (BOOL)_drawsTopSeparatorDuringReordering;
- (void)_setReordering:(BOOL)arg1;
- (void)_resetSelectionTimer;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_menuDismissed:(id)arg1;
- (void)_topShadowDidFadeOut;
- (void)_updateTopShadowView:(BOOL)arg1;
- (void)_updateContentClip;
- (void)_longPressGestureRecognized:(id)arg1;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_editingTransitionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (struct CGSize)_imageInsetSize;
- (struct CGSize)_textInsetSize;
- (id)_badge;
- (id)_imageView;
- (id)_editableTextField;
- (void)_contentViewLabelTextDidChange:(id)arg1;
- (void)_releaseDetailTextLabel;
- (void)_releaseTextLabel;
- (id)_detailTextLabel;
- (id)_textLabel;
- (id)_defaultFont;
- (void)_showReorderControl;
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)arg1;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (BOOL)_isCurrentlyConsideredHighlighted;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2;
- (void)_layoutSubviewsAnimated:(BOOL)arg1;
- (id)_layoutDebuggingTitle;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)setNeedsUpdateConstraints;
- (void)_removeRemoveControl;
- (void)_releaseRemoveControl;
- (id)_createRemoveControlForStyle:(int)arg1;
- (id)_currentAccessoryView:(BOOL)arg1;
- (id)_disclosurePressedImage:(BOOL)arg1;
- (id)_disclosureImage:(BOOL)arg1;
- (id)_disclosureChevronImage:(BOOL)arg1;
- (id)_checkmarkImage:(BOOL)arg1;
- (id)_detailDisclosureImage:(BOOL)arg1;
- (id)_tintedDisclosureImagePressed:(BOOL)arg1;
- (void)_finishedFadingGrabber:(id)arg1 finished:(BOOL)arg2;
- (void)_setGrabberHidden:(BOOL)arg1;
- (void)_releaseReorderingControl;
- (id)_reorderingSeparatorView;
- (id)_reorderingControl;
- (void)_createReorderControlIfNeeded;
- (void)setOldEditingData:(id)arg1;
- (id)oldEditingData;
- (id)_swipeToDeleteConfirmationView;
- (BOOL)_isInModalViewController;
- (int)_popoverControllerStyle;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
