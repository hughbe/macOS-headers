//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, WDAContent, WDDocument, WDText;

__attribute__((visibility("hidden")))
@interface WDATextBox : NSObject
{
    WDText *mText;
    unsigned long long mNextTextBoxId;
    _Bool mOle;
    BOOL _isMultiColumn;
    WDDocument *mDocument;
    WDAContent *mParent;
    NSNumber *_flowSequence;
    NSNumber *_flowId;
}

- (void).cxx_destruct;
@property BOOL isMultiColumn; // @synthesize isMultiColumn=_isMultiColumn;
@property(retain) NSNumber *flowId; // @synthesize flowId=_flowId;
@property(retain) NSNumber *flowSequence; // @synthesize flowSequence=_flowSequence;
@property __weak WDAContent *parent; // @synthesize parent=mParent;
@property __weak WDDocument *document; // @synthesize document=mDocument;
- (id)description;
- (void)setNextTextBoxId:(unsigned long long)arg1;
- (unsigned long long)nextTextBoxId;
- (void)setText:(id)arg1;
- (id)text;
- (void)setOle:(BOOL)arg1;
- (BOOL)isOle;
- (id)init;

@end

