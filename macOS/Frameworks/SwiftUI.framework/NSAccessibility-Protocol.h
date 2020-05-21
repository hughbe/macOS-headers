//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SwiftUI/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSData, NSString, NSURL;

@protocol NSAccessibility <NSObject>
- (void)setAccessibilityCustomActions:(NSArray *)arg1;
- (NSArray *)accessibilityCustomActions;
- (void)setAccessibilityMinimized:(BOOL)arg1;
- (BOOL)isAccessibilityMinimized;
- (void)setAccessibilityMinimizeButton:(id)arg1;
- (id)accessibilityMinimizeButton;
- (void)setAccessibilityZoomButton:(id)arg1;
- (id)accessibilityZoomButton;
- (void)setAccessibilityCloseButton:(id)arg1;
- (id)accessibilityCloseButton;
- (void)setAccessibilityDefaultButton:(id)arg1;
- (id)accessibilityDefaultButton;
- (void)setAccessibilityDocument:(NSString *)arg1;
- (NSString *)accessibilityDocument;
- (void)setAccessibilityGrowArea:(id)arg1;
- (id)accessibilityGrowArea;
- (void)setAccessibilityFullScreenButton:(id)arg1;
- (id)accessibilityFullScreenButton;
- (void)setAccessibilityMain:(BOOL)arg1;
- (BOOL)isAccessibilityMain;
- (void)setAccessibilityProxy:(id)arg1;
- (id)accessibilityProxy;
- (void)setAccessibilityModal:(BOOL)arg1;
- (BOOL)isAccessibilityModal;
- (void)setAccessibilityToolbarButton:(id)arg1;
- (id)accessibilityToolbarButton;
- (void)setAccessibilitySelectedTextRanges:(NSArray *)arg1;
- (NSArray *)accessibilitySelectedTextRanges;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilitySelectedTextRange;
- (void)setAccessibilitySelectedText:(NSString *)arg1;
- (NSString *)accessibilitySelectedText;
- (void)setAccessibilityNumberOfCharacters:(long long)arg1;
- (long long)accessibilityNumberOfCharacters;
- (void)setAccessibilityVisibleCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (void)setAccessibilitySharedTextUIElements:(NSArray *)arg1;
- (NSArray *)accessibilitySharedTextUIElements;
- (void)setAccessibilitySharedCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilitySharedCharacterRange;
- (void)setAccessibilityInsertionPointLineNumber:(long long)arg1;
- (long long)accessibilityInsertionPointLineNumber;
- (void)setAccessibilityColumnIndexRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityColumnIndexRange;
- (void)setAccessibilityRowIndexRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRowIndexRange;
- (void)setAccessibilityColumnHeaderUIElements:(NSArray *)arg1;
- (NSArray *)accessibilityColumnHeaderUIElements;
- (void)setAccessibilityVisibleCells:(NSArray *)arg1;
- (NSArray *)accessibilityVisibleCells;
- (void)setAccessibilitySelectedCells:(NSArray *)arg1;
- (NSArray *)accessibilitySelectedCells;
- (void)setAccessibilityRowHeaderUIElements:(NSArray *)arg1;
- (NSArray *)accessibilityRowHeaderUIElements;
- (void)setAccessibilitySortDirection:(long long)arg1;
- (long long)accessibilitySortDirection;
- (void)setAccessibilitySelectedColumns:(NSArray *)arg1;
- (NSArray *)accessibilitySelectedColumns;
- (void)setAccessibilityVisibleColumns:(NSArray *)arg1;
- (NSArray *)accessibilityVisibleColumns;
- (void)setAccessibilitySelectedRows:(NSArray *)arg1;
- (NSArray *)accessibilitySelectedRows;
- (void)setAccessibilityVisibleRows:(NSArray *)arg1;
- (NSArray *)accessibilityVisibleRows;
- (void)setAccessibilityRows:(NSArray *)arg1;
- (NSArray *)accessibilityRows;
- (void)setAccessibilityColumns:(NSArray *)arg1;
- (NSArray *)accessibilityColumns;
- (void)setAccessibilityIndex:(long long)arg1;
- (long long)accessibilityIndex;
- (void)setAccessibilityRowCount:(long long)arg1;
- (long long)accessibilityRowCount;
- (void)setAccessibilityColumnCount:(long long)arg1;
- (long long)accessibilityColumnCount;
- (void)setAccessibilityHeader:(id)arg1;
- (id)accessibilityHeader;
- (void)setAccessibilityTabs:(NSArray *)arg1;
- (NSArray *)accessibilityTabs;
- (void)setAccessibilityIncrementButton:(id)arg1;
- (id)accessibilityIncrementButton;
- (void)setAccessibilityDecrementButton:(id)arg1;
- (id)accessibilityDecrementButton;
- (void)setAccessibilitySplitters:(NSArray *)arg1;
- (NSArray *)accessibilitySplitters;
- (void)setAccessibilityLabelValue:(float)arg1;
- (float)accessibilityLabelValue;
- (void)setAccessibilityLabelUIElements:(NSArray *)arg1;
- (NSArray *)accessibilityLabelUIElements;
- (void)setAccessibilityAllowedValues:(NSArray *)arg1;
- (NSArray *)accessibilityAllowedValues;
- (void)setAccessibilityVerticalScrollBar:(id)arg1;
- (id)accessibilityVerticalScrollBar;
- (void)setAccessibilityHorizontalScrollBar:(id)arg1;
- (id)accessibilityHorizontalScrollBar;
- (void)setAccessibilityMarkerTypeDescription:(NSString *)arg1;
- (NSString *)accessibilityMarkerTypeDescription;
- (void)setAccessibilityRulerMarkerType:(long long)arg1;
- (long long)accessibilityRulerMarkerType;
- (void)setAccessibilityUnitDescription:(NSString *)arg1;
- (NSString *)accessibilityUnitDescription;
- (void)setAccessibilityUnits:(long long)arg1;
- (long long)accessibilityUnits;
- (void)setAccessibilityMarkerGroupUIElement:(id)arg1;
- (id)accessibilityMarkerGroupUIElement;
- (void)setAccessibilityMarkerValues:(id)arg1;
- (id)accessibilityMarkerValues;
- (void)setAccessibilityMarkerUIElements:(NSArray *)arg1;
- (NSArray *)accessibilityMarkerUIElements;
- (void)setAccessibilityDisclosureLevel:(long long)arg1;
- (long long)accessibilityDisclosureLevel;
- (void)setAccessibilityDisclosedRows:(id)arg1;
- (id)accessibilityDisclosedRows;
- (void)setAccessibilityDisclosedByRow:(id)arg1;
- (id)accessibilityDisclosedByRow;
- (void)setAccessibilityDisclosed:(BOOL)arg1;
- (BOOL)isAccessibilityDisclosed;
- (void)setAccessibilityCriticalValue:(id)arg1;
- (id)accessibilityCriticalValue;
- (void)setAccessibilityWarningValue:(id)arg1;
- (id)accessibilityWarningValue;
- (void)setAccessibilityHandles:(NSArray *)arg1;
- (NSArray *)accessibilityHandles;
- (void)setAccessibilityVerticalUnitDescription:(NSString *)arg1;
- (NSString *)accessibilityVerticalUnitDescription;
- (void)setAccessibilityHorizontalUnitDescription:(NSString *)arg1;
- (NSString *)accessibilityHorizontalUnitDescription;
- (void)setAccessibilityVerticalUnits:(long long)arg1;
- (long long)accessibilityVerticalUnits;
- (void)setAccessibilityHorizontalUnits:(long long)arg1;
- (long long)accessibilityHorizontalUnits;
- (void)setAccessibilityOrderedByRow:(BOOL)arg1;
- (BOOL)isAccessibilityOrderedByRow;
- (void)setAccessibilityColumnTitles:(NSArray *)arg1;
- (NSArray *)accessibilityColumnTitles;
- (void)setAccessibilityMenuBar:(id)arg1;
- (id)accessibilityMenuBar;
- (void)setAccessibilityExtrasMenuBar:(id)arg1;
- (id)accessibilityExtrasMenuBar;
- (void)setAccessibilityWindows:(NSArray *)arg1;
- (NSArray *)accessibilityWindows;
- (void)setAccessibilityFocusedWindow:(id)arg1;
- (id)accessibilityFocusedWindow;
- (void)setAccessibilityFrontmost:(BOOL)arg1;
- (BOOL)isAccessibilityFrontmost;
- (void)setAccessibilityHidden:(BOOL)arg1;
- (BOOL)isAccessibilityHidden;
- (void)setAccessibilityMainWindow:(id)arg1;
- (id)accessibilityMainWindow;
- (void)setAccessibilityApplicationFocusedUIElement:(id)arg1;
- (id)accessibilityApplicationFocusedUIElement;
- (void)setAccessibilityCustomRotors:(NSArray *)arg1;
- (NSArray *)accessibilityCustomRotors;
- (void)setAccessibilityRequired:(BOOL)arg1;
- (BOOL)isAccessibilityRequired;
- (void)setAccessibilitySharedFocusElements:(NSArray *)arg1;
- (NSArray *)accessibilitySharedFocusElements;
- (void)setAccessibilityAlternateUIVisible:(BOOL)arg1;
- (BOOL)isAccessibilityAlternateUIVisible;
- (void)setAccessibilityLabel:(NSString *)arg1;
- (NSString *)accessibilityLabel;
- (void)setAccessibilityContents:(NSArray *)arg1;
- (NSArray *)accessibilityContents;
- (void)setAccessibilityProtectedContent:(BOOL)arg1;
- (BOOL)isAccessibilityProtectedContent;
- (void)setAccessibilityCancelButton:(id)arg1;
- (id)accessibilityCancelButton;
- (void)setAccessibilityClearButton:(id)arg1;
- (id)accessibilityClearButton;
- (void)setAccessibilityChildrenInNavigationOrder:(NSArray *)arg1;
- (NSArray *)accessibilityChildrenInNavigationOrder;
- (void)setAccessibilityChildren:(NSArray *)arg1;
- (NSArray *)accessibilityChildren;
- (void)setAccessibilityEnabled:(BOOL)arg1;
- (BOOL)isAccessibilityEnabled;
- (void)setAccessibilityEdited:(BOOL)arg1;
- (BOOL)isAccessibilityEdited;
- (void)setAccessibilityExpanded:(BOOL)arg1;
- (BOOL)isAccessibilityExpanded;
- (void)setAccessibilityFilename:(NSString *)arg1;
- (NSString *)accessibilityFilename;
- (void)setAccessibilityHelp:(NSString *)arg1;
- (NSString *)accessibilityHelp;
- (void)setAccessibilityIdentifier:(NSString *)arg1;
- (NSString *)accessibilityIdentifier;
- (void)setAccessibilityWindow:(id)arg1;
- (id)accessibilityWindow;
- (void)setAccessibilityLinkedUIElements:(NSArray *)arg1;
- (NSArray *)accessibilityLinkedUIElements;
- (void)setAccessibilityMaxValue:(id)arg1;
- (id)accessibilityMaxValue;
- (void)setAccessibilityMinValue:(id)arg1;
- (id)accessibilityMinValue;
- (void)setAccessibilityShownMenu:(id)arg1;
- (id)accessibilityShownMenu;
- (void)setAccessibilityServesAsTitleForUIElements:(NSArray *)arg1;
- (NSArray *)accessibilityServesAsTitleForUIElements;
- (void)setAccessibilitySelectedChildren:(NSArray *)arg1;
- (NSArray *)accessibilitySelectedChildren;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (BOOL)isAccessibilitySelected;
- (void)setAccessibilitySearchMenu:(id)arg1;
- (id)accessibilitySearchMenu;
- (void)setAccessibilitySearchButton:(id)arg1;
- (id)accessibilitySearchButton;
- (void)setAccessibilityRoleDescription:(NSString *)arg1;
- (NSString *)accessibilityRoleDescription;
- (void)setAccessibilityRole:(NSString *)arg1;
- (NSString *)accessibilityRole;
- (void)setAccessibilityPreviousContents:(NSArray *)arg1;
- (NSArray *)accessibilityPreviousContents;
- (void)setAccessibilityPlaceholderValue:(NSString *)arg1;
- (NSString *)accessibilityPlaceholderValue;
- (void)setAccessibilityParent:(id)arg1;
- (id)accessibilityParent;
- (void)setAccessibilityOverflowButton:(id)arg1;
- (id)accessibilityOverflowButton;
- (void)setAccessibilityOrientation:(long long)arg1;
- (long long)accessibilityOrientation;
- (void)setAccessibilityNextContents:(NSArray *)arg1;
- (NSArray *)accessibilityNextContents;
- (void)setAccessibilityTitleUIElement:(id)arg1;
- (id)accessibilityTitleUIElement;
- (void)setAccessibilityTitle:(NSString *)arg1;
- (NSString *)accessibilityTitle;
- (void)setAccessibilitySubrole:(NSString *)arg1;
- (NSString *)accessibilitySubrole;
- (void)setAccessibilityVisibleChildren:(NSArray *)arg1;
- (NSArray *)accessibilityVisibleChildren;
- (void)setAccessibilityValueDescription:(NSString *)arg1;
- (NSString *)accessibilityValueDescription;
- (void)setAccessibilityValue:(id)arg1;
- (id)accessibilityValue;
- (void)setAccessibilityURL:(NSURL *)arg1;
- (NSURL *)accessibilityURL;
- (void)setAccessibilityTopLevelUIElement:(id)arg1;
- (id)accessibilityTopLevelUIElement;
- (void)setAccessibilityActivationPoint:(struct CGPoint)arg1;
- (struct CGPoint)accessibilityActivationPoint;
- (void)setAccessibilityFocused:(BOOL)arg1;
- (BOOL)isAccessibilityFocused;
- (void)setAccessibilityFrame:(struct CGRect)arg1;
- (struct CGRect)accessibilityFrame;
- (void)setAccessibilityElement:(BOOL)arg1;
- (BOOL)isAccessibilityElement;
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

