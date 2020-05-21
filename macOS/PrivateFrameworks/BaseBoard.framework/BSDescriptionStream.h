//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionFormatting-Protocol.h>
#import <BaseBoard/BSDescriptionStringAppendTarget-Protocol.h>

@class NSMutableString, NSString;

@interface BSDescriptionStream : NSObject <BSDescriptionStringAppendTarget, BSDescriptionFormatting>
{
    unsigned char _appendBuffer[1024];
    long long _appendBufferCount;
    BOOL _sortKeys;
    BOOL _verboseSingleItemCollections;
    NSMutableString *_string;
    long long _indentLevel;
    NSString *_pendingFieldTerminator;
    long long _emitPhase;
    long long _groupItemCount;
    long long _groupVerbosityOptions;
}

+ (id)descriptionForRootObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long groupVerbosityOptions; // @synthesize groupVerbosityOptions=_groupVerbosityOptions;
@property(nonatomic) long long groupItemCount; // @synthesize groupItemCount=_groupItemCount;
@property(nonatomic) long long emitPhase; // @synthesize emitPhase=_emitPhase;
@property(retain, nonatomic) NSString *pendingFieldTerminator; // @synthesize pendingFieldTerminator=_pendingFieldTerminator;
@property(nonatomic) long long indentLevel; // @synthesize indentLevel=_indentLevel;
@property(retain, nonatomic) NSMutableString *string; // @synthesize string=_string;
@property(nonatomic) BOOL verboseSingleItemCollections; // @synthesize verboseSingleItemCollections=_verboseSingleItemCollections;
@property(nonatomic) BOOL sortKeys; // @synthesize sortKeys=_sortKeys;
- (id)appendClass:(Class)arg1 withName:(id)arg2;
- (id)appendQueue:(id)arg1 withName:(id)arg2;
- (id)appendCString:(const char *)arg1 withName:(id)arg2;
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;
- (id)appendRect:(struct CGRect)arg1 withName:(id)arg2;
- (id)appendSize:(struct CGSize)arg1 withName:(id)arg2;
- (id)appendPoint:(struct CGPoint)arg1 withName:(id)arg2;
- (id)appendPointer:(void *)arg1 withName:(id)arg2;
- (id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(BOOL)arg3;
- (id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendFloat:(double)arg1 withName:(id)arg2;
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2;
- (id)appendInt64:(long long)arg1 withName:(id)arg2;
- (id)appendUnsignedInt:(unsigned int)arg1 withName:(id)arg2;
- (id)appendInt:(int)arg1 withName:(id)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;
- (id)appendInteger:(long long)arg1 withName:(id)arg2;
- (id)appendFlag:(long long)arg1 withName:(id)arg2 skipIfNotSet:(BOOL)arg3;
- (id)appendFlag:(long long)arg1 withName:(id)arg2;
- (id)appendBool:(BOOL)arg1 withName:(id)arg2 ifEqualTo:(BOOL)arg3;
- (id)appendBool:(BOOL)arg1 withName:(id)arg2;
- (void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3;
- (void)appendString:(id)arg1 withName:(id)arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(BOOL)arg3;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (void)appendRightArrow;
- (void)appendProem:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)appendCustomFormatWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)appendDictionary:(id)arg1 withName:(id)arg2 itemBlock:(CDUnknownBlockType)arg3;
- (void)appendCollection:(id)arg1 withName:(id)arg2 itemBlock:(CDUnknownBlockType)arg3;
- (void)appendItem:(CDUnknownBlockType)arg1;
- (void)appendSectionWithItemCount:(long long)arg1 openDelimiter:(id)arg2 closeDelimiter:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)appendBodySectionWithOpenDelimiter:(id)arg1 closeDelimiter:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)defaultLineBreakTreatment:(CDUnknownBlockType)arg1;
- (void)multipleLines:(CDUnknownBlockType)arg1;
- (void)sameLine:(CDUnknownBlockType)arg1;
- (id)description;
- (id)init;

@end

