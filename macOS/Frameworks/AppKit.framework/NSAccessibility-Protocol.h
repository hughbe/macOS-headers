//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString, NSData, NSString, NSURL;

@protocol NSAccessibility <NSObject>
@property(getter=isAccessibilityMinimized) BOOL accessibilityMinimized;
@property(retain) id accessibilityMinimizeButton;
@property(retain) id accessibilityZoomButton;
@property(retain) id accessibilityCloseButton;
@property(retain) id accessibilityDefaultButton;
@property(copy) NSString *accessibilityDocument;
@property(retain) id accessibilityGrowArea;
@property(retain) id accessibilityFullScreenButton;
@property(getter=isAccessibilityMain) BOOL accessibilityMain;
@property(retain) id accessibilityProxy;
@property(getter=isAccessibilityModal) BOOL accessibilityModal;
@property(retain) id accessibilityToolbarButton;
@property(copy) NSArray *accessibilitySelectedTextRanges;
@property struct _NSRange accessibilitySelectedTextRange;
@property(copy) NSString *accessibilitySelectedText;
@property long long accessibilityNumberOfCharacters;
@property struct _NSRange accessibilityVisibleCharacterRange;
@property(copy) NSArray *accessibilitySharedTextUIElements;
@property struct _NSRange accessibilitySharedCharacterRange;
@property long long accessibilityInsertionPointLineNumber;
@property struct _NSRange accessibilityColumnIndexRange;
@property struct _NSRange accessibilityRowIndexRange;
@property(copy) NSArray *accessibilityColumnHeaderUIElements;
@property(copy) NSArray *accessibilityVisibleCells;
@property(copy) NSArray *accessibilitySelectedCells;
@property(copy) NSArray *accessibilityRowHeaderUIElements;
@property long long accessibilitySortDirection;
@property(copy) NSArray *accessibilitySelectedColumns;
@property(copy) NSArray *accessibilityVisibleColumns;
@property(copy) NSArray *accessibilitySelectedRows;
@property(copy) NSArray *accessibilityVisibleRows;
@property(copy) NSArray *accessibilityRows;
@property(copy) NSArray *accessibilityColumns;
@property long long accessibilityIndex;
@property long long accessibilityRowCount;
@property long long accessibilityColumnCount;
@property(retain) id accessibilityHeader;
@property(copy) NSArray *accessibilityTabs;
@property(retain) id accessibilityIncrementButton;
@property(retain) id accessibilityDecrementButton;
@property(copy) NSArray *accessibilitySplitters;
@property float accessibilityLabelValue;
@property(copy) NSArray *accessibilityLabelUIElements;
@property(copy) NSArray *accessibilityAllowedValues;
@property(retain) id accessibilityVerticalScrollBar;
@property(retain) id accessibilityHorizontalScrollBar;
@property(copy) NSString *accessibilityMarkerTypeDescription;
@property long long accessibilityRulerMarkerType;
@property(copy) NSString *accessibilityUnitDescription;
@property long long accessibilityUnits;
@property(retain) id accessibilityMarkerGroupUIElement;
@property(retain) id accessibilityMarkerValues;
@property(copy) NSArray *accessibilityMarkerUIElements;
@property long long accessibilityDisclosureLevel;
@property(retain) id accessibilityDisclosedRows;
@property __weak id accessibilityDisclosedByRow;
@property(getter=isAccessibilityDisclosed) BOOL accessibilityDisclosed;
@property(retain) id accessibilityCriticalValue;
@property(retain) id accessibilityWarningValue;
@property(copy) NSArray *accessibilityHandles;
@property(copy) NSString *accessibilityVerticalUnitDescription;
@property(copy) NSString *accessibilityHorizontalUnitDescription;
@property long long accessibilityVerticalUnits;
@property long long accessibilityHorizontalUnits;
@property(getter=isAccessibilityOrderedByRow) BOOL accessibilityOrderedByRow;
@property(copy) NSArray *accessibilityColumnTitles;
@property __weak id accessibilityMenuBar;
@property __weak id accessibilityExtrasMenuBar;
@property(copy) NSArray *accessibilityWindows;
@property(retain) id accessibilityFocusedWindow;
@property(getter=isAccessibilityFrontmost) BOOL accessibilityFrontmost;
@property(getter=isAccessibilityHidden) BOOL accessibilityHidden;
@property(retain) id accessibilityMainWindow;
@property(retain) id accessibilityApplicationFocusedUIElement;
@property(getter=isAccessibilityRequired) BOOL accessibilityRequired;
@property(copy) NSArray *accessibilitySharedFocusElements;
@property(getter=isAccessibilityAlternateUIVisible) BOOL accessibilityAlternateUIVisible;
@property(copy) NSString *accessibilityLabel;
@property(copy) NSArray *accessibilityContents;
@property(getter=isAccessibilityProtectedContent) BOOL accessibilityProtectedContent;
@property(retain) id accessibilityCancelButton;
@property(retain) id accessibilityClearButton;
@property(copy) NSArray *accessibilityChildren;
@property(getter=isAccessibilityEnabled) BOOL accessibilityEnabled;
@property(getter=isAccessibilityEdited) BOOL accessibilityEdited;
@property(getter=isAccessibilityExpanded) BOOL accessibilityExpanded;
@property(copy) NSString *accessibilityFilename;
@property(copy) NSString *accessibilityHelp;
@property(copy) NSString *accessibilityIdentifier;
@property __weak id accessibilityWindow;
@property(copy) NSArray *accessibilityLinkedUIElements;
@property(retain) id accessibilityMaxValue;
@property(retain) id accessibilityMinValue;
@property(retain) id accessibilityShownMenu;
@property(copy) NSArray *accessibilityServesAsTitleForUIElements;
@property(copy) NSArray *accessibilitySelectedChildren;
@property(getter=isAccessibilitySelected) BOOL accessibilitySelected;
@property(retain) id accessibilitySearchMenu;
@property(retain) id accessibilitySearchButton;
@property(copy) NSString *accessibilityRoleDescription;
@property(copy) NSString *accessibilityRole;
@property(copy) NSArray *accessibilityPreviousContents;
@property(copy) NSString *accessibilityPlaceholderValue;
@property __weak id accessibilityParent;
@property(retain) id accessibilityOverflowButton;
@property long long accessibilityOrientation;
@property(copy) NSArray *accessibilityNextContents;
@property __weak id accessibilityTitleUIElement;
@property(copy) NSString *accessibilityTitle;
@property(copy) NSString *accessibilitySubrole;
@property(copy) NSArray *accessibilityVisibleChildren;
@property(copy) NSString *accessibilityValueDescription;
@property(retain) id accessibilityValue;
@property(copy) NSURL *accessibilityURL;
@property __weak id accessibilityTopLevelUIElement;
@property struct CGPoint accessibilityActivationPoint;
@property(getter=isAccessibilityFocused) BOOL accessibilityFocused;
@property struct CGRect accessibilityFrame;
@property(getter=isAccessibilityElement) BOOL accessibilityElement;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowAlternateUI;
- (BOOL)accessibilityPerformRaise;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformPick;
- (BOOL)accessibilityPerformIncrement;
- (BOOL)accessibilityPerformDelete;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformConfirm;
- (BOOL)accessibilityPerformCancel;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (struct _NSRange)accessibilityStyleRangeForIndex:(long long)arg1;
- (NSData *)accessibilityRTFForRange:(struct _NSRange)arg1;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForIndex:(long long)arg1;
- (struct _NSRange)accessibilityRangeForPosition:(struct CGPoint)arg1;
- (NSString *)accessibilityStringForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (NSAttributedString *)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (id)accessibilityCellForColumn:(long long)arg1 row:(long long)arg2;
- (struct CGSize)accessibilityScreenSizeForLayoutSize:(struct CGSize)arg1;
- (struct CGPoint)accessibilityScreenPointForLayoutPoint:(struct CGPoint)arg1;
- (struct CGSize)accessibilityLayoutSizeForScreenSize:(struct CGSize)arg1;
- (struct CGPoint)accessibilityLayoutPointForScreenPoint:(struct CGPoint)arg1;
@end

