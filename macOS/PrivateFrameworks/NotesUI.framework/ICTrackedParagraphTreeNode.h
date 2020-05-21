//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICTrackedParagraph, NSMutableArray, NSString;

@interface ICTrackedParagraphTreeNode : NSObject
{
    BOOL _checked;
    ICTrackedParagraph *_trackedParagraph;
    NSMutableArray *_children;
    ICTrackedParagraphTreeNode *_parent;
    long long _indent;
    NSString *_string;
}

+ (id)placeholderNodeWithIndentation:(unsigned long long)arg1;
+ (id)nodeFromTrackedParagraph:(id)arg1 textView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) long long indent; // @synthesize indent=_indent;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
@property(nonatomic) __weak ICTrackedParagraphTreeNode *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) ICTrackedParagraph *trackedParagraph; // @synthesize trackedParagraph=_trackedParagraph;
- (id)description;
- (void)recursivlyAddDescriptionToString:(id)arg1;
@property(readonly, nonatomic) NSString *recurisiveDescription;
- (void)recursivlyAddTrackedParagraphsToArray:(id)arg1;
- (id)linerizedRepresentation;
- (void)recursivlySortCheckedItemsToBottom;
- (void)addChild:(id)arg1;

@end

