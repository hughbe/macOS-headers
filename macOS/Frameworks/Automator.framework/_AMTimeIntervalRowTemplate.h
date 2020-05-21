//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton, NSString, NSTextField;

@interface _AMTimeIntervalRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_leftExpressionPopup;
    NSPopUpButton *_comparisonPopUpButton;
    NSTextField *_timeIntervalField;
    NSString *_name;
    NSString *_keyPath;
    BOOL _hasCreatedViews;
}

+ (id)templateWithName:(id)arg1 withKeyPath:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSTextField *timeIntervalField; // @synthesize timeIntervalField=_timeIntervalField;
@property(retain) NSPopUpButton *comparisonPopUpButton; // @synthesize comparisonPopUpButton=_comparisonPopUpButton;
@property(retain) NSPopUpButton *leftExpressionPopup; // @synthesize leftExpressionPopup=_leftExpressionPopup;
@property BOOL hasCreatedViews; // @synthesize hasCreatedViews=_hasCreatedViews;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) NSString *name; // @synthesize name=_name;
- (id)predicateWithSubpredicates:(id)arg1;
- (void)setPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;
- (id)templateViews;
- (id)convertToEvaluationPredicateFromUIPredicate:(id)arg1;
- (void)createViewsIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 withKeyPath:(id)arg2;

@end

